<div id="not_right_side" class="ic-app-main-content">
        <div id="content-wrapper" class="ic-Layout-contentWrapper">
          
          <div id="content" class="ic-Layout-contentMain" role="main">
            
<style>
  #right-side-wrapper {
    height: 100%;
  }
</style>



<div id="assignment_show" class="assignment content_underline_links">
    <!--Student View-->
    <div class="assignment-title">
      <div class="title-content">
        <h1 class="title">
          Program 4: Twisty Passages
        <button aria-haspopup="dialog" class="ally-accessible-versions ally-add-tooltip" data-id="assignment:495436" data-ally-content-id="assignment:495436" data-ally-richcontent-eid="assignment:495436" aria-label="Alternative formats" title="Alternative formats">
    <span class="ally-prominent-af-download-button"></span>
</button></h1>
      </div>
      <div class="assignment-buttons">
        

        
      </div>
    </div>
    
<ul class="student-assignment-overview">
  <li>
    <span class="title">Due</span>
    <span class="value">
          <span class="date_text">
                <span class="display_date">Nov 30, 2021</span> by 
                <span class="display_time">11:59pm</span>
          </span><!--
        --></span>
  </li>
  <li>
    <span class="title">Points</span>
    <span class="value">15</span>
  </li>
    <li>
      <span class="title">Submitting</span>
      <span class="value">a file upload</span>
    </li>
      <li>
        <span class="title">File Types</span>
        <span class="value">cpp, txt, h, and hpp</span>
      </li>
  

  <div class="clear"></div>
</ul>

  <div class="clear"></div>


  <div class="clear"></div>



  <div class="description user_content enhanced"><h2>Overview</h2>
<p>Working with up to one partner.&nbsp;</p>
<p>In this, the final assignment of the course, students must build a program from scratch that generates and displays square mazes of arbitrary size. After completing this assignment, students will:</p>
<ul>
<li>Demonstrate the ability to think through an abstract problem and produce a working implementation.&nbsp;</li>
<li>Use some of the abstract data types discussed throughout the semester.&nbsp;</li>
<li>Implement a graph.&nbsp;</li>
<li>Understand how one may use the depth-first-search algorithm to generate an object.&nbsp;</li>
</ul>
<h2>Requirements</h2>
<p>When launched without any command-line arguments, this program automatically generates a random maze forty rooms wide by forty rooms high. When launched with command-line arguments, if the argument is an integer between one and one-hundred, it produces a square maze of the provided width. After generating the maze, the program will print it to the screen. Were the user to launch this program with the following text:&nbsp;</p>
<pre>prog4 1</pre>
<p>The program will produce output that looks like this:</p>
<pre>XXX<br>X.X<br>XXX</pre>
<p>When launched with:</p>
<pre>prog4 2</pre>
<p>The program may produce output that looks like this (it would be random):</p>
<pre>XXXXX<br>X...X<br>X.XXX<br>X...X<br>XXXXX</pre>
<p>When launched with:</p>
<pre>prog4 3</pre>
<p>The program may produce output that looks like this (it would be random):</p>
<pre>XXXXXXX<br>X.....X<br>X.XXX.X<br>X...X.X<br>X.XXX.X<br>X...X.X<br>XXXXXXX</pre>
<p>These examples uses '.' to indicate walkable spaces a 'X' to represent a wall.&nbsp;</p>
<p>To be clear about the relationship between the size provided and the 'rooms' mentioned, here is the previous maze with numbers added at the middle of each room:</p>
<pre>XXXXXXX<br>X1.2.3X<br>X.XXX.X<br>X4.5X6X<br>X.XXX.X<br>X7.8X9X<br>XXXXXXX</pre>
<p>A maze of size 3x3 requires 9 rooms. Students must determine how to represent the maze in their own implementations. An array of room objects might work for some students, maps of doors may work for others.&nbsp;</p>
<h3>Algorithm</h3>
<p>The strategy for generating a maze in this assignment requires depth-first-search. Using a stack and a way to keep track of where it visited in the past, the algorithm will produce dynamic mazes.&nbsp;</p>
<ol>
<li>Begin by marking all rooms in the graph as 'unvisited' (this may be placing them in a set . . or by not having them in a set based on how your mind works).&nbsp;</li>
<li>Push the starting node into a stack of work to do (the starting node is the lower-left of the grid).&nbsp;</li>
<li>While the stack of work is not empty:</li>
<li style="list-style-type: none;">
<ol>
<li>Pop the top of the stack as the current node.</li>
<li>If the current node has been visited, ignore it and continue.&nbsp;</li>
<li>Else load all of the current node's&nbsp;<em>unvisited</em> neighbors into the stack of work to do.&nbsp;</li>
<li>Pick a random currently-unvisited neighbor and break down the wall, or build a door, between the two rooms. This will vary based on how you choose to represent your maze, so know how you are doing it before you proceed.&nbsp;</li>
<li>Mark the current node visited.</li>
</ol>
</li>
</ol>
<p>When the stack is empty, the algorithm is finished, and the maze should now appear</p>
<h2>Delivery</h2>
<p>On or before the due date, students shall submit their version of their main program (e.g., main.cpp) and the output their program produced when they ran it locally with a size of 10 (I should see a random maze).&nbsp;</p>
<h2>Grading</h2>
<p>You earn points on this assignment through the following ways:</p>
<table border="1">
<tbody>
<tr>
<td>Points</td>
<td>Requirement</td>
</tr>
<tr>
<td>5</td>
<td>Maze abstraction captured correctly</td>
</tr>
<tr>
<td>5</td>
<td>Depth-first search produces a random maze</td>
</tr>
<tr>
<td>3</td>
<td>Coding Style: For example, using helper functions with data structures as return values</td>
</tr>
<tr>
<td>2</td>
<td>Example Output provided.</td>
</tr>
</tbody>
</table></div>


  <div style="display: none;">
    <span class="timestamp">1638345599</span>
    <span class="due_date_string">11/30/2021</span>
    <span class="due_time_string">11:59pm</span>
  </div>
</div>






  <div id="rubrics" class="mathjax_ignore" style="margin-bottom: 10px;">
    <div style="display: none;" id="rubric_parameters">
      <input type="hidden" name="rubric_association[association_type]" value="Assignment">
      <input type="hidden" name="rubric_association[association_id]" value="495436">
      <input type="hidden" name="rubric_association[purpose]" value="grading">
    </div>
    
<div id="rubric_long_description_dialog" style="display: none;">
  <div class="editing">
    <form id="edit_criterion_form" class="no-margin-bottom">
      <div>
        <label class="rating_form_label">Description
          <textarea class="description" rows="1" name="description"></textarea>
        </label>
      </div>
      <div>
        <label class="rating_form_label">Long Description
          <textarea class="long_description" rows="4" name="long_description"></textarea>
        </label>
      </div>
      <div class="button-container">
        <button type="button" class="btn btn button-secondary cancel_button">Cancel</button>
        <button type="button" class="btn save_button btn-primary">Update Criterion</button>
      </div>
    </form>
  </div>
  <div class="displaying">
    <div class="long_description">
    </div>
  </div>
</div>
<div id="rubric_criterion_comments_dialog" style="display: none;">
  <div class="criterion_description" style="border-bottom: 1px solid #ccc; padding: 5px 0; font-size: 1.2em; font-weight: bold; margin-bottom: 5px;" tabindex="-1"></div>
  <div class="editing">
    <label for="criterion_comments_textarea">
      Additional Comments:
    </label>
    <textarea id="criterion_comments_textarea" class="criterion_comments" name="criterion_comments" style="width: 370px;"></textarea>
    <div class="button-container">
      <button type="button" class="btn btn button-secondary cancel_button">Cancel</button>
      <button type="button" class="btn save_button">Update Comments</button>
    </div>
  </div>
  <div class="displaying">
    Additional Comments:
    <div class="criterion_comments" style="margin-top: 10px;">
    </div>
  </div>
</div>
<div id="rubric_rating_dialog" style="display: none;">
  <div class="description" style="border-bottom: 1px solid #ccc; padding: 5px 0; font-size: 1.2em; font-weight: bold; margin-bottom: 5px;">
    <span id="edit_rating_form_criterion_description"></span>
  </div>
  <div class="editing">
    <form id="edit_rating_form" class="no-margin-bottom">
      <div class="toggle_for_hide_points">
        <div><label id="rating_form_score_label" class="rating_form_label">Rating Score</label></div>
        <span id="rating_form_max_score_label" hidden="">Rating max score</span>
        <input id="points" aria-labelledby="rating_form_score_label" type="text" size="2" name="points" class="no-margin-bottom span1">
        <span class="range_rating">to &gt;
          <input aria-label="Rating min score" type="text" size="2" name="min_points" class="no-margin-bottom span1 min_points" placeholder="min">
        </span>pts
      </div>
      <div>
        <label for="rating_form_title" class="rating_form_label">Rating Title</label>
        <input id="rating_form_title" type="text" class="rating_description" style="width: 90%;" name="description">
      </div>
      <div>
        <label for="rating_form_description" class="rating_form_label">Rating Description</label>
        <textarea id="rating_form_description" rows="4" style="width: 90%;" class="rating_long_description" name="rating_long_description" form="edit_rating_form"></textarea>
      </div>
      <div class="button-container">
        <button type="button" class="btn button-secondary cancel_button">Cancel</button>
        <button type="button" class="btn btn-primary save_button ok_button">Update Rating</button>
      </div>
    </form>
  </div>
</div>

  </div>
  
<div class="rubric_container rubric  " id="default_rubric" style="display: none;">
  <div class="screenreader-only"><h2>Rubric</h2></div>
  <div class="rubric_title">
    <div style="display: none;" class="links displaying pull-right">
      <a href="/courses/92637/rubrics/%7B%7B%20id%20%7D%7D" class=" edit_rubric_link no-print no-hover" style="" title="Edit Rubric" aria-label="Edit Rubric" role="button"><i class="icon-edit standalone-icon"></i></a>
      <a href="https://sdsu.instructure.com/search/rubrics?q=" class="find_rubric_link no-print no-hover" style="" title="Find Another Rubric" aria-label="Find Another Rubric" role="button"><i class="icon-search standalone-icon"></i></a>
        <a href="/courses/92637/rubric_associations/%7B%7B%20rubric_association_id%20%7D%7D" class="delete_rubric_link no-print no-hover" style="" title="Delete Rubric" aria-label="Delete Rubric" role="button"><i class="icon-trash standalone-icon"></i></a>
      <div style="display: none;">
        <div class="use_for_grading">&nbsp;</div>
        <div class="free_form_criterion_comments">&nbsp;</div>
        <div class="hide_score_total">&nbsp;</div>
        <div class="hide_outcome_results">&nbsp;</div>
        <div class="hide_points">&nbsp;</div>
        <div class="rubric_association_id">&nbsp;</div>
          <div class="user_id">&nbsp;</div>
        <div class="assessment_type"></div>
        <a href="/courses/92637/rubric_associations/%7B%7B%20rubric_association_id%20%7D%7D/assessments/%7B%7B%20assessment_id%20%7D%7D" rel="nofollow" class="edit_assessment_link">&nbsp;</a>
        <a href="/courses/92637/rubrics/%7B%7B%20rubric_id%20%7D%7D" class="edit_rubric_url">&nbsp;</a>
          <a href="/courses/92637/rubric_associations/%7B%7B%20association_id%20%7D%7D" class="delete_rubric_url">&nbsp;</a>
      </div>
    </div>
    <div style="float: right; font-size: 0.8em; display: none;" class="links displaying locked">
      <span style="">Can't change a rubric once you've started using it.</span>
        <a href="/courses/92637/rubric_associations/%7B%7B%20association_id%20%7D%7D" class="delete_rubric_url" style="display: none;">&nbsp;</a>
    </div>

    <div class="editing" style="float: right;">
      <a href="https://sdsu.instructure.com/search/rubrics?q=" class="find_rubric_link icon-search" style="" title="Find Existing Rubric">Find a Rubric</a>
    </div>
    <div class="editing" style="text-align: left">
      <label for="rubric-title">Title:</label>
      <input id="rubric-title" type="text" class="no-margin-bottom" name="title" value="Some Rubric" style="width: 200px;" maxlength="255" aria-label="Title:">
      <a href="https://sdsu.instructure.com/search/rubrics?q=" style="display: none;"><img alt="" src="https://du11hjcvx0uqb.cloudfront.net/dist/images/find-6164443e2a.png"> Find Rubric</a>
    </div>
    <div class="displaying">
      <span class="title" tabindex="-1">Title</span>
    </div>
    <div class="has-assessments-warning" style="display: none;">
      You've already rated students with this rubric. Any major changes could affect their assessment results.
    </div>
  </div>
<table class="rubric_table">
<caption>
  <div class="screenreader-only">
    <span class="title">Title</span>
  </div>
</caption>
<thead>
  <tr>
    <th scope="col">Criteria</th>
    <th scope="col">Ratings</th>
    <th scope="col" class="toggle_for_hide_points ">
      Pts
    </th>
  </tr>
</thead>
<tbody>
  
<tr id="criterion_blank" class="criterion blank" style="display: none;">
  <td class="criterion_description hover-container pad-box-micro">
    <div class="container">
      <div class="links editing">
          <a href="#" class="edit_criterion_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit criterion description</span></a>
        <a href="#" class="delete_criterion_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete criterion row</span></a>
      </div>
      <div class="description_content">
        <span class="outcome_sr_content" aria-hidden="true">
          <i class="learning_outcome_flag icon-outcomes" aria-hidden="true"></i>
          <span class="screenreader-only">This criterion is linked to a Learning Outcome</span>
        </span>
        <span class="description description_title">Description of criterion</span>
        <span class="learning_outcome_id" style="display: none;"></span>
        <span class="criterion_id" style="display: none;"></span>
          <div class="long_description small_description"></div>
        <div class="hide_when_learning_outcome ">
          <div class="criterion_use_range_div editing toggle_for_hide_points ">
            <label>Range
              <input type="checkbox" class="criterion_use_range"></label>
          </div>
        </div>
        <div class="threshold toggle_for_hide_points ">
          threshold:
          <span class="mastery_points">5</span> pts
        </div>
      </div>

    </div>
  </td>
  <td style="padding: 0;">
      <table class="ratings" style=""><tbody><tr>
          <td class="rating edge_rating
                
                ">
            <div class="container">
              <div class="rating-main">
                  <div class="editing links">
                    <a href="#" class="edit_rating_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit rating</span></a>
                    <a href="#" class="delete_rating_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete rating</span></a>
                  </div>
                  <div class="clear"></div>
                <span class="nobr toggle_for_hide_points ">
                  <span class="points">5</span>
                  <span class="range_rating" style="display: none;">to &gt;<span class="min_points">0</span></span> pts
                </span>
                <div class="description rating_description_value">Full Marks</div>
                <div class="rating_long_description small_description"></div>
                <span class="rating_id" style="display: none;">blank</span>
              </div>
                <div class="editing links add_rating_link">
                  <a href="#" class="add_rating_link_after" aria-label="Add rating"><i class="icon-add icon-Solid"></i></a>
                </div>
            </div>
          </td>
          <td class="rating edge_rating
                infinitesimal
                ">
            <div class="container">
              <div class="rating-main">
                  <div class="editing links">
                    <a href="#" class="edit_rating_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit rating</span></a>
                    <a href="#" class="delete_rating_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete rating</span></a>
                  </div>
                  <div class="clear"></div>
                <span class="nobr toggle_for_hide_points ">
                  <span class="points">0</span>
                  <span class="range_rating" style="display: none;">to &gt;<span class="min_points">0</span></span> pts
                </span>
                <div class="description rating_description_value">No Marks</div>
                <div class="rating_long_description small_description"></div>
                <span class="rating_id" style="display: none;">blank_2</span>
              </div>
            </div>
          </td>
      </tr></tbody></table>
      <div style="display: none; font-size: 0.8em; margin: 5px;" class="custom_ratings">
        This area will be used by the assessor to leave comments related to this criterion.
      </div>
  </td>
  <td class="nobr points_form toggle_for_hide_points ">
    <div class="editing" style="white-space: normal">
      <span style="white-space: nowrap; font-size: 0.8em">
          
            <input type="text" aria-label="Points" value="5" class="criterion_points span1 no-margin-bottom">
           pts
      </span><br>
    </div>
    <div class="displaying">
      <span style="white-space: nowrap;">
        <span class="criterion_rating_points_holder" style="display: none;">
          <span class="criterion_rating_points">&nbsp;</span> /
        </span>
        <span class="display_criterion_points">5</span> pts<br>
      </span>
    </div>
    <div class="ignoring">
      <span> -- </span>
    </div>
    <div class="criterion_comments">
        <a href="#" class="no-hover criterion_comments_link" title="Additional Comments">
          <img alt="Additional Comments" src="https://du11hjcvx0uqb.cloudfront.net/dist/images/rubric_comment-ddae8546ab.png">
        </a>
        <div class="custom_rating" style="display: none;"></div>
    </div>
  </td>
</tr>

  <tr id="criterion_1" class="criterion" style="display: table-row;">
  <td class="criterion_description hover-container pad-box-micro">
    <div class="container">
      <div class="links editing">
          <a href="#" class="edit_criterion_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit criterion description</span></a>
        <a href="#" class="delete_criterion_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete criterion row</span></a>
      </div>
      <div class="description_content">
        <span class="outcome_sr_content" aria-hidden="true">
          <i class="learning_outcome_flag icon-outcomes" aria-hidden="true"></i>
          <span class="screenreader-only">This criterion is linked to a Learning Outcome</span>
        </span>
        <span class="description description_title">Description of criterion</span>
        <span class="learning_outcome_id" style="display: none;"></span>
        <span class="criterion_id" style="display: none;"></span>
          <div class="long_description small_description"></div>
        <div class="hide_when_learning_outcome ">
          <div class="criterion_use_range_div editing toggle_for_hide_points ">
            <label>Range
              <input type="checkbox" class="criterion_use_range"></label>
          </div>
        </div>
        <div class="threshold toggle_for_hide_points ">
          threshold:
          <span class="mastery_points">5</span> pts
        </div>
      </div>

    </div>
  </td>
  <td style="padding: 0;">
      <table class="ratings" style=""><tbody><tr>
          <td class="rating edge_rating
                
                ">
            <div class="container">
              <div class="rating-main">
                  <div class="editing links">
                    <a href="#" class="edit_rating_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit rating</span></a>
                    <a href="#" class="delete_rating_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete rating</span></a>
                  </div>
                  <div class="clear"></div>
                <span class="nobr toggle_for_hide_points ">
                  <span class="points">5</span>
                  <span class="range_rating" style="display: none;">to &gt;<span class="min_points">0</span></span> pts
                </span>
                <div class="description rating_description_value">Full Marks</div>
                <div class="rating_long_description small_description"></div>
                <span class="rating_id" style="display: none;">blank</span>
              </div>
                <div class="editing links add_rating_link">
                  <a href="#" class="add_rating_link_after" aria-label="Add rating"><i class="icon-add icon-Solid"></i></a>
                </div>
            </div>
          </td>
          <td class="rating edge_rating
                infinitesimal
                ">
            <div class="container">
              <div class="rating-main">
                  <div class="editing links">
                    <a href="#" class="edit_rating_link"><i class="icon-edit standalone-icon"></i><span class="screenreader-only">Edit rating</span></a>
                    <a href="#" class="delete_rating_link"><i class="icon-trash standalone-icon"></i><span class="screenreader-only">Delete rating</span></a>
                  </div>
                  <div class="clear"></div>
                <span class="nobr toggle_for_hide_points ">
                  <span class="points">0</span>
                  <span class="range_rating" style="display: none;">to &gt;<span class="min_points">0</span></span> pts
                </span>
                <div class="description rating_description_value">No Marks</div>
                <div class="rating_long_description small_description"></div>
                <span class="rating_id" style="display: none;">blank_2</span>
              </div>
            </div>
          </td>
      </tr></tbody></table>
      <div style="display: none; font-size: 0.8em; margin: 5px;" class="custom_ratings">
        This area will be used by the assessor to leave comments related to this criterion.
      </div>
  </td>
  <td class="nobr points_form toggle_for_hide_points ">
    <div class="editing" style="white-space: normal">
      <span style="white-space: nowrap; font-size: 0.8em">
          
            <input type="text" aria-label="Points" value="5" class="criterion_points span1 no-margin-bottom">
           pts
      </span><br>
    </div>
    <div class="displaying">
      <span style="white-space: nowrap;">
        <span class="criterion_rating_points_holder" style="display: none;">
          <span class="criterion_rating_points">&nbsp;</span> /
        </span>
        <span class="display_criterion_points">5</span> pts<br>
      </span>
    </div>
    <div class="ignoring">
      <span> -- </span>
    </div>
    <div class="criterion_comments">
        <a href="#" class="no-hover criterion_comments_link" title="Additional Comments">
          <img alt="Additional Comments" src="https://du11hjcvx0uqb.cloudfront.net/dist/images/rubric_comment-ddae8546ab.png">
        </a>
        <div class="custom_rating" style="display: none;"></div>
    </div>
  </td>
</tr><tr class="summary">
    <td colspan="4">
      <div class="total_points_holder toggle_for_hide_points " style="float: right; ">
        <span>Total Points:
            <span class="rubric_total">
              5
            </span>
 <span class="assessing">out of 5</span>        </span>
      </div>
      <div class="editing pull-left">
        <span id="add_criterion_holder" class="criterion_link"></span>
      </div>
      <div class="clear"></div>
    </td>
  </tr>
</tbody>
</table>
</div>
<table style="display: none;">
  <tbody><tr id="edit_rubric">
    <td colspan="4">
      <form id="edit_rubric_form" class="edit-rubric-form no-margin-bottom">
        <div class="rubric_custom_ratings" style="">
          <input type="checkbox" id="rubric_custom_rating" class="rubric_custom_rating">
          <label for="rubric_custom_rating">I'll write free-form comments when assessing students</label>
        </div>
          <div class="hide_points" style="">
            <input type="checkbox" id="hide_points" class="hide_points_checkbox">
            <label for="hide_points">Remove points from rubric</label>
          </div>
          <div class="hide_outcome_results" style="">
            <input type="checkbox" id="hide_outcome_results" class="hide_outcome_results_checkbox">
            <label for="hide_outcome_results">Don't post Outcomes results to Learning Mastery Gradebook</label>
          </div>
          <div class="rubric_grading" style="">
            <input type="checkbox" id="grading_rubric" class="grading_rubric_checkbox">
            <label for="grading_rubric">Use this rubric for assignment grading</label>
          </div>
        <div class="totalling_rubric" style="">
          <input type="checkbox" id="totalling_rubric" class="totalling_rubric_checkbox">
          <label for="totalling_rubric">Hide score total for assessment results</label>
        </div>
        <div class="ic-Action-header ic-Action-header--half-margin">
          <div class="ic-Action-header__Primary">
            <button type="button" class="Button cancel_button">Cancel</button>
            <button type="submit" class="Button Button--primary save_button">Create Rubric</button>
          </div>
        </div>
      </form>
    </td>
  </tr>
</tbody></table>


  <div id="assignment_external_tools"><div></div></div>

  


          </div>
        </div>
        <div id="right-side-wrapper" class="ic-app-main-content__secondary">
          <aside id="right-side" role="complementary">
            
<div id="sidebar_content">

    
<div class="details">
  <h2>Submission</h2>
    <div class="header">
        <i class="icon-check" aria-hidden="true"></i>
        Submitted!
    </div>
  <div class="content">
    <span class="">
        Nov 23, 2021 at 11:14pm
    </span>

    <div>
      <a href="/courses/92637/assignments/495436/submissions/112822">
        Submission Details
      </a>
    </div>

        <div>
          <a href="/courses/92637/assignments/495436/submissions/112822?download=4577411">
            Download main-3.cpp
          </a>
        </div>
        <span class="assignment_presenter_for_submission" style="display: none;">success</span>
        <span class="react_pill_container"></span>
        <div>
          <a href="/courses/92637/assignments/495436/submissions/112822?download=4577412">
            Download mazeoutput-2.txt
          </a>
        </div>
        <span class="assignment_presenter_for_submission" style="display: none;">success</span>
        <span class="react_pill_container"></span>

    <div class="module">
          <div>Grade: 15 <span style="font-size: 0.8em;">(15 pts possible)</span></div>
          <div>Graded Anonymously: no</div>

    </div>


    <div class="comments module">
        <h3>Comments: </h3>

        
          <div id="comment-2009844" class="comment">
            Excellent Job, Yuta! It was a pleasure having you in the class.
            <div class="comment_attachments">
            </div>
            <div class="signature" style="font-size: 0.8em; text-align: right;">
              Roberto Ortiz, Dec 23, 2021 at 9:20am
            </div>
          </div>
    </div>
  </div>
</div>


</div>

          </aside>
        </div>
      </div>
