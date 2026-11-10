/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d13618; name: FUN_00d13618
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d13618(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 float param_4,undefined8 *param_5,long param_6,undefined4 param_7,
                 undefined8 param_8,undefined4 param_9,char *param_10,char *param_11)

{
  long *plVar1;
  LightEventType *pLVar2;
  float *pfVar3;
  long lVar4;
  char cVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined3 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  unkbyte9 Var53;
  undefined7 uVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  float *pfVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined4 uVar149;
  undefined1 auVar150 [12];
  undefined1 auVar158 [12];
  float fVar227;
  float fVar228;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar151 [12];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar168 [16];
  undefined1 auVar167 [16];
  undefined1 auVar166 [16];
  undefined1 auVar165 [16];
  undefined1 auVar172 [16];
  undefined1 auVar171 [16];
  undefined1 auVar170 [16];
  undefined1 auVar169 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar152 [12];
  undefined1 auVar153 [12];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar184 [16];
  undefined1 auVar183 [16];
  undefined1 auVar182 [16];
  undefined1 auVar181 [16];
  undefined1 auVar188 [16];
  undefined1 auVar187 [16];
  undefined1 auVar186 [16];
  undefined1 auVar185 [16];
  undefined1 auVar189 [16];
  undefined1 auVar193 [16];
  undefined1 auVar192 [16];
  undefined1 auVar191 [16];
  undefined1 auVar190 [16];
  undefined1 auVar197 [16];
  undefined1 auVar196 [16];
  undefined1 auVar195 [16];
  undefined1 auVar194 [16];
  undefined1 auVar154 [12];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar204 [16];
  undefined1 auVar203 [16];
  undefined1 auVar202 [16];
  undefined1 auVar201 [16];
  undefined1 auVar155 [12];
  undefined1 auVar156 [12];
  undefined1 auVar157 [12];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar213 [16];
  undefined1 auVar212 [16];
  undefined1 auVar211 [16];
  undefined1 auVar210 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar226 [16];
  undefined1 auVar225 [16];
  undefined1 auVar224 [16];
  undefined1 auVar223 [16];
  float fVar229;
  undefined1 auVar232 [12];
  undefined1 auVar234 [12];
  undefined1 auVar235 [12];
  undefined1 auVar236 [12];
  undefined1 auVar237 [12];
  undefined1 auVar238 [12];
  undefined1 auVar239 [12];
  undefined1 auVar240 [12];
  float fVar266;
  float fVar230;
  float fVar231;
  float fVar267;
  float fVar268;
  float fVar269;
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar273;
  float fVar274;
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar247 [16];
  undefined1 auVar246 [16];
  undefined1 auVar245 [16];
  undefined1 auVar244 [16];
  undefined1 auVar251 [16];
  undefined1 auVar250 [16];
  undefined1 auVar249 [16];
  undefined1 auVar248 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar233 [12];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  float fVar275;
  undefined1 auVar277 [12];
  undefined1 auVar281 [12];
  undefined1 auVar282 [12];
  undefined1 auVar283 [12];
  undefined1 auVar284 [12];
  undefined1 auVar285 [12];
  float fVar310;
  float fVar276;
  float fVar311;
  float fVar312;
  float fVar313;
  float fVar314;
  undefined1 auVar286 [16];
  undefined1 auVar278 [12];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar279 [12];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar280 [12];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar320 [12];
  undefined1 auVar321 [12];
  undefined1 auVar322 [12];
  float fVar315;
  undefined8 uVar317;
  undefined1 auVar323 [12];
  undefined1 auVar324 [12];
  float fVar366;
  float fVar367;
  float fVar368;
  undefined1 auVar325 [16];
  undefined1 auVar319 [12];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar349 [16];
  undefined1 auVar348 [16];
  undefined1 auVar347 [16];
  undefined1 auVar346 [16];
  undefined1 auVar353 [16];
  undefined1 auVar352 [16];
  undefined1 auVar351 [16];
  undefined1 auVar350 [16];
  undefined1 auVar354 [16];
  uint uVar316;
  ulong uVar318;
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar365 [16];
  undefined1 auVar364 [16];
  undefined1 auVar363 [16];
  undefined1 auVar362 [16];
  undefined1 auVar371 [12];
  undefined1 auVar372 [12];
  undefined1 auVar373 [12];
  undefined8 uVar369;
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  int iVar395;
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar370 [12];
  undefined1 auVar394 [16];
  float fVar424;
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar425 [12];
  float fVar485;
  undefined1 auVar427 [16];
  float fVar486;
  undefined1 auVar431 [16];
  undefined1 auVar430 [16];
  undefined1 auVar429 [16];
  undefined1 auVar428 [16];
  undefined1 auVar432 [16];
  undefined1 auVar436 [16];
  undefined1 auVar435 [16];
  undefined1 auVar434 [16];
  undefined1 auVar433 [16];
  undefined1 auVar437 [16];
  undefined1 auVar441 [16];
  undefined1 auVar440 [16];
  undefined1 auVar439 [16];
  undefined1 auVar438 [16];
  undefined1 auVar445 [16];
  undefined1 auVar444 [16];
  undefined1 auVar443 [16];
  undefined1 auVar442 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar451 [16];
  undefined1 auVar450 [16];
  undefined1 auVar449 [16];
  undefined1 auVar448 [16];
  undefined1 auVar455 [16];
  undefined1 auVar454 [16];
  undefined1 auVar453 [16];
  undefined1 auVar452 [16];
  undefined1 auVar459 [16];
  undefined1 auVar458 [16];
  undefined1 auVar457 [16];
  undefined1 auVar456 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar465 [16];
  undefined1 auVar464 [16];
  undefined1 auVar463 [16];
  undefined1 auVar462 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar426 [12];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar475 [16];
  undefined1 auVar474 [16];
  undefined1 auVar473 [16];
  undefined1 auVar476 [16];
  undefined1 auVar480 [16];
  undefined1 auVar479 [16];
  undefined1 auVar478 [16];
  undefined1 auVar477 [16];
  undefined1 auVar484 [16];
  undefined1 auVar483 [16];
  undefined1 auVar482 [16];
  undefined1 auVar481 [16];
  float fVar487;
  float fVar488;
  float fVar489;
  float fVar490;
  undefined8 uVar492;
  float fVar527;
  float fVar528;
  float fVar529;
  float fVar531;
  float fVar532;
  float fVar533;
  byte bVar538;
  byte bVar539;
  float fVar535;
  float fVar536;
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar502 [16];
  undefined1 auVar501 [16];
  undefined1 auVar500 [16];
  undefined1 auVar499 [16];
  undefined1 auVar506 [16];
  undefined1 auVar505 [16];
  undefined1 auVar504 [16];
  undefined1 auVar503 [16];
  float fVar530;
  undefined8 uVar493;
  undefined1 auVar507 [16];
  undefined1 auVar511 [16];
  undefined1 auVar510 [16];
  undefined1 auVar509 [16];
  undefined1 auVar508 [16];
  undefined1 auVar515 [16];
  undefined1 auVar514 [16];
  undefined1 auVar513 [16];
  undefined1 auVar512 [16];
  undefined1 auVar519 [16];
  undefined1 auVar518 [16];
  undefined1 auVar517 [16];
  undefined1 auVar516 [16];
  undefined1 auVar520 [16];
  undefined1 auVar521 [16];
  uint uVar491;
  int iVar534;
  int iVar537;
  byte bVar540;
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  byte bVar541;
  byte bVar544;
  byte bVar545;
  byte bVar546;
  byte bVar547;
  byte bVar548;
  byte bVar549;
  byte bVar550;
  undefined8 uVar542;
  byte bVar551;
  byte bVar552;
  byte bVar553;
  byte bVar554;
  undefined1 auVar543 [12];
  byte bVar555;
  byte bVar556;
  byte bVar557;
  byte bVar558;
  undefined8 uVar559;
  float fVar560;
  float fVar562;
  float fVar563;
  undefined1 in_q13 [16];
  undefined1 auVar561 [16];
  undefined1 auVar564 [16];
  float fVar565;
  float fVar584;
  undefined8 uVar566;
  float fVar585;
  float fVar586;
  undefined1 auVar568 [16];
  undefined8 uVar567;
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  undefined1 auVar577 [16];
  undefined1 auVar576 [16];
  undefined1 auVar575 [16];
  undefined1 auVar574 [16];
  undefined1 auVar581 [16];
  undefined1 auVar580 [16];
  undefined1 auVar579 [16];
  undefined1 auVar578 [16];
  undefined1 auVar582 [16];
  undefined1 auVar583 [16];
  undefined1 auVar588 [12];
  ulong uVar587;
  undefined1 auVar590 [16];
  undefined1 auVar594 [16];
  undefined1 auVar593 [16];
  undefined1 auVar592 [16];
  undefined1 auVar591 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [16];
  undefined1 auVar597 [16];
  undefined1 auVar601 [16];
  undefined1 auVar600 [16];
  undefined1 auVar599 [16];
  undefined1 auVar598 [16];
  undefined1 auVar602 [16];
  undefined1 auVar589 [12];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [12];
  undefined1 auVar606 [16];
  undefined1 auVar607 [16];
  undefined1 auVar608 [16];
  undefined1 auVar609 [16];
  undefined1 auVar610 [16];
  undefined1 auVar611 [16];
  undefined1 auVar612 [16];
  undefined1 auVar613 [16];
  undefined1 auVar614 [16];
  float fVar615;
  undefined8 uVar616;
  float fVar634;
  float fVar635;
  float fVar636;
  undefined1 auVar617 [16];
  undefined1 auVar618 [16];
  undefined1 auVar619 [16];
  undefined1 auVar623 [16];
  undefined1 auVar622 [16];
  undefined1 auVar621 [16];
  undefined1 auVar620 [16];
  undefined1 auVar624 [16];
  undefined1 auVar628 [16];
  undefined1 auVar627 [16];
  undefined1 auVar626 [16];
  undefined1 auVar625 [16];
  undefined1 auVar629 [16];
  undefined1 auVar630 [16];
  undefined1 auVar631 [16];
  undefined1 auVar632 [16];
  undefined1 auVar633 [16];
  ulong uVar637;
  undefined1 auVar638 [16];
  undefined1 auVar641 [16];
  undefined1 auVar640 [16];
  undefined1 auVar639 [16];
  undefined1 auVar642 [16];
  undefined1 auVar643 [16];
  undefined1 auVar644 [16];
  undefined1 auVar647 [16];
  undefined1 auVar646 [16];
  undefined1 auVar645 [16];
  undefined1 auVar648 [16];
  undefined1 auVar649 [16];
  undefined1 auVar650 [16];
  undefined1 auVar651 [16];
  undefined1 auVar652 [16];
  undefined1 auVar656 [16];
  undefined1 auVar655 [16];
  undefined1 auVar654 [16];
  undefined1 auVar653 [16];
  float fVar657;
  float fVar665;
  float fVar666;
  undefined1 in_q21 [16];
  undefined1 auVar660 [16];
  undefined1 auVar659 [16];
  undefined1 auVar658 [16];
  undefined1 auVar661 [16];
  undefined1 auVar662 [16];
  undefined1 auVar663 [16];
  undefined1 auVar664 [16];
  undefined1 auVar667 [16];
  undefined1 auVar670 [16];
  undefined1 auVar669 [16];
  undefined1 auVar668 [16];
  undefined1 auVar671 [16];
  undefined1 auVar675 [16];
  undefined1 auVar674 [16];
  undefined1 auVar673 [16];
  undefined1 auVar672 [16];
  undefined1 auVar676 [16];
  undefined1 auVar677 [16];
  undefined1 auVar678 [16];
  undefined1 auVar679 [16];
  float fVar680;
  undefined1 auVar681 [16];
  undefined1 auVar682 [16];
  float fVar683;
  float fVar685;
  float fVar686;
  float fVar687;
  undefined1 auVar684 [16];
  float fVar688;
  float fVar689;
  float fVar690;
  float fVar691;
  float fVar692;
  float fVar693;
  float fVar696;
  undefined1 auVar694 [16];
  undefined1 auVar695 [16];
  undefined1 uVar697;
  undefined1 uVar698;
  undefined1 uVar699;
  undefined1 uVar700;
  undefined1 uVar701;
  undefined1 uVar702;
  undefined1 uVar703;
  undefined1 uVar704;
  undefined1 uVar705;
  undefined1 uVar706;
  undefined1 uVar707;
  undefined1 uVar708;
  float fVar709;
  undefined8 uVar710;
  undefined1 auVar711 [12];
  float fVar719;
  float fVar720;
  undefined1 auVar712 [16];
  undefined1 auVar713 [16];
  undefined1 auVar714 [16];
  undefined1 auVar715 [16];
  undefined1 auVar716 [16];
  undefined1 auVar717 [16];
  undefined1 auVar718 [16];
  int iVar721;
  undefined8 uVar722;
  undefined1 auVar723 [12];
  int iVar726;
  int iVar727;
  int iVar728;
  undefined1 auVar724 [16];
  undefined1 auVar725 [16];
  float fVar729;
  undefined8 uVar730;
  undefined1 auVar731 [12];
  float fVar735;
  float fVar736;
  float fVar737;
  undefined1 auVar732 [16];
  undefined1 auVar733 [16];
  undefined1 auVar734 [16];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float local_330;
  float fStack_32c;
  float fStack_328;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_104;
  byte local_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  byte bStack_fc;
  byte bStack_fb;
  byte bStack_fa;
  byte bStack_f9;
  byte bStack_f8;
  byte bStack_f7;
  byte bStack_f6;
  byte bStack_f5;
  byte bStack_f4;
  byte bStack_f3;
  byte bStack_f2;
  byte bStack_f1;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float local_b4;
  float fStack_b0;
  float local_ac [3];
  
  fStack_c8 = param_1._8_4_;
  local_d0 = param_1._0_4_;
  fStack_cc = param_1._4_4_;
  sVar6 = (short)((uint)(*(int *)(param_6 + 0x250) - *(int *)(param_6 + 0x248)) >> 4) * -0x5555;
  if (sVar6 <= (short)param_9) {
    return;
  }
  if (sVar6 <= (short)param_7) {
    return;
  }
  if (sVar6 <= (short)param_8) {
    return;
  }
  pfVar59 = (float *)FUN_00c4c40c(param_6,param_7);
  fStack_118 = (float)*(undefined8 *)(param_6 + 1000);
  fStack_114 = (float)((ulong)*(undefined8 *)(param_6 + 1000) >> 0x20);
  local_120 = (float)*(undefined8 *)(param_6 + 0x3e0);
  fStack_11c = (float)((ulong)*(undefined8 *)(param_6 + 0x3e0) >> 0x20);
  uVar26 = *(undefined8 *)(param_6 + 0x3f0);
  uVar27 = *(undefined8 *)(param_6 + 0x3f8);
  fStack_e8 = (float)*(undefined8 *)(param_6 + 0x408);
  fStack_e4 = (float)((ulong)*(undefined8 *)(param_6 + 0x408) >> 0x20);
  local_f0 = (float)*(undefined8 *)(param_6 + 0x400);
  fStack_ec = (float)((ulong)*(undefined8 *)(param_6 + 0x400) >> 0x20);
  fVar274 = *pfVar59;
  fVar227 = pfVar59[1];
  fVar228 = pfVar59[2];
  fVar315 = pfVar59[3];
  fVar231 = pfVar59[4];
  fVar268 = pfVar59[5];
  fVar271 = pfVar59[6];
  fVar273 = pfVar59[7];
  fVar275 = pfVar59[8];
  fVar310 = pfVar59[9];
  fVar312 = pfVar59[10];
  fVar368 = pfVar59[0xb];
  auVar606 = *(undefined1 (*) [16])(pfVar59 + 0xc);
  fVar530 = auVar606._0_4_;
  fVar485 = auVar606._4_4_;
  uVar28 = *(undefined8 *)(param_6 + 0x410);
  uVar29 = *(undefined8 *)(param_6 + 0x418);
  fVar424 = auVar606._8_4_;
  fVar486 = auVar606._12_4_;
  lVar60 = FUN_00c4c40c(param_6,param_8);
  uVar492 = *(undefined8 *)(param_6 + 0x3e0);
  uVar542 = *(undefined8 *)(param_6 + 1000);
  uVar559 = *(undefined8 *)(param_6 + 0x3f0);
  uVar566 = *(undefined8 *)(param_6 + 0x3f8);
  uVar616 = *(undefined8 *)(param_6 + 0x400);
  uVar710 = *(undefined8 *)(param_6 + 0x408);
  fStack_158 = (float)*(undefined8 *)(param_6 + 0x418);
  local_160 = (float)*(undefined8 *)(param_6 + 0x410);
  fStack_15c = (float)((ulong)*(undefined8 *)(param_6 + 0x410) >> 0x20);
  fVar690 = *(float *)(lVar60 + 0x30);
  fVar696 = *(float *)(lVar60 + 0x34);
  fVar487 = *(float *)(lVar60 + 0x38);
  fVar692 = *(float *)(lVar60 + 0x3c);
  lVar60 = FUN_00c4c40c(param_6,param_9);
  plVar1 = (long *)(param_6 + 0x450);
  uVar722 = *(undefined8 *)(param_6 + 0x400);
  uVar730 = *(undefined8 *)(param_6 + 0x408);
  uVar317 = *(undefined8 *)(param_6 + 0x3e0);
  uVar369 = *(undefined8 *)(param_6 + 1000);
  fStack_1e8 = (float)*(undefined8 *)(param_6 + 0x3f8);
  local_1f0 = (float)*(undefined8 *)(param_6 + 0x3f0);
  fStack_1ec = (float)((ulong)*(undefined8 *)(param_6 + 0x3f0) >> 0x20);
  uVar493 = *(undefined8 *)(param_6 + 0x410);
  uVar567 = *(undefined8 *)(param_6 + 0x418);
  fVar276 = *(float *)(lVar60 + 0x30);
  fVar311 = *(float *)(lVar60 + 0x34);
  fVar313 = *(float *)(lVar60 + 0x38);
  fVar314 = *(float *)(lVar60 + 0x3c);
  lVar60 = nn::os::GetCurrentThread();
  do {
    lVar64 = *plVar1;
    lVar62 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar64;
      *(long *)(param_6 + 0x458) = lVar62;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_6 + 0x460);
LAB_00d137fc:
  while ((lVar64 != 0 && (lVar60 != lVar64))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar64 = *plVar1;
      lVar62 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar64;
        *(long *)(param_6 + 0x458) = lVar62;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar61 = *plVar1;
    if (lVar61 != lVar64 || *(long *)(param_6 + 0x458) != lVar62) {
      bVar57 = false;
      ClearExclusiveLocal();
      goto LAB_00d1382c;
    }
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar64;
      *(long *)(param_6 + 0x454) = lVar62 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar57 = true;
LAB_00d1382c:
  if (!bVar57) {
    lVar64 = lVar61;
    lVar62 = *(long *)(param_6 + 0x458);
    goto LAB_00d137fc;
  }
  local_320 = (float)uVar492;
  fStack_31c = (float)((ulong)uVar492 >> 0x20);
  fStack_318 = (float)uVar542;
  lVar64 = (long)(short)param_7;
  local_330 = (float)uVar559;
  fStack_32c = (float)((ulong)uVar559 >> 0x20);
  fStack_328 = (float)uVar566;
  fVar488 = (float)uVar26;
  fVar489 = (float)((ulong)uVar26 >> 0x20);
  fVar490 = (float)uVar27;
  fVar729 = (float)((ulong)uVar27 >> 0x20);
  fStack_360 = (float)uVar317;
  fStack_35c = (float)((ulong)uVar317 >> 0x20);
  fStack_358 = (float)uVar369;
  local_190 = (float)uVar28;
  fStack_18c = (float)((ulong)uVar28 >> 0x20);
  fStack_188 = (float)uVar29;
  fStack_184 = (float)((ulong)uVar29 >> 0x20);
  fVar229 = local_120 * fVar274 + fVar488 * fVar227 + local_f0 * fVar228 + local_190 * fVar315;
  fVar266 = fStack_11c * fVar274 + fVar489 * fVar227 + fStack_ec * fVar228 + fStack_18c * fVar315;
  fVar269 = fStack_118 * fVar274 + fVar490 * fVar227 + fStack_e8 * fVar228 + fStack_188 * fVar315;
  fVar272 = fStack_114 * fVar274 + fVar729 * fVar227 + fStack_e4 * fVar228 + fStack_184 * fVar315;
  fVar230 = local_120 * fVar231 + fVar488 * fVar268 + local_f0 * fVar271 + local_190 * fVar273;
  fVar267 = fStack_11c * fVar231 + fVar489 * fVar268 + fStack_ec * fVar271 + fStack_18c * fVar273;
  fVar270 = fStack_118 * fVar231 + fVar490 * fVar268 + fStack_e8 * fVar271 + fStack_188 * fVar273;
  fVar273 = fStack_114 * fVar231 + fVar729 * fVar268 + fStack_e4 * fVar271 + fStack_184 * fVar273;
  lVar60 = *(long *)(param_6 + 0x248) +
           (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
  fVar315 = local_120 * fVar275 + fVar488 * fVar310 + local_f0 * fVar312 + local_190 * fVar368;
  fVar366 = fStack_11c * fVar275 + fVar489 * fVar310 + fStack_ec * fVar312 + fStack_18c * fVar368;
  fVar367 = fStack_118 * fVar275 + fVar490 * fVar310 + fStack_e8 * fVar312 + fStack_188 * fVar368;
  fVar368 = fStack_114 * fVar275 + fVar729 * fVar310 + fStack_e4 * fVar312 + fStack_184 * fVar368;
  fVar231 = local_120 * fVar530 + fVar488 * fVar485 + local_f0 * fVar424 + local_190 * fVar486;
  fVar268 = fStack_11c * fVar530 + fVar489 * fVar485 + fStack_ec * fVar424 + fStack_18c * fVar486;
  fVar271 = fStack_118 * fVar530 + fVar490 * fVar485 + fStack_e8 * fVar424 + fStack_188 * fVar486;
  fVar274 = fStack_114 * fVar530 + fVar729 * fVar485 + fStack_e4 * fVar424 + fStack_184 * fVar486;
  bStack_f4 = SUB41(fVar274,0);
  bStack_f3 = (byte)((uint)fVar274 >> 8);
  bStack_f2 = (byte)((uint)fVar274 >> 0x10);
  bStack_f1 = (byte)((uint)fVar274 >> 0x18);
  bStack_fc = SUB41(fVar268,0);
  bStack_fb = (byte)((uint)fVar268 >> 8);
  bStack_fa = (byte)((uint)fVar268 >> 0x10);
  bStack_f9 = (byte)((uint)fVar268 >> 0x18);
  fVar274 = local_320 * fVar690 + local_330 * fVar696 + (float)uVar616 * fVar487 +
            local_160 * fVar692;
  fVar227 = fStack_31c * fVar690 + fStack_32c * fVar696 + (float)((ulong)uVar616 >> 0x20) * fVar487
            + fStack_15c * fVar692;
  fVar228 = fStack_318 * fVar690 + fStack_328 * fVar696 + (float)uVar710 * fVar487 +
            fStack_158 * fVar692;
  local_200 = (float)uVar722;
  fStack_1fc = (float)((ulong)uVar722 >> 0x20);
  fStack_1f8 = (float)uVar730;
  uVar26 = *(undefined8 *)(lVar60 + 0x10);
  uVar27 = *(undefined8 *)(lVar60 + 0x18);
  local_1a0 = (float)uVar493;
  fStack_19c = (float)((ulong)uVar493 >> 0x20);
  fStack_198 = (float)uVar567;
  fVar275 = fStack_360 * fVar276 + local_1f0 * fVar311 + local_200 * fVar313 + local_1a0 * fVar314;
  fVar310 = fStack_35c * fVar276 + fStack_1ec * fVar311 + fStack_1fc * fVar313 +
            fStack_19c * fVar314;
  fVar312 = fStack_358 * fVar276 + fStack_1e8 * fVar311 + fStack_1f8 * fVar313 +
            fStack_198 * fVar314;
  do {
    lVar60 = *plVar1;
    lVar62 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x458) = lVar62;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar61 = *plVar1;
    lVar63 = *(long *)(param_6 + 0x458);
    if (lVar61 != lVar60 || lVar63 != lVar62) {
      bVar57 = false;
      ClearExclusiveLocal();
      goto LAB_00d13998;
    }
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x454) = lVar62 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar57 = true;
LAB_00d13998:
  if (!bVar57) {
    do {
      lVar60 = *plVar1;
      lVar62 = *(long *)(param_6 + 0x458);
      if (lVar60 != lVar61 || lVar62 != lVar63) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d16624;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar61;
        *(long *)(param_6 + 0x454) = lVar63 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
joined_r0x00d16624:
    if (!bVar57) {
      do {
        lVar61 = *plVar1;
        lVar63 = *(long *)(param_6 + 0x458);
        if (lVar61 != lVar60 || lVar63 != lVar62) {
          bVar57 = false;
          ClearExclusiveLocal();
          lVar60 = lVar61;
          lVar62 = lVar63;
          goto joined_r0x00d16624;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar60;
          *(long *)(param_6 + 0x454) = lVar62 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
      lVar60 = lVar61;
      lVar62 = lVar63;
      goto joined_r0x00d16624;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar60 = nn::os::GetCurrentThread();
  do {
    lVar62 = *plVar1;
    lVar61 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar62;
      *(long *)(param_6 + 0x458) = lVar61;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar62 != 0 && (lVar60 != lVar62))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar62 = *plVar1;
        lVar61 = *(long *)(param_6 + 0x458);
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar62;
          *(long *)(param_6 + 0x458) = lVar61;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar63 = *plVar1;
      if (lVar63 != lVar62 || *(long *)(param_6 + 0x458) != lVar61) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d13a08;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar62;
        *(long *)(param_6 + 0x454) = lVar61 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d13a08:
    lVar62 = lVar63;
    lVar61 = *(long *)(param_6 + 0x458);
  } while (!bVar57);
  lVar62 = (long)(short)param_8;
  lVar60 = *(long *)(param_6 + 0x248) +
           (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar62 * 2) * 0x30;
  uVar28 = *(undefined8 *)(lVar60 + 0x10);
  uVar29 = *(undefined8 *)(lVar60 + 0x18);
  do {
    lVar60 = *plVar1;
    lVar61 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x458) = lVar61;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar63 = *plVar1;
    lVar4 = *(long *)(param_6 + 0x458);
    if (lVar63 != lVar60 || lVar4 != lVar61) {
      bVar57 = false;
      ClearExclusiveLocal();
      goto LAB_00d13a78;
    }
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x454) = lVar61 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar57 = true;
LAB_00d13a78:
  if (!bVar57) {
    do {
      lVar60 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      if (lVar60 != lVar63 || lVar61 != lVar4) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d16680;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar63;
        *(long *)(param_6 + 0x454) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
joined_r0x00d16680:
    if (!bVar57) {
      do {
        lVar63 = *plVar1;
        lVar4 = *(long *)(param_6 + 0x458);
        if (lVar63 != lVar60 || lVar4 != lVar61) {
          bVar57 = false;
          ClearExclusiveLocal();
          lVar60 = lVar63;
          lVar61 = lVar4;
          goto joined_r0x00d16680;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar60;
          *(long *)(param_6 + 0x454) = lVar61 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
      lVar60 = lVar63;
      lVar61 = lVar4;
      goto joined_r0x00d16680;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  uVar705 = SUB41(fVar272,0);
  uVar706 = (undefined1)((uint)fVar272 >> 8);
  uVar707 = (undefined1)((uint)fVar272 >> 0x10);
  uVar708 = (undefined1)((uint)fVar272 >> 0x18);
  uVar54 = CONCAT16(uVar707,CONCAT15(uVar706,CONCAT14(uVar705,fVar269)));
  fVar487 = (float)(CONCAT17(uVar708,uVar54) >> 0x20);
  fVar696 = (float)(CONCAT17(bStack_f1,
                             CONCAT16(bStack_f2,CONCAT15(bStack_f3,CONCAT14(bStack_f4,fVar271)))) >>
                   0x20);
  fVar690 = (float)(CONCAT17(bStack_f9,
                             CONCAT16(bStack_fa,CONCAT15(bStack_fb,CONCAT14(bStack_fc,fVar231)))) >>
                   0x20);
  auVar681._4_4_ = fVar270;
  auVar681._0_4_ = fVar270;
  auVar681._8_4_ = fVar270;
  auVar681._12_4_ = fVar270;
  auVar561._4_4_ = fVar230;
  auVar561._0_4_ = fVar230;
  auVar561._8_4_ = fVar230;
  auVar561._12_4_ = fVar230;
  auVar330._4_12_ = in_q13._4_12_;
  auVar330._0_4_ = fVar229;
  auVar564._12_4_ = in_q13._12_4_;
  auVar564._0_8_ = auVar330._0_8_;
  auVar564._8_4_ = fVar315;
  auVar595._8_8_ = auVar564._8_8_;
  auVar595._4_4_ = fVar229;
  auVar595._0_4_ = fVar229;
  auVar326._0_12_ = auVar595._0_12_;
  auVar326._12_4_ = fVar315;
  fVar487 = fVar487 * fVar487;
  auVar658._4_12_ = in_q21._4_12_;
  auVar658._0_4_ = fVar266;
  auVar659._12_4_ = in_q21._12_4_;
  auVar659._0_8_ = auVar658._0_8_;
  auVar659._8_4_ = fVar366;
  auVar498._8_8_ = auVar659._8_8_;
  auVar498._4_4_ = fVar266;
  auVar498._0_4_ = fVar266;
  auVar660._0_12_ = auVar498._0_12_;
  auVar660._12_4_ = fVar366;
  uStack_148 = SUB41(fVar315,0);
  uStack_147 = (undefined1)((uint)fVar315 >> 8);
  uStack_146 = (undefined1)((uint)fVar315 >> 0x10);
  uStack_145 = (undefined1)((uint)fVar315 >> 0x18);
  local_150 = SUB41(fVar229,0);
  uStack_14f = (undefined1)((uint)fVar229 >> 8);
  uStack_14e = (undefined1)((uint)fVar229 >> 0x10);
  uStack_14d = (undefined1)((uint)fVar229 >> 0x18);
  auVar606._0_4_ = fVar487 + fVar273 * fVar273;
  auVar606._4_4_ = fVar368 * fVar368 + 0.0;
  auVar606._8_4_ = fVar487 + fVar273 * fVar273;
  auVar606._12_4_ = fVar368 * fVar368 + 0.0;
  auVar606 = NEON_ext(auVar606,auVar606,4,1);
  auVar638._4_4_ = fVar267;
  auVar638._0_4_ = fVar267;
  auVar638._8_4_ = fVar267;
  auVar638._12_4_ = fVar267;
  uVar697 = SUB41(fVar273,0);
  uVar698 = (undefined1)((uint)fVar273 >> 8);
  uVar699 = (undefined1)((uint)fVar273 >> 0x10);
  uVar700 = (undefined1)((uint)fVar273 >> 0x18);
  bVar57 = auVar606._0_4_ + auVar606._4_4_ == 0.0;
  uVar701 = SUB41(fVar368,0);
  uVar702 = (undefined1)((uint)fVar368 >> 8);
  uVar703 = (undefined1)((uint)fVar368 >> 0x10);
  uVar704 = (undefined1)((uint)fVar368 >> 0x18);
  uVar22 = (undefined3)((uint7)uVar54 >> 0x20);
  fVar530 = (float)_DAT_03cac210;
  fVar485 = (float)((ulong)_DAT_03cac210 >> 0x20);
  fVar424 = (float)_UNK_03cac218;
  fVar486 = (float)((ulong)_UNK_03cac218 >> 0x20);
  fVar487 = (float)_DAT_03cac270;
  fVar692 = (float)((ulong)_DAT_03cac270 >> 0x20);
  fVar276 = (float)_UNK_03cac278;
  fVar311 = (float)((ulong)_UNK_03cac278 >> 0x20);
  fVar313 = (float)((ulong)_DAT_03cab860 >> 0x20);
  fVar314 = (float)((ulong)_UNK_03cab868 >> 0x20);
  if (fVar696 == 1.0 && bVar57) {
    auVar561 = NEON_ext(auVar326,auVar561,8,1);
    auVar564 = NEON_ext(auVar660,auVar638,8,1);
    auVar15._4_4_ = fVar269;
    auVar15._0_4_ = fVar269;
    auVar15._8_4_ = fVar367;
    auVar15._12_4_ = fVar367;
    auVar326 = NEON_ext(auVar15,auVar681,8,1);
    fVar531 = (fVar267 * auVar326._0_4_ - auVar564._0_4_ * fVar270) * fVar487;
    fVar532 = (fVar266 * auVar326._4_4_ - auVar564._4_4_ * fVar269) * fVar692;
    fVar533 = (fVar266 * auVar326._8_4_ - auVar564._8_4_ * fVar269) * fVar276;
    fVar736 = (fVar266 * auVar326._12_4_ - auVar564._12_4_ * fVar269) * fVar311;
    fVar488 = fVar229 * fVar531;
    fVar489 = fVar230 * fVar532;
    fVar490 = fVar315 * fVar533;
    fVar729 = fVar736 * 0.0;
    auVar141._0_4_ = fVar488 + fVar489;
    auVar141._4_4_ = fVar490 + fVar729;
    auVar141._8_4_ = fVar488 + fVar489;
    auVar141._12_4_ = fVar490 + fVar729;
    auVar606 = NEON_ext(auVar141,auVar141,4,1);
    auVar142._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar142._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar142._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar142._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar595 = NEON_frecpe(auVar142,4);
    iVar721 = -(uint)(auVar142._0_4_ == 0.0);
    iVar726 = -(uint)(auVar142._4_4_ == 0.0);
    iVar727 = -(uint)(auVar142._8_4_ == 0.0);
    iVar728 = -(uint)(auVar142._12_4_ == 0.0);
    bVar541 = ~(byte)iVar721;
    bVar544 = ~(byte)((uint)iVar721 >> 8);
    bVar545 = ~(byte)((uint)iVar721 >> 0x10);
    bVar546 = ~(byte)((uint)iVar721 >> 0x18);
    bVar547 = ~(byte)iVar726;
    bVar548 = ~(byte)((uint)iVar726 >> 8);
    bVar549 = ~(byte)((uint)iVar726 >> 0x10);
    bVar550 = ~(byte)((uint)iVar726 >> 0x18);
    bVar551 = ~(byte)iVar727;
    bVar552 = ~(byte)((uint)iVar727 >> 8);
    bVar553 = ~(byte)((uint)iVar727 >> 0x10);
    bVar554 = ~(byte)((uint)iVar727 >> 0x18);
    bVar555 = ~(byte)iVar728;
    bVar556 = ~(byte)((uint)iVar728 >> 8);
    bVar557 = ~(byte)((uint)iVar728 >> 0x10);
    bVar558 = ~(byte)((uint)iVar728 >> 0x18);
    auVar606 = NEON_frecps(auVar595,auVar142,4);
    auVar734._0_4_ = auVar595._0_4_ * auVar606._0_4_;
    auVar734._4_4_ = auVar595._4_4_ * auVar606._4_4_;
    auVar734._8_4_ = auVar595._8_4_ * auVar606._8_4_;
    auVar734._12_4_ = auVar595._12_4_ * auVar606._12_4_;
    auVar606 = NEON_frecps(auVar734,auVar142,4);
    fVar488 = auVar734._0_4_ * auVar606._0_4_;
    fVar489 = auVar734._4_4_ * auVar606._4_4_;
    fVar490 = auVar734._8_4_ * auVar606._8_4_;
    fVar729 = auVar734._12_4_ * auVar606._12_4_;
    fVar527 = (fVar230 * auVar326._0_4_ - auVar561._0_4_ * fVar270) * (float)_DAT_03cab860 * fVar488
    ;
    fVar528 = (fVar229 * auVar326._4_4_ - auVar561._4_4_ * fVar269) * fVar313 * fVar489;
    fVar529 = (fVar229 * auVar326._8_4_ - auVar561._8_4_ * fVar269) * (float)_UNK_03cab868 * fVar490
    ;
    fVar735 = (fVar229 * auVar326._12_4_ - auVar561._12_4_ * fVar269) * fVar314 * fVar729;
    fVar535 = (float)CONCAT13((byte)((uint)fVar527 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar527 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar527 >> 8) & bVar544,
                                                SUB41(fVar527,0) & bVar541)));
    auVar731._0_8_ =
         CONCAT17((byte)((uint)fVar528 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar528 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar528 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar528,0) & bVar547,fVar535))));
    auVar731[8] = SUB41(fVar529,0) & bVar551;
    auVar731[9] = (byte)((uint)fVar529 >> 8) & bVar552;
    auVar731[10] = (byte)((uint)fVar529 >> 0x10) & bVar553;
    auVar731[0xb] = (byte)((uint)fVar529 >> 0x18) & bVar554;
    auVar733[0xc] = SUB41(fVar735,0) & bVar555;
    auVar733._0_12_ = auVar731;
    auVar733[0xd] = (byte)((uint)fVar735 >> 8) & bVar556;
    auVar733[0xe] = (byte)((uint)fVar735 >> 0x10) & bVar557;
    auVar733[0xf] = (byte)((uint)fVar735 >> 0x18) & bVar558;
    fVar531 = fVar531 * fVar488;
    fVar532 = fVar532 * fVar489;
    fVar533 = fVar533 * fVar490;
    fVar736 = fVar736 * fVar729;
    fVar527 = (float)CONCAT13((byte)((uint)fVar531 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar531 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar531 >> 8) & bVar544,
                                                SUB41(fVar531,0) & bVar541)));
    auVar723._0_8_ =
         CONCAT17((byte)((uint)fVar532 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar532 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar532 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar532,0) & bVar547,fVar527))));
    auVar723[8] = SUB41(fVar533,0) & bVar551;
    auVar723[9] = (byte)((uint)fVar533 >> 8) & bVar552;
    auVar723[10] = (byte)((uint)fVar533 >> 0x10) & bVar553;
    auVar723[0xb] = (byte)((uint)fVar533 >> 0x18) & bVar554;
    auVar724[0xc] = SUB41(fVar736,0) & bVar555;
    auVar724._0_12_ = auVar723;
    auVar724[0xd] = (byte)((uint)fVar736 >> 8) & bVar556;
    auVar724[0xe] = (byte)((uint)fVar736 >> 0x10) & bVar557;
    auVar724[0xf] = (byte)((uint)fVar736 >> 0x18) & bVar558;
    fVar488 = (fVar230 * auVar564._0_4_ - auVar561._0_4_ * fVar267) * fVar487 * fVar488;
    fVar489 = (fVar229 * auVar564._4_4_ - auVar561._4_4_ * fVar266) * fVar692 * fVar489;
    fVar490 = (fVar229 * auVar564._8_4_ - auVar561._8_4_ * fVar266) * fVar276 * fVar490;
    fVar729 = (fVar229 * auVar564._12_4_ - auVar561._12_4_ * fVar266) * fVar311 * fVar729;
    fVar488 = (float)CONCAT13((byte)((uint)fVar488 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar488 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar488 >> 8) & bVar544,
                                                SUB41(fVar488,0) & bVar541)));
    auVar711._0_8_ =
         CONCAT17((byte)((uint)fVar489 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar489 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar489 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar489,0) & bVar547,fVar488))));
    auVar711[8] = SUB41(fVar490,0) & bVar551;
    auVar711[9] = (byte)((uint)fVar490 >> 8) & bVar552;
    auVar711[10] = (byte)((uint)fVar490 >> 0x10) & bVar553;
    auVar711[0xb] = (byte)((uint)fVar490 >> 0x18) & bVar554;
    auVar712[0xc] = SUB41(fVar729,0) & bVar555;
    auVar712._0_12_ = auVar711;
    auVar712[0xd] = (byte)((uint)fVar729 >> 8) & bVar556;
    auVar712[0xe] = (byte)((uint)fVar729 >> 0x10) & bVar557;
    auVar712[0xf] = (byte)((uint)fVar729 >> 0x18) & bVar558;
    auVar543._0_4_ = -(fVar527 * fVar231 + fVar535 * fVar268 + fVar488 * fVar271);
    auVar543._4_4_ =
         -((float)((ulong)auVar723._0_8_ >> 0x20) * fVar231 +
           (float)((ulong)auVar731._0_8_ >> 0x20) * fVar268 +
          (float)((ulong)auVar711._0_8_ >> 0x20) * fVar271);
    auVar543._8_4_ =
         -(auVar723._8_4_ * fVar231 + auVar731._8_4_ * fVar268 + auVar711._8_4_ * fVar271);
  }
  else {
    auVar7._4_4_ = fVar269;
    auVar7._0_4_ = fVar269;
    auVar7._8_4_ = fVar367;
    auVar7._12_4_ = fVar367;
    auVar564 = NEON_ext(auVar7,auVar681,8,1);
    auVar16[4] = uVar697;
    auVar16._0_4_ = fVar273;
    auVar16[5] = uVar698;
    auVar16[6] = uVar699;
    auVar16[7] = uVar700;
    auVar16[8] = uVar697;
    auVar16[9] = uVar698;
    auVar16[10] = uVar699;
    auVar16[0xb] = uVar700;
    auVar16[0xc] = uVar697;
    auVar16[0xd] = uVar698;
    auVar16[0xe] = uVar699;
    auVar16[0xf] = uVar700;
    auVar21[3] = uVar708;
    auVar21._0_3_ = uVar22;
    auVar21[4] = uVar705;
    auVar21[5] = uVar706;
    auVar21[6] = uVar707;
    auVar21[7] = uVar708;
    auVar21[8] = uVar701;
    auVar21[9] = uVar702;
    auVar21[10] = uVar703;
    auVar21[0xb] = uVar704;
    auVar21[0xc] = uVar701;
    auVar21[0xd] = uVar702;
    auVar21[0xe] = uVar703;
    auVar21[0xf] = uVar704;
    auVar606 = NEON_ext(auVar21,auVar16,8,1);
    fVar685 = auVar564._0_4_;
    fVar686 = auVar564._4_4_;
    fVar687 = auVar564._8_4_;
    fVar688 = auVar606._0_4_;
    fVar689 = auVar606._4_4_;
    fVar691 = auVar606._8_4_;
    fVar693 = auVar606._12_4_;
    fVar615 = fVar696 * fVar685 - fVar271 * fVar688;
    fVar634 = fVar696 * fVar686 - fVar271 * fVar689;
    fVar635 = fVar696 * fVar687 - fVar271 * fVar691;
    fVar636 = fVar368 * auVar564._12_4_ - fVar367 * fVar693;
    fVar488 = fVar271 * fVar273 - fVar270 * fVar696;
    fVar527 = fVar271 * fVar272 - fVar269 * fVar696;
    fVar531 = fVar271 * fVar272 - fVar269 * fVar696;
    fVar535 = fVar367 * fVar272 - fVar269 * fVar368;
    auVar606 = NEON_ext(auVar326,auVar561,8,1);
    auVar561 = NEON_ext(auVar660,auVar638,8,1);
    fVar729 = auVar561._0_4_;
    fVar735 = auVar561._4_4_;
    fVar736 = auVar561._8_4_;
    fVar683 = auVar561._12_4_;
    fVar657 = auVar606._0_4_;
    fVar665 = auVar606._4_4_;
    fVar666 = auVar606._8_4_;
    fVar680 = auVar606._12_4_;
    fVar489 = fVar270 * fVar688 - fVar685 * fVar273;
    fVar528 = fVar269 * fVar689 - fVar686 * fVar272;
    fVar532 = fVar269 * fVar691 - fVar687 * fVar272;
    fVar536 = fVar269 * fVar693 - auVar564._12_4_ * fVar272;
    fVar490 = fVar690 * fVar657 - fVar231 * fVar729;
    fVar529 = fVar690 * fVar665 - fVar231 * fVar735;
    fVar533 = fVar690 * fVar666 - fVar231 * fVar736;
    fVar709 = fVar231 * fVar267 - fVar230 * fVar690;
    fVar719 = fVar231 * fVar266 - fVar229 * fVar690;
    fVar720 = fVar231 * fVar266 - fVar229 * fVar690;
    fVar560 = fVar230 * fVar729 - fVar657 * fVar267;
    fVar562 = fVar229 * fVar735 - fVar665 * fVar266;
    fVar563 = fVar229 * fVar736 - fVar666 * fVar266;
    fVar565 = (fVar267 * fVar615 + fVar488 * fVar729 + fVar489 * fVar690) * _DAT_03cabc00;
    fVar584 = (fVar266 * fVar634 + fVar527 * fVar735 + fVar528 * fVar690) * _UNK_03cabc04;
    fVar585 = (fVar266 * fVar635 + fVar531 * fVar736 + fVar532 * fVar690) * _UNK_03cabc08;
    fVar586 = (fVar266 * fVar636 + fVar535 * fVar683 + fVar536 * fVar366) * _UNK_03cabc0c;
    fVar729 = fVar229 * fVar565;
    fVar735 = fVar230 * fVar584;
    fVar736 = fVar315 * fVar585;
    fVar737 = fVar231 * fVar586;
    auVar65._0_4_ = fVar729 + fVar735;
    auVar65._4_4_ = fVar736 + fVar737;
    auVar65._8_4_ = fVar729 + fVar735;
    auVar65._12_4_ = fVar736 + fVar737;
    auVar606 = NEON_ext(auVar65,auVar65,4,1);
    auVar66._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar66._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar66._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar66._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar561 = NEON_frecpe(auVar66,4);
    auVar606 = NEON_frecps(auVar561,auVar66,4);
    auVar732._0_4_ = auVar561._0_4_ * auVar606._0_4_;
    auVar732._4_4_ = auVar561._4_4_ * auVar606._4_4_;
    auVar732._8_4_ = auVar561._8_4_ * auVar606._8_4_;
    auVar732._12_4_ = auVar561._12_4_ * auVar606._12_4_;
    auVar606 = NEON_frecps(auVar732,auVar66,4);
    iVar721 = -(uint)(auVar66._0_4_ == 0.0);
    iVar726 = -(uint)(auVar66._4_4_ == 0.0);
    iVar727 = -(uint)(auVar66._8_4_ == 0.0);
    iVar728 = -(uint)(auVar66._12_4_ == 0.0);
    fVar729 = auVar732._0_4_ * auVar606._0_4_;
    fVar735 = auVar732._4_4_ * auVar606._4_4_;
    fVar736 = auVar732._8_4_ * auVar606._8_4_;
    fVar737 = auVar732._12_4_ * auVar606._12_4_;
    bVar541 = ~(byte)iVar721;
    bVar544 = ~(byte)((uint)iVar721 >> 8);
    bVar545 = ~(byte)((uint)iVar721 >> 0x10);
    bVar546 = ~(byte)((uint)iVar721 >> 0x18);
    bVar547 = ~(byte)iVar726;
    bVar548 = ~(byte)((uint)iVar726 >> 8);
    bVar549 = ~(byte)((uint)iVar726 >> 0x10);
    bVar550 = ~(byte)((uint)iVar726 >> 0x18);
    bVar551 = ~(byte)iVar727;
    bVar552 = ~(byte)((uint)iVar727 >> 8);
    bVar553 = ~(byte)((uint)iVar727 >> 0x10);
    bVar554 = ~(byte)((uint)iVar727 >> 0x18);
    bVar555 = ~(byte)iVar728;
    bVar556 = ~(byte)((uint)iVar728 >> 8);
    bVar557 = ~(byte)((uint)iVar728 >> 0x10);
    bVar558 = ~(byte)((uint)iVar728 >> 0x18);
    fVar565 = fVar565 * fVar729;
    fVar584 = fVar584 * fVar735;
    fVar585 = fVar585 * fVar736;
    fVar586 = fVar586 * fVar737;
    auVar724[0] = SUB41(fVar565,0) & bVar541;
    auVar724[1] = (byte)((uint)fVar565 >> 8) & bVar544;
    auVar724[2] = (byte)((uint)fVar565 >> 0x10) & bVar545;
    auVar724[3] = (byte)((uint)fVar565 >> 0x18) & bVar546;
    auVar724[4] = SUB41(fVar584,0) & bVar547;
    auVar724[5] = (byte)((uint)fVar584 >> 8) & bVar548;
    auVar724[6] = (byte)((uint)fVar584 >> 0x10) & bVar549;
    auVar724[7] = (byte)((uint)fVar584 >> 0x18) & bVar550;
    auVar724[8] = SUB41(fVar585,0) & bVar551;
    auVar724[9] = (byte)((uint)fVar585 >> 8) & bVar552;
    auVar724[10] = (byte)((uint)fVar585 >> 0x10) & bVar553;
    auVar724[0xb] = (byte)((uint)fVar585 >> 0x18) & bVar554;
    auVar724[0xc] = SUB41(fVar586,0) & bVar555;
    auVar724[0xd] = (byte)((uint)fVar586 >> 8) & bVar556;
    auVar724[0xe] = (byte)((uint)fVar586 >> 0x10) & bVar557;
    auVar724[0xf] = (byte)((uint)fVar586 >> 0x18) & bVar558;
    fVar488 = (fVar230 * fVar615 + fVar488 * fVar657 + fVar489 * fVar231) * fVar530 * fVar729;
    fVar489 = (fVar229 * fVar634 + fVar527 * fVar665 + fVar528 * fVar231) * fVar485 * fVar735;
    fVar527 = (fVar229 * fVar635 + fVar531 * fVar666 + fVar532 * fVar231) * fVar424 * fVar736;
    fVar528 = (fVar229 * fVar636 + fVar535 * fVar680 + fVar536 * fVar315) * fVar486 * fVar737;
    fVar531 = (fVar273 * fVar490 + fVar709 * fVar688 + fVar560 * fVar696) * _DAT_03cabc00 * fVar729;
    fVar532 = (fVar272 * fVar529 + fVar719 * fVar689 + fVar562 * fVar696) * _UNK_03cabc04 * fVar735;
    fVar535 = (fVar272 * fVar533 + fVar720 * fVar691 + fVar563 * fVar696) * _UNK_03cabc08 * fVar736;
    fVar737 = (fVar272 * (fVar366 * fVar680 - fVar315 * fVar683) +
               (fVar315 * fVar266 - fVar229 * fVar366) * fVar693 +
              (fVar229 * fVar683 - fVar680 * fVar266) * fVar368) * _UNK_03cabc0c * fVar737;
    auVar712[0] = SUB41(fVar531,0) & bVar541;
    auVar712[1] = (byte)((uint)fVar531 >> 8) & bVar544;
    auVar712[2] = (byte)((uint)fVar531 >> 0x10) & bVar545;
    auVar712[3] = (byte)((uint)fVar531 >> 0x18) & bVar546;
    auVar712[4] = SUB41(fVar532,0) & bVar547;
    auVar712[5] = (byte)((uint)fVar532 >> 8) & bVar548;
    auVar712[6] = (byte)((uint)fVar532 >> 0x10) & bVar549;
    auVar712[7] = (byte)((uint)fVar532 >> 0x18) & bVar550;
    auVar712[8] = SUB41(fVar535,0) & bVar551;
    auVar712[9] = (byte)((uint)fVar535 >> 8) & bVar552;
    auVar712[10] = (byte)((uint)fVar535 >> 0x10) & bVar553;
    auVar712[0xb] = (byte)((uint)fVar535 >> 0x18) & bVar554;
    auVar712[0xc] = SUB41(fVar737,0) & bVar555;
    auVar712[0xd] = (byte)((uint)fVar737 >> 8) & bVar556;
    auVar712[0xe] = (byte)((uint)fVar737 >> 0x10) & bVar557;
    auVar712[0xf] = (byte)((uint)fVar737 >> 0x18) & bVar558;
    fVar729 = (fVar270 * fVar490 + fVar709 * fVar685 + fVar560 * fVar271) * fVar530 * fVar729;
    fVar735 = (fVar269 * fVar529 + fVar719 * fVar686 + fVar562 * fVar271) * fVar485 * fVar735;
    fVar736 = (fVar269 * fVar533 + fVar720 * fVar687 + fVar563 * fVar271) * fVar424 * fVar736;
    auVar733[0] = SUB41(fVar488,0) & bVar541;
    auVar733[1] = (byte)((uint)fVar488 >> 8) & bVar544;
    auVar733[2] = (byte)((uint)fVar488 >> 0x10) & bVar545;
    auVar733[3] = (byte)((uint)fVar488 >> 0x18) & bVar546;
    auVar733[4] = SUB41(fVar489,0) & bVar547;
    auVar733[5] = (byte)((uint)fVar489 >> 8) & bVar548;
    auVar733[6] = (byte)((uint)fVar489 >> 0x10) & bVar549;
    auVar733[7] = (byte)((uint)fVar489 >> 0x18) & bVar550;
    auVar733[8] = SUB41(fVar527,0) & bVar551;
    auVar733[9] = (byte)((uint)fVar527 >> 8) & bVar552;
    auVar733[10] = (byte)((uint)fVar527 >> 0x10) & bVar553;
    auVar733[0xb] = (byte)((uint)fVar527 >> 0x18) & bVar554;
    auVar733[0xc] = SUB41(fVar528,0) & bVar555;
    auVar733[0xd] = (byte)((uint)fVar528 >> 8) & bVar556;
    auVar733[0xe] = (byte)((uint)fVar528 >> 0x10) & bVar557;
    auVar733[0xf] = (byte)((uint)fVar528 >> 0x18) & bVar558;
    auVar543[0] = SUB41(fVar729,0) & bVar541;
    auVar543[1] = (byte)((uint)fVar729 >> 8) & bVar544;
    auVar543[2] = (byte)((uint)fVar729 >> 0x10) & bVar545;
    auVar543[3] = (byte)((uint)fVar729 >> 0x18) & bVar546;
    auVar543[4] = SUB41(fVar735,0) & bVar547;
    auVar543[5] = (byte)((uint)fVar735 >> 8) & bVar548;
    auVar543[6] = (byte)((uint)fVar735 >> 0x10) & bVar549;
    auVar543[7] = (byte)((uint)fVar735 >> 0x18) & bVar550;
    auVar543[8] = SUB41(fVar736,0) & bVar551;
    auVar543[9] = (byte)((uint)fVar736 >> 8) & bVar552;
    auVar543[10] = (byte)((uint)fVar736 >> 0x10) & bVar553;
    auVar543[0xb] = (byte)((uint)fVar736 >> 0x18) & bVar554;
  }
  fVar488 = auVar724._0_4_ * fVar275 + auVar733._0_4_ * fVar310 + auVar712._0_4_ * fVar312 +
            auVar543._0_4_;
  fVar489 = auVar724._4_4_ * fVar275 + auVar733._4_4_ * fVar310 + auVar712._4_4_ * fVar312 +
            auVar543._4_4_;
  fVar490 = auVar724._8_4_ * fVar275 + auVar733._8_4_ * fVar310 + auVar712._8_4_ * fVar312 +
            auVar543._8_4_;
  fVar275 = auVar724._12_4_ * fVar275 + auVar733._12_4_ * fVar310 + auVar712._12_4_ * fVar312 + 0.0;
  auVar67._0_4_ = fVar488 * fVar488 + fVar489 * fVar489;
  auVar67._4_4_ = fVar490 * fVar490 + fVar275 * fVar275;
  auVar67._8_4_ = fVar488 * fVar488 + fVar489 * fVar489;
  auVar67._12_4_ = fVar490 * fVar490 + fVar275 * fVar275;
  auVar606 = NEON_ext(auVar67,auVar67,4,1);
  uVar730 = a64_TBL(ZEXT816(0),param_2,DAT_03cb5488);
  uVar542 = a64_TBL(ZEXT816(0),param_2,DAT_03cb54c0);
  auVar68._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar68._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar68._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar68._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frsqrte(auVar68,4);
  auVar713._0_4_ = auVar68._0_4_ * auVar606._0_4_;
  auVar713._4_4_ = auVar68._4_4_ * auVar606._4_4_;
  auVar713._8_4_ = auVar68._8_4_ * auVar606._8_4_;
  auVar713._12_4_ = auVar68._12_4_ * auVar606._12_4_;
  auVar561 = NEON_frsqrts(auVar606,auVar713,4);
  auVar617._0_4_ = auVar606._0_4_ * auVar561._0_4_;
  auVar617._4_4_ = auVar606._4_4_ * auVar561._4_4_;
  auVar617._8_4_ = auVar606._8_4_ * auVar561._8_4_;
  auVar617._12_4_ = auVar606._12_4_ * auVar561._12_4_;
  auVar714._0_4_ = auVar68._0_4_ * auVar617._0_4_;
  auVar714._4_4_ = auVar68._4_4_ * auVar617._4_4_;
  auVar714._8_4_ = auVar68._8_4_ * auVar617._8_4_;
  auVar714._12_4_ = auVar68._12_4_ * auVar617._12_4_;
  iVar721 = -(uint)(auVar68._0_4_ == 0.0);
  iVar726 = -(uint)(auVar68._4_4_ == 0.0);
  iVar727 = -(uint)(auVar68._8_4_ == 0.0);
  iVar728 = -(uint)(auVar68._12_4_ == 0.0);
  auVar606 = NEON_frsqrts(auVar617,auVar714,4);
  fVar488 = fVar488 * auVar617._0_4_ * auVar606._0_4_;
  fVar489 = fVar489 * auVar617._4_4_ * auVar606._4_4_;
  fVar490 = fVar490 * auVar617._8_4_ * auVar606._8_4_;
  fVar275 = fVar275 * auVar617._12_4_ * auVar606._12_4_;
  uVar616 = a64_TBL(ZEXT816(0),param_2,DAT_03cb54d8);
  auVar494[0] = SUB41(fVar488,0) & ~(byte)iVar721;
  auVar494[1] = (byte)((uint)fVar488 >> 8) & ~(byte)((uint)iVar721 >> 8);
  auVar494[2] = (byte)((uint)fVar488 >> 0x10) & ~(byte)((uint)iVar721 >> 0x10);
  auVar494[3] = (byte)((uint)fVar488 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18);
  auVar494[4] = SUB41(fVar489,0) & ~(byte)iVar726;
  auVar494[5] = (byte)((uint)fVar489 >> 8) & ~(byte)((uint)iVar726 >> 8);
  auVar494[6] = (byte)((uint)fVar489 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10);
  auVar494[7] = (byte)((uint)fVar489 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18);
  auVar494[8] = SUB41(fVar490,0) & ~(byte)iVar727;
  auVar494[9] = (byte)((uint)fVar490 >> 8) & ~(byte)((uint)iVar727 >> 8);
  auVar494[10] = (byte)((uint)fVar490 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
  auVar494[0xb] = (byte)((uint)fVar490 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
  auVar494[0xc] = SUB41(fVar275,0) & ~(byte)iVar728;
  auVar494[0xd] = (byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar728 >> 8);
  auVar494[0xe] = (byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
  auVar494[0xf] = (byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
  uVar566 = a64_TBL(ZEXT816(0),param_2,DAT_03cb56c8);
  uVar710 = a64_TBL(ZEXT816(0),auVar494,DAT_03cb5488);
  uVar722 = a64_TBL(ZEXT816(0),auVar494,DAT_03cb54c0);
  uVar559 = a64_TBL(ZEXT816(0),auVar494,DAT_03cb56c8);
  uVar492 = a64_TBL(ZEXT816(0),auVar494,DAT_03cb54d8);
  fVar312 = (float)uVar566 * (float)uVar710 - (float)uVar730 * (float)uVar559;
  fVar488 = (float)((ulong)uVar566 >> 0x20) * (float)((ulong)uVar710 >> 0x20) -
            (float)((ulong)uVar730 >> 0x20) * (float)((ulong)uVar559 >> 0x20);
  fVar275 = (float)uVar616 * (float)uVar722 - (float)uVar542 * (float)uVar492;
  fVar310 = (float)((ulong)uVar616 >> 0x20) * (float)((ulong)uVar722 >> 0x20) -
            (float)((ulong)uVar542 >> 0x20) * (float)((ulong)uVar492 >> 0x20);
  auVar69._0_4_ = fVar312 * fVar312 + fVar488 * fVar488;
  auVar69._4_4_ = fVar275 * fVar275 + fVar310 * fVar310;
  auVar69._8_4_ = fVar312 * fVar312 + fVar488 * fVar488;
  auVar69._12_4_ = fVar275 * fVar275 + fVar310 * fVar310;
  auVar606 = NEON_ext(auVar69,auVar69,4,1);
  auVar70._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar70._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar70._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar70._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frsqrte(auVar70,4);
  auVar715._0_4_ = auVar70._0_4_ * auVar606._0_4_;
  auVar715._4_4_ = auVar70._4_4_ * auVar606._4_4_;
  auVar715._8_4_ = auVar70._8_4_ * auVar606._8_4_;
  auVar715._12_4_ = auVar70._12_4_ * auVar606._12_4_;
  auVar561 = NEON_frsqrts(auVar606,auVar715,4);
  auVar618._0_4_ = auVar606._0_4_ * auVar561._0_4_;
  auVar618._4_4_ = auVar606._4_4_ * auVar561._4_4_;
  auVar618._8_4_ = auVar606._8_4_ * auVar561._8_4_;
  auVar618._12_4_ = auVar606._12_4_ * auVar561._12_4_;
  auVar716._0_4_ = auVar70._0_4_ * auVar618._0_4_;
  auVar716._4_4_ = auVar70._4_4_ * auVar618._4_4_;
  auVar716._8_4_ = auVar70._8_4_ * auVar618._8_4_;
  auVar716._12_4_ = auVar70._12_4_ * auVar618._12_4_;
  iVar721 = -(uint)(auVar70._0_4_ == 0.0);
  iVar726 = -(uint)(auVar70._4_4_ == 0.0);
  iVar727 = -(uint)(auVar70._8_4_ == 0.0);
  iVar728 = -(uint)(auVar70._12_4_ == 0.0);
  auVar725[0] = ~(byte)iVar721;
  auVar725[1] = ~(byte)((uint)iVar721 >> 8);
  auVar725[2] = ~(byte)((uint)iVar721 >> 0x10);
  auVar725[3] = ~(byte)((uint)iVar721 >> 0x18);
  auVar725[4] = ~(byte)iVar726;
  auVar725[5] = ~(byte)((uint)iVar726 >> 8);
  auVar725[6] = ~(byte)((uint)iVar726 >> 0x10);
  auVar725[7] = ~(byte)((uint)iVar726 >> 0x18);
  auVar725[8] = ~(byte)iVar727;
  auVar725[9] = ~(byte)((uint)iVar727 >> 8);
  auVar725[10] = ~(byte)((uint)iVar727 >> 0x10);
  auVar725[0xb] = ~(byte)((uint)iVar727 >> 0x18);
  auVar725[0xc] = ~(byte)iVar728;
  auVar725[0xd] = ~(byte)((uint)iVar728 >> 8);
  auVar725[0xe] = ~(byte)((uint)iVar728 >> 0x10);
  auVar725[0xf] = ~(byte)((uint)iVar728 >> 0x18);
  auVar606 = NEON_frsqrts(auVar618,auVar716,4);
  auVar619._0_4_ = auVar618._0_4_ * auVar606._0_4_;
  auVar619._4_4_ = auVar618._4_4_ * auVar606._4_4_;
  auVar619._8_4_ = auVar618._8_4_ * auVar606._8_4_;
  auVar619._12_4_ = auVar618._12_4_ * auVar606._12_4_;
  auVar717._0_4_ = fVar312 * auVar619._0_4_;
  auVar717._4_4_ = fVar488 * auVar619._4_4_;
  auVar717._8_4_ = fVar275 * auVar619._8_4_;
  auVar717._12_4_ = fVar310 * auVar619._12_4_;
  if (fVar696 == 1.0 && bVar57) {
    auVar31[4] = local_150;
    auVar31._0_4_ = fVar229;
    auVar31[5] = uStack_14f;
    auVar31[6] = uStack_14e;
    auVar31[7] = uStack_14d;
    auVar31[8] = uStack_148;
    auVar31[9] = uStack_147;
    auVar31[10] = uStack_146;
    auVar31[0xb] = uStack_145;
    auVar31[0xc] = uStack_148;
    auVar31[0xd] = uStack_147;
    auVar31[0xe] = uStack_146;
    auVar31[0xf] = uStack_145;
    auVar326 = NEON_ext(auVar660,auVar638,8,1);
    auVar34._4_4_ = fVar230;
    auVar34._0_4_ = fVar230;
    auVar34._8_4_ = fVar230;
    auVar34._12_4_ = fVar230;
    auVar595 = NEON_ext(auVar31,auVar34,8,1);
    auVar14._4_4_ = fVar269;
    auVar14._0_4_ = fVar269;
    auVar14._8_4_ = fVar367;
    auVar14._12_4_ = fVar367;
    auVar561 = NEON_ext(auVar14,auVar681,8,1);
    fVar275 = (fVar267 * auVar561._0_4_ - auVar326._0_4_ * fVar270) * fVar487;
    fVar312 = (fVar266 * auVar561._4_4_ - auVar326._4_4_ * fVar269) * fVar692;
    fVar368 = (fVar266 * auVar561._8_4_ - auVar326._8_4_ * fVar269) * fVar276;
    fVar696 = (fVar266 * auVar561._12_4_ - auVar326._12_4_ * fVar269) * fVar311;
    fVar273 = fVar229 * fVar275;
    fVar310 = fVar230 * fVar312;
    fVar315 = fVar315 * fVar368;
    fVar690 = fVar696 * 0.0;
    auVar143._0_4_ = fVar273 + fVar310;
    auVar143._4_4_ = fVar315 + fVar690;
    auVar143._8_4_ = fVar273 + fVar310;
    auVar143._12_4_ = fVar315 + fVar690;
    auVar606 = NEON_ext(auVar143,auVar143,4,1);
    auVar144._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar144._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar144._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar144._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar606 = NEON_frecpe(auVar144,4);
    iVar721 = -(uint)(auVar144._0_4_ == 0.0);
    iVar726 = -(uint)(auVar144._4_4_ == 0.0);
    iVar727 = -(uint)(auVar144._8_4_ == 0.0);
    iVar728 = -(uint)(auVar144._12_4_ == 0.0);
    bVar541 = ~(byte)iVar721;
    bVar544 = ~(byte)((uint)iVar721 >> 8);
    bVar545 = ~(byte)((uint)iVar721 >> 0x10);
    bVar546 = ~(byte)((uint)iVar721 >> 0x18);
    bVar547 = ~(byte)iVar726;
    bVar548 = ~(byte)((uint)iVar726 >> 8);
    bVar549 = ~(byte)((uint)iVar726 >> 0x10);
    bVar550 = ~(byte)((uint)iVar726 >> 0x18);
    bVar551 = ~(byte)iVar727;
    bVar552 = ~(byte)((uint)iVar727 >> 8);
    bVar553 = ~(byte)((uint)iVar727 >> 0x10);
    bVar554 = ~(byte)((uint)iVar727 >> 0x18);
    bVar555 = ~(byte)iVar728;
    bVar556 = ~(byte)((uint)iVar728 >> 8);
    bVar557 = ~(byte)((uint)iVar728 >> 0x10);
    bVar558 = ~(byte)((uint)iVar728 >> 0x18);
    auVar564 = NEON_frecps(auVar606,auVar144,4);
    auVar421._0_4_ = auVar606._0_4_ * auVar564._0_4_;
    auVar421._4_4_ = auVar606._4_4_ * auVar564._4_4_;
    auVar421._8_4_ = auVar606._8_4_ * auVar564._8_4_;
    auVar421._12_4_ = auVar606._12_4_ * auVar564._12_4_;
    auVar606 = NEON_frecps(auVar421,auVar144,4);
    fVar690 = auVar421._0_4_ * auVar606._0_4_;
    fVar530 = auVar421._4_4_ * auVar606._4_4_;
    fVar485 = auVar421._8_4_ * auVar606._8_4_;
    fVar424 = auVar421._12_4_ * auVar606._12_4_;
    fVar275 = fVar275 * fVar690;
    fVar312 = fVar312 * fVar530;
    fVar368 = fVar368 * fVar485;
    fVar696 = fVar696 * fVar424;
    fVar315 = (float)CONCAT13((byte)((uint)fVar275 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar275 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar275 >> 8) & bVar544,
                                                SUB41(fVar275,0) & bVar541)));
    auVar158._0_8_ =
         CONCAT17((byte)((uint)fVar312 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar312 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar312 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar312,0) & bVar547,fVar315))));
    auVar158[8] = SUB41(fVar368,0) & bVar551;
    auVar158[9] = (byte)((uint)fVar368 >> 8) & bVar552;
    auVar158[10] = (byte)((uint)fVar368 >> 0x10) & bVar553;
    auVar158[0xb] = (byte)((uint)fVar368 >> 0x18) & bVar554;
    auVar160[0xc] = SUB41(fVar696,0) & bVar555;
    auVar160._0_12_ = auVar158;
    auVar160[0xd] = (byte)((uint)fVar696 >> 8) & bVar556;
    auVar160[0xe] = (byte)((uint)fVar696 >> 0x10) & bVar557;
    auVar160[0xf] = (byte)((uint)fVar696 >> 0x18) & bVar558;
    fVar273 = (fVar230 * auVar561._0_4_ - auVar595._0_4_ * fVar270) * (float)_DAT_03cab860 * fVar690
    ;
    fVar275 = (fVar229 * auVar561._4_4_ - auVar595._4_4_ * fVar269) * fVar313 * fVar530;
    fVar310 = (fVar229 * auVar561._8_4_ - auVar595._8_4_ * fVar269) * (float)_UNK_03cab868 * fVar485
    ;
    fVar312 = (fVar229 * auVar561._12_4_ - auVar595._12_4_ * fVar269) * fVar314 * fVar424;
    fVar273 = (float)CONCAT13((byte)((uint)fVar273 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar273 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar273 >> 8) & bVar544,
                                                SUB41(fVar273,0) & bVar541)));
    auVar238._0_8_ =
         CONCAT17((byte)((uint)fVar275 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar275 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar275 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar275,0) & bVar547,fVar273))));
    auVar238[8] = SUB41(fVar310,0) & bVar551;
    auVar238[9] = (byte)((uint)fVar310 >> 8) & bVar552;
    auVar238[10] = (byte)((uint)fVar310 >> 0x10) & bVar553;
    auVar238[0xb] = (byte)((uint)fVar310 >> 0x18) & bVar554;
    auVar241[0xc] = SUB41(fVar312,0) & bVar555;
    auVar241._0_12_ = auVar238;
    auVar241[0xd] = (byte)((uint)fVar312 >> 8) & bVar556;
    auVar241[0xe] = (byte)((uint)fVar312 >> 0x10) & bVar557;
    auVar241[0xf] = (byte)((uint)fVar312 >> 0x18) & bVar558;
    fVar690 = (fVar230 * auVar326._0_4_ - auVar595._0_4_ * fVar267) * fVar487 * fVar690;
    fVar530 = (fVar229 * auVar326._4_4_ - auVar595._4_4_ * fVar266) * fVar692 * fVar530;
    fVar485 = (fVar229 * auVar326._8_4_ - auVar595._8_4_ * fVar266) * fVar276 * fVar485;
    fVar424 = (fVar229 * auVar326._12_4_ - auVar595._12_4_ * fVar266) * fVar311 * fVar424;
    fVar275 = (float)CONCAT13((byte)((uint)fVar690 >> 0x18) & bVar546,
                              CONCAT12((byte)((uint)fVar690 >> 0x10) & bVar545,
                                       CONCAT11((byte)((uint)fVar690 >> 8) & bVar544,
                                                SUB41(fVar690,0) & bVar541)));
    auVar283._0_8_ =
         CONCAT17((byte)((uint)fVar530 >> 0x18) & bVar550,
                  CONCAT16((byte)((uint)fVar530 >> 0x10) & bVar549,
                           CONCAT15((byte)((uint)fVar530 >> 8) & bVar548,
                                    CONCAT14(SUB41(fVar530,0) & bVar547,fVar275))));
    auVar283[8] = SUB41(fVar485,0) & bVar551;
    auVar283[9] = (byte)((uint)fVar485 >> 8) & bVar552;
    auVar283[10] = (byte)((uint)fVar485 >> 0x10) & bVar553;
    auVar283[0xb] = (byte)((uint)fVar485 >> 0x18) & bVar554;
    auVar286[0xc] = SUB41(fVar424,0) & bVar555;
    auVar286._0_12_ = auVar283;
    auVar286[0xd] = (byte)((uint)fVar424 >> 8) & bVar556;
    auVar286[0xe] = (byte)((uint)fVar424 >> 0x10) & bVar557;
    auVar286[0xf] = (byte)((uint)fVar424 >> 0x18) & bVar558;
    auVar322._0_4_ = -(fVar315 * fVar231 + fVar273 * fVar268 + fVar275 * fVar271);
    auVar322._4_4_ =
         -((float)((ulong)auVar158._0_8_ >> 0x20) * fVar231 +
           (float)((ulong)auVar238._0_8_ >> 0x20) * fVar268 +
          (float)((ulong)auVar283._0_8_ >> 0x20) * fVar271);
    auVar322._8_4_ =
         -(auVar158._8_4_ * fVar231 + auVar238._8_4_ * fVar268 + auVar283._8_4_ * fVar271);
  }
  else {
    auVar8._4_4_ = fVar269;
    auVar8._0_4_ = fVar269;
    auVar8._8_4_ = fVar367;
    auVar8._12_4_ = fVar367;
    auVar606 = NEON_ext(auVar8,auVar681,8,1);
    auVar17[4] = uVar697;
    auVar17._0_4_ = fVar273;
    auVar17[5] = uVar698;
    auVar17[6] = uVar699;
    auVar17[7] = uVar700;
    auVar17[8] = uVar697;
    auVar17[9] = uVar698;
    auVar17[10] = uVar699;
    auVar17[0xb] = uVar700;
    auVar17[0xc] = uVar697;
    auVar17[0xd] = uVar698;
    auVar17[0xe] = uVar699;
    auVar17[0xf] = uVar700;
    auVar23[3] = uVar708;
    auVar23._0_3_ = uVar22;
    auVar23[4] = uVar705;
    auVar23[5] = uVar706;
    auVar23[6] = uVar707;
    auVar23[7] = uVar708;
    auVar23[8] = uVar701;
    auVar23[9] = uVar702;
    auVar23[10] = uVar703;
    auVar23[0xb] = uVar704;
    auVar23[0xc] = uVar701;
    auVar23[0xd] = uVar702;
    auVar23[0xe] = uVar703;
    auVar23[0xf] = uVar704;
    auVar619 = NEON_ext(auVar23,auVar17,8,1);
    auVar561 = NEON_ext(auVar660,auVar638,8,1);
    fVar729 = auVar606._0_4_;
    fVar527 = auVar606._4_4_;
    fVar528 = auVar606._8_4_;
    fVar533 = auVar619._0_4_;
    fVar736 = auVar619._4_4_;
    fVar535 = auVar619._8_4_;
    fVar536 = auVar619._12_4_;
    fVar529 = fVar696 * fVar729 - fVar271 * fVar533;
    fVar735 = fVar696 * fVar527 - fVar271 * fVar736;
    fVar531 = fVar696 * fVar528 - fVar271 * fVar535;
    fVar532 = fVar368 * auVar606._12_4_ - fVar367 * fVar536;
    fVar680 = fVar271 * fVar273 - fVar270 * fVar696;
    fVar560 = fVar271 * fVar272 - fVar269 * fVar696;
    fVar562 = fVar271 * fVar272 - fVar269 * fVar696;
    fVar563 = fVar367 * fVar272 - fVar269 * fVar368;
    fVar683 = fVar270 * fVar533 - fVar729 * fVar273;
    fVar685 = fVar269 * fVar736 - fVar527 * fVar272;
    fVar686 = fVar269 * fVar535 - fVar528 * fVar272;
    fVar687 = fVar269 * fVar536 - auVar606._12_4_ * fVar272;
    fVar312 = auVar561._0_4_;
    fVar487 = auVar561._4_4_;
    fVar692 = auVar561._8_4_;
    fVar367 = auVar561._12_4_;
    auVar18[4] = local_150;
    auVar18._0_4_ = fVar229;
    auVar18[5] = uStack_14f;
    auVar18[6] = uStack_14e;
    auVar18[7] = uStack_14d;
    auVar18[8] = uStack_148;
    auVar32._4_4_ = fVar230;
    auVar32._0_4_ = fVar230;
    auVar32._8_4_ = fVar230;
    auVar32._12_4_ = fVar230;
    auVar18[9] = uStack_147;
    auVar18[10] = uStack_146;
    auVar18[0xb] = uStack_145;
    auVar18[0xc] = uStack_148;
    auVar18[0xd] = uStack_147;
    auVar18[0xe] = uStack_146;
    auVar18[0xf] = uStack_145;
    auVar606 = NEON_ext(auVar18,auVar32,8,1);
    fVar657 = fVar231 * fVar267 - fVar230 * fVar690;
    fVar665 = fVar231 * fVar266 - fVar229 * fVar690;
    fVar666 = fVar231 * fVar266 - fVar229 * fVar690;
    fVar688 = auVar606._0_4_;
    fVar689 = auVar606._4_4_;
    fVar691 = auVar606._8_4_;
    fVar693 = auVar606._12_4_;
    fVar268 = fVar230 * fVar312 - fVar688 * fVar267;
    fVar275 = fVar229 * fVar487 - fVar689 * fVar266;
    fVar310 = fVar229 * fVar692 - fVar691 * fVar266;
    fVar488 = fVar690 * fVar688 - fVar231 * fVar312;
    fVar489 = fVar690 * fVar689 - fVar231 * fVar487;
    fVar490 = fVar690 * fVar691 - fVar231 * fVar692;
    fVar312 = (fVar267 * fVar529 + fVar680 * fVar312 + fVar683 * fVar690) * _DAT_03cabc00;
    fVar487 = (fVar266 * fVar735 + fVar560 * fVar487 + fVar685 * fVar690) * _UNK_03cabc04;
    fVar690 = (fVar266 * fVar531 + fVar562 * fVar692 + fVar686 * fVar690) * _UNK_03cabc08;
    fVar692 = (fVar266 * fVar532 + fVar563 * fVar367 + fVar687 * fVar366) * _UNK_03cabc0c;
    fVar276 = fVar229 * fVar312;
    fVar311 = fVar230 * fVar487;
    fVar313 = fVar315 * fVar690;
    fVar314 = fVar231 * fVar692;
    auVar71._0_4_ = fVar276 + fVar311;
    auVar71._4_4_ = fVar313 + fVar314;
    auVar71._8_4_ = fVar276 + fVar311;
    auVar71._12_4_ = fVar313 + fVar314;
    auVar606 = NEON_ext(auVar71,auVar71,4,1);
    auVar72._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar72._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar72._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar72._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar606 = NEON_frecpe(auVar72,4);
    auVar638 = NEON_frecps(auVar606,auVar72,4);
    iVar721 = -(uint)(auVar72._0_4_ == 0.0);
    iVar726 = -(uint)(auVar72._4_4_ == 0.0);
    iVar727 = -(uint)(auVar72._8_4_ == 0.0);
    iVar728 = -(uint)(auVar72._12_4_ == 0.0);
    bVar541 = ~(byte)iVar721;
    bVar544 = ~(byte)((uint)iVar721 >> 8);
    bVar545 = ~(byte)((uint)iVar721 >> 0x10);
    bVar546 = ~(byte)((uint)iVar721 >> 0x18);
    bVar547 = ~(byte)iVar726;
    bVar548 = ~(byte)((uint)iVar726 >> 8);
    bVar549 = ~(byte)((uint)iVar726 >> 0x10);
    bVar550 = ~(byte)((uint)iVar726 >> 0x18);
    bVar551 = ~(byte)iVar727;
    bVar552 = ~(byte)((uint)iVar727 >> 8);
    bVar553 = ~(byte)((uint)iVar727 >> 0x10);
    bVar554 = ~(byte)((uint)iVar727 >> 0x18);
    bVar555 = ~(byte)iVar728;
    bVar556 = ~(byte)((uint)iVar728 >> 8);
    bVar557 = ~(byte)((uint)iVar728 >> 0x10);
    bVar558 = ~(byte)((uint)iVar728 >> 0x18);
    auVar159._0_4_ = auVar606._0_4_ * auVar638._0_4_;
    auVar159._4_4_ = auVar606._4_4_ * auVar638._4_4_;
    auVar159._8_4_ = auVar606._8_4_ * auVar638._8_4_;
    auVar159._12_4_ = auVar606._12_4_ * auVar638._12_4_;
    auVar606 = NEON_frecps(auVar159,auVar72,4);
    fVar311 = auVar159._0_4_ * auVar606._0_4_;
    fVar313 = auVar159._4_4_ * auVar606._4_4_;
    fVar314 = auVar159._8_4_ * auVar606._8_4_;
    fVar276 = auVar159._12_4_ * auVar606._12_4_;
    fVar312 = fVar312 * fVar311;
    fVar487 = fVar487 * fVar313;
    fVar690 = fVar690 * fVar314;
    fVar692 = fVar692 * fVar276;
    auVar160[0] = SUB41(fVar312,0) & bVar541;
    auVar160[1] = (byte)((uint)fVar312 >> 8) & bVar544;
    auVar160[2] = (byte)((uint)fVar312 >> 0x10) & bVar545;
    auVar160[3] = (byte)((uint)fVar312 >> 0x18) & bVar546;
    auVar160[4] = SUB41(fVar487,0) & bVar547;
    auVar160[5] = (byte)((uint)fVar487 >> 8) & bVar548;
    auVar160[6] = (byte)((uint)fVar487 >> 0x10) & bVar549;
    auVar160[7] = (byte)((uint)fVar487 >> 0x18) & bVar550;
    auVar160[8] = SUB41(fVar690,0) & bVar551;
    auVar160[9] = (byte)((uint)fVar690 >> 8) & bVar552;
    auVar160[10] = (byte)((uint)fVar690 >> 0x10) & bVar553;
    auVar160[0xb] = (byte)((uint)fVar690 >> 0x18) & bVar554;
    auVar160[0xc] = SUB41(fVar692,0) & bVar555;
    auVar160[0xd] = (byte)((uint)fVar692 >> 8) & bVar556;
    auVar160[0xe] = (byte)((uint)fVar692 >> 0x10) & bVar557;
    auVar160[0xf] = (byte)((uint)fVar692 >> 0x18) & bVar558;
    fVar312 = (fVar230 * fVar529 + fVar680 * fVar688 + fVar683 * fVar231) * fVar530 * fVar311;
    fVar690 = (fVar229 * fVar735 + fVar560 * fVar689 + fVar685 * fVar231) * fVar485 * fVar313;
    fVar231 = (fVar229 * fVar531 + fVar562 * fVar691 + fVar686 * fVar231) * fVar424 * fVar314;
    fVar487 = (fVar229 * fVar532 + fVar563 * fVar693 + fVar687 * fVar315) * fVar486 * fVar276;
    auVar241[0] = SUB41(fVar312,0) & bVar541;
    auVar241[1] = (byte)((uint)fVar312 >> 8) & bVar544;
    auVar241[2] = (byte)((uint)fVar312 >> 0x10) & bVar545;
    auVar241[3] = (byte)((uint)fVar312 >> 0x18) & bVar546;
    auVar241[4] = SUB41(fVar690,0) & bVar547;
    auVar241[5] = (byte)((uint)fVar690 >> 8) & bVar548;
    auVar241[6] = (byte)((uint)fVar690 >> 0x10) & bVar549;
    auVar241[7] = (byte)((uint)fVar690 >> 0x18) & bVar550;
    auVar241[8] = SUB41(fVar231,0) & bVar551;
    auVar241[9] = (byte)((uint)fVar231 >> 8) & bVar552;
    auVar241[10] = (byte)((uint)fVar231 >> 0x10) & bVar553;
    auVar241[0xb] = (byte)((uint)fVar231 >> 0x18) & bVar554;
    auVar241[0xc] = SUB41(fVar487,0) & bVar555;
    auVar241[0xd] = (byte)((uint)fVar487 >> 8) & bVar556;
    auVar241[0xe] = (byte)((uint)fVar487 >> 0x10) & bVar557;
    auVar241[0xf] = (byte)((uint)fVar487 >> 0x18) & bVar558;
    fVar231 = (fVar273 * fVar488 + fVar657 * fVar533 + fVar268 * fVar696) * _DAT_03cabc00 * fVar311;
    fVar273 = (fVar272 * fVar489 + fVar665 * fVar736 + fVar275 * fVar696) * _UNK_03cabc04 * fVar313;
    fVar312 = (fVar272 * fVar490 + fVar666 * fVar535 + fVar310 * fVar696) * _UNK_03cabc08 * fVar314;
    fVar276 = (fVar272 * (fVar366 * fVar693 - fVar315 * fVar367) +
               (fVar315 * fVar266 - fVar229 * fVar366) * fVar536 +
              (fVar229 * fVar367 - fVar693 * fVar266) * fVar368) * _UNK_03cabc0c * fVar276;
    auVar286[0] = SUB41(fVar231,0) & bVar541;
    auVar286[1] = (byte)((uint)fVar231 >> 8) & bVar544;
    auVar286[2] = (byte)((uint)fVar231 >> 0x10) & bVar545;
    auVar286[3] = (byte)((uint)fVar231 >> 0x18) & bVar546;
    auVar286[4] = SUB41(fVar273,0) & bVar547;
    auVar286[5] = (byte)((uint)fVar273 >> 8) & bVar548;
    auVar286[6] = (byte)((uint)fVar273 >> 0x10) & bVar549;
    auVar286[7] = (byte)((uint)fVar273 >> 0x18) & bVar550;
    auVar286[8] = SUB41(fVar312,0) & bVar551;
    auVar286[9] = (byte)((uint)fVar312 >> 8) & bVar552;
    auVar286[10] = (byte)((uint)fVar312 >> 0x10) & bVar553;
    auVar286[0xb] = (byte)((uint)fVar312 >> 0x18) & bVar554;
    auVar286[0xc] = SUB41(fVar276,0) & bVar555;
    auVar286[0xd] = (byte)((uint)fVar276 >> 8) & bVar556;
    auVar286[0xe] = (byte)((uint)fVar276 >> 0x10) & bVar557;
    auVar286[0xf] = (byte)((uint)fVar276 >> 0x18) & bVar558;
    fVar311 = (fVar270 * fVar488 + fVar657 * fVar729 + fVar268 * fVar271) * fVar530 * fVar311;
    fVar313 = (fVar269 * fVar489 + fVar665 * fVar527 + fVar275 * fVar271) * fVar485 * fVar313;
    fVar314 = (fVar269 * fVar490 + fVar666 * fVar528 + fVar310 * fVar271) * fVar424 * fVar314;
    auVar322[0] = SUB41(fVar311,0) & bVar541;
    auVar322[1] = (byte)((uint)fVar311 >> 8) & bVar544;
    auVar322[2] = (byte)((uint)fVar311 >> 0x10) & bVar545;
    auVar322[3] = (byte)((uint)fVar311 >> 0x18) & bVar546;
    auVar322[4] = SUB41(fVar313,0) & bVar547;
    auVar322[5] = (byte)((uint)fVar313 >> 8) & bVar548;
    auVar322[6] = (byte)((uint)fVar313 >> 0x10) & bVar549;
    auVar322[7] = (byte)((uint)fVar313 >> 0x18) & bVar550;
    auVar322[8] = SUB41(fVar314,0) & bVar551;
    auVar322[9] = (byte)((uint)fVar314 >> 8) & bVar552;
    auVar322[10] = (byte)((uint)fVar314 >> 0x10) & bVar553;
    auVar322[0xb] = (byte)((uint)fVar314 >> 0x18) & bVar554;
  }
  fVar315 = auVar160._0_4_ * local_d0 + auVar241._0_4_ * fStack_cc + auVar286._0_4_ * fStack_c8 +
            auVar322._0_4_;
  fVar268 = auVar160._4_4_ * local_d0 + auVar241._4_4_ * fStack_cc + auVar286._4_4_ * fStack_c8 +
            auVar322._4_4_;
  fVar271 = auVar160._8_4_ * local_d0 + auVar241._8_4_ * fStack_cc + auVar286._8_4_ * fStack_c8 +
            auVar322._8_4_;
  fVar273 = auVar160._12_4_ * local_d0 + auVar241._12_4_ * fStack_cc + auVar286._12_4_ * fStack_c8 +
            0.0;
  auVar73._0_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar73._4_4_ = fVar271 * fVar271 + fVar273 * fVar273;
  auVar73._8_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar73._12_4_ = fVar271 * fVar271 + fVar273 * fVar273;
  auVar606 = NEON_ext(auVar73,auVar73,4,1);
  auVar74._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar74._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar74._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar74._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frsqrte(auVar74,4);
  auVar495._0_4_ = auVar74._0_4_ * auVar606._0_4_;
  auVar495._4_4_ = auVar74._4_4_ * auVar606._4_4_;
  auVar495._8_4_ = auVar74._8_4_ * auVar606._8_4_;
  auVar495._12_4_ = auVar74._12_4_ * auVar606._12_4_;
  auVar561 = NEON_frsqrts(auVar606,auVar495,4);
  auVar427._0_4_ = auVar606._0_4_ * auVar561._0_4_;
  auVar427._4_4_ = auVar606._4_4_ * auVar561._4_4_;
  auVar427._8_4_ = auVar606._8_4_ * auVar561._8_4_;
  auVar427._12_4_ = auVar606._12_4_ * auVar561._12_4_;
  auVar496._0_4_ = auVar74._0_4_ * auVar427._0_4_;
  auVar496._4_4_ = auVar74._4_4_ * auVar427._4_4_;
  auVar496._8_4_ = auVar74._8_4_ * auVar427._8_4_;
  auVar496._12_4_ = auVar74._12_4_ * auVar427._12_4_;
  auVar606 = NEON_frsqrts(auVar427,auVar496,4);
  fVar315 = fVar315 * auVar427._0_4_ * auVar606._0_4_;
  fVar268 = fVar268 * auVar427._4_4_ * auVar606._4_4_;
  fVar271 = fVar271 * auVar427._8_4_ * auVar606._8_4_;
  fVar273 = fVar273 * auVar427._12_4_ * auVar606._12_4_;
  iVar721 = -(uint)(auVar74._0_4_ == 0.0);
  iVar726 = -(uint)(auVar74._4_4_ == 0.0);
  iVar727 = -(uint)(auVar74._8_4_ == 0.0);
  iVar728 = -(uint)(auVar74._12_4_ == 0.0);
  fVar231 = (float)CONCAT13((byte)((uint)fVar315 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                            CONCAT12((byte)((uint)fVar315 >> 0x10) & ~(byte)((uint)iVar721 >> 0x10),
                                     CONCAT11((byte)((uint)fVar315 >> 8) &
                                              ~(byte)((uint)iVar721 >> 8),
                                              SUB41(fVar315,0) & ~(byte)iVar721)));
  auVar277._0_8_ =
       CONCAT17((byte)((uint)fVar268 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                CONCAT16((byte)((uint)fVar268 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                         CONCAT15((byte)((uint)fVar268 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                  CONCAT14(SUB41(fVar268,0) & ~(byte)iVar726,fVar231))));
  auVar277[8] = SUB41(fVar271,0) & ~(byte)iVar727;
  auVar277[9] = (byte)((uint)fVar271 >> 8) & ~(byte)((uint)iVar727 >> 8);
  auVar277[10] = (byte)((uint)fVar271 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
  auVar277[0xb] = (byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
  auVar287[0xc] = SUB41(fVar273,0) & ~(byte)iVar728;
  auVar287._0_12_ = auVar277;
  auVar287[0xd] = (byte)((uint)fVar273 >> 8) & ~(byte)((uint)iVar728 >> 8);
  auVar287[0xe] = (byte)((uint)fVar273 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
  auVar287[0xf] = (byte)((uint)fVar273 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
  uVar559 = a64_TBL(ZEXT816(0),auVar287,DAT_03cb5488);
  fVar315 = auVar160._0_4_ * fVar274 + auVar241._0_4_ * fVar227 + auVar286._0_4_ * fVar228 +
            auVar322._0_4_;
  fVar268 = auVar160._4_4_ * fVar274 + auVar241._4_4_ * fVar227 + auVar286._4_4_ * fVar228 +
            auVar322._4_4_;
  fVar271 = auVar160._8_4_ * fVar274 + auVar241._8_4_ * fVar227 + auVar286._8_4_ * fVar228 +
            auVar322._8_4_;
  fVar227 = auVar160._12_4_ * fVar274 + auVar241._12_4_ * fVar227 + auVar286._12_4_ * fVar228 + 0.0;
  uVar722 = a64_TBL(ZEXT816(0),auVar287,DAT_03cb56c8);
  auVar590._0_8_ = a64_TBL(ZEXT816(0),auVar287,DAT_03cb54d8);
  auVar590._8_8_ = 0;
  auVar75._0_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar75._4_4_ = fVar271 * fVar271 + fVar227 * fVar227;
  auVar75._8_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar75._12_4_ = fVar271 * fVar271 + fVar227 * fVar227;
  auVar606 = NEON_ext(auVar75,auVar75,4,1);
  auVar76._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar76._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar76._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar76._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frsqrte(auVar76,4);
  auVar396._0_4_ = auVar76._0_4_ * auVar606._0_4_;
  auVar396._4_4_ = auVar76._4_4_ * auVar606._4_4_;
  auVar396._8_4_ = auVar76._8_4_ * auVar606._8_4_;
  auVar396._12_4_ = auVar76._12_4_ * auVar606._12_4_;
  auVar561 = NEON_frsqrts(auVar606,auVar396,4);
  auVar325._0_4_ = auVar606._0_4_ * auVar561._0_4_;
  auVar325._4_4_ = auVar606._4_4_ * auVar561._4_4_;
  auVar325._8_4_ = auVar606._8_4_ * auVar561._8_4_;
  auVar325._12_4_ = auVar606._12_4_ * auVar561._12_4_;
  auVar397._0_4_ = auVar76._0_4_ * auVar325._0_4_;
  auVar397._4_4_ = auVar76._4_4_ * auVar325._4_4_;
  auVar397._8_4_ = auVar76._8_4_ * auVar325._8_4_;
  auVar397._12_4_ = auVar76._12_4_ * auVar325._12_4_;
  iVar721 = -(uint)(auVar76._0_4_ == 0.0);
  iVar726 = -(uint)(auVar76._4_4_ == 0.0);
  iVar727 = -(uint)(auVar76._8_4_ == 0.0);
  iVar728 = -(uint)(auVar76._12_4_ == 0.0);
  auVar606 = NEON_frsqrts(auVar325,auVar397,4);
  uVar566 = a64_TBL(ZEXT816(0),auVar287,DAT_03cb54c0);
  fVar315 = fVar315 * auVar325._0_4_ * auVar606._0_4_;
  fVar268 = fVar268 * auVar325._4_4_ * auVar606._4_4_;
  fVar271 = fVar271 * auVar325._8_4_ * auVar606._8_4_;
  fVar227 = fVar227 * auVar325._12_4_ * auVar606._12_4_;
  fVar274 = (float)CONCAT13((byte)((uint)fVar315 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                            CONCAT12((byte)((uint)fVar315 >> 0x10) & ~(byte)((uint)iVar721 >> 0x10),
                                     CONCAT11((byte)((uint)fVar315 >> 8) &
                                              ~(byte)((uint)iVar721 >> 8),
                                              SUB41(fVar315,0) & ~(byte)iVar721)));
  auVar150._0_8_ =
       CONCAT17((byte)((uint)fVar268 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                CONCAT16((byte)((uint)fVar268 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                         CONCAT15((byte)((uint)fVar268 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                  CONCAT14(SUB41(fVar268,0) & ~(byte)iVar726,fVar274))));
  auVar150[8] = SUB41(fVar271,0) & ~(byte)iVar727;
  auVar150[9] = (byte)((uint)fVar271 >> 8) & ~(byte)((uint)iVar727 >> 8);
  auVar150[10] = (byte)((uint)fVar271 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
  auVar150[0xb] = (byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
  auVar161[0xc] = SUB41(fVar227,0) & ~(byte)iVar728;
  auVar161._0_12_ = auVar150;
  auVar161[0xd] = (byte)((uint)fVar227 >> 8) & ~(byte)((uint)iVar728 >> 8);
  auVar161[0xe] = (byte)((uint)fVar227 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
  auVar161[0xf] = (byte)((uint)fVar227 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
  uVar492 = a64_TBL(ZEXT816(0),auVar161,DAT_03cb56c8);
  uVar542 = a64_TBL(ZEXT816(0),auVar161,DAT_03cb54d8);
  uVar616 = a64_TBL(ZEXT816(0),auVar161,DAT_03cb5488);
  uVar710 = a64_TBL(ZEXT816(0),auVar161,DAT_03cb54c0);
  fVar231 = fVar231 * fVar274;
  fVar274 = (float)((ulong)auVar277._0_8_ >> 0x20) * (float)((ulong)auVar150._0_8_ >> 0x20);
  fVar227 = auVar277._8_4_ * auVar150._8_4_;
  fVar228 = auVar287._12_4_ * auVar161._12_4_;
  fVar315 = (float)uVar492 * (float)uVar559 - (float)uVar616 * (float)uVar722;
  fVar268 = (float)((ulong)uVar492 >> 0x20) * (float)((ulong)uVar559 >> 0x20) -
            (float)((ulong)uVar616 >> 0x20) * (float)((ulong)uVar722 >> 0x20);
  fVar271 = (float)uVar542 * (float)uVar566 - (float)uVar710 * (float)auVar590._0_8_;
  fVar273 = (float)((ulong)uVar542 >> 0x20) * (float)((ulong)uVar566 >> 0x20) -
            (float)((ulong)uVar710 >> 0x20) * (float)(auVar590._0_8_ >> 0x20);
  auVar77._0_4_ = fVar231 + fVar274;
  auVar77._4_4_ = fVar227 + fVar228;
  auVar77._8_4_ = fVar231 + fVar274;
  auVar77._12_4_ = fVar227 + fVar228;
  fVar273 = fVar273 * fVar273;
  auVar606 = NEON_ext(auVar77,auVar77,4,1);
  param_2 = param_2 ^ (param_2 ^ auVar717) & auVar725;
  auVar78._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar78._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar78._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar78._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar79._0_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar79._4_4_ = fVar271 * fVar271 + fVar273;
  auVar79._8_4_ = fVar315 * fVar315 + fVar268 * fVar268;
  auVar79._12_4_ = fVar271 * fVar271 + fVar273;
  auVar606 = NEON_ext(auVar79,auVar79,4,1);
  fStack_158 = param_2._8_4_;
  local_160 = param_2._0_4_;
  fStack_15c = param_2._4_4_;
  auVar80._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar80._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar80._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar80._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frsqrte(auVar80,4);
  iVar721 = -(uint)(auVar80._0_4_ == 0.0);
  iVar726 = -(uint)(auVar80._4_4_ == 0.0);
  iVar727 = -(uint)(auVar80._8_4_ == 0.0);
  auVar398._0_4_ = auVar80._0_4_ * auVar606._0_4_;
  auVar398._4_4_ = auVar80._4_4_ * auVar606._4_4_;
  auVar398._8_4_ = auVar80._8_4_ * auVar606._8_4_;
  auVar398._12_4_ = auVar80._12_4_ * auVar606._12_4_;
  auVar561 = NEON_frsqrts(auVar606,auVar398,4);
  auVar374._0_4_ = auVar606._0_4_ * auVar561._0_4_;
  auVar374._4_4_ = auVar606._4_4_ * auVar561._4_4_;
  auVar374._8_4_ = auVar606._8_4_ * auVar561._8_4_;
  auVar374._12_4_ = auVar606._12_4_ * auVar561._12_4_;
  auVar399._0_4_ = auVar80._0_4_ * auVar374._0_4_;
  auVar399._4_4_ = auVar80._4_4_ * auVar374._4_4_;
  auVar399._8_4_ = auVar80._8_4_ * auVar374._8_4_;
  auVar399._12_4_ = auVar80._12_4_ * auVar374._12_4_;
  auVar326 = NEON_fmov(0xbf800000,4);
  auVar606 = NEON_fmax(auVar78,auVar326,4);
  fStack_178 = auVar326._8_4_;
  fStack_174 = auVar326._12_4_;
  local_180 = auVar326._0_4_;
  fStack_17c = auVar326._4_4_;
  auVar561 = NEON_fmov(0x3f800000,4);
  auVar564 = NEON_frsqrts(auVar374,auVar399,4);
  fStack_118 = auVar561._8_4_;
  fStack_114 = auVar561._12_4_;
  local_120 = auVar561._0_4_;
  fStack_11c = auVar561._4_4_;
  auVar606 = NEON_fmin(auVar606,auVar561,4);
  fVar315 = fVar315 * auVar374._0_4_ * auVar564._0_4_;
  fVar268 = fVar268 * auVar374._4_4_ * auVar564._4_4_;
  fVar271 = fVar271 * auVar374._8_4_ * auVar564._8_4_;
  fVar274 = (float)CONCAT13((byte)((uint)fVar315 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                            CONCAT12((byte)((uint)fVar315 >> 0x10) & ~(byte)((uint)iVar721 >> 0x10),
                                     CONCAT11((byte)((uint)fVar315 >> 8) &
                                              ~(byte)((uint)iVar721 >> 8),
                                              SUB41(fVar315,0) & ~(byte)iVar721)));
  auVar151._0_8_ =
       CONCAT17((byte)((uint)fVar268 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                CONCAT16((byte)((uint)fVar268 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                         CONCAT15((byte)((uint)fVar268 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                  CONCAT14(SUB41(fVar268,0) & ~(byte)iVar726,fVar274))));
  auVar151[8] = SUB41(fVar271,0) & ~(byte)iVar727;
  auVar151[9] = (byte)((uint)fVar271 >> 8) & ~(byte)((uint)iVar727 >> 8);
  auVar151[10] = (byte)((uint)fVar271 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
  auVar151[0xb] = (byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
  auVar165._0_4_ = fVar274 * SQRT(local_120 - (auVar606._0_4_ + local_120) * 0.5);
  fVar274 = (float)((ulong)auVar151._0_8_ >> 0x20) *
            SQRT(fStack_11c - (auVar606._4_4_ + fStack_11c) * 0.5);
  auVar164._8_4_ = auVar151._8_4_ * SQRT(fStack_118 - (auVar606._8_4_ + fStack_118) * 0.5);
  uVar492 = DAT_03cb56c8;
  uVar542 = DAT_03cb54d8;
  uVar559 = DAT_03cb5488;
  uVar566 = DAT_03cb54c0;
  lVar60 = nn::os::GetCurrentThread();
  do {
    lVar61 = *plVar1;
    lVar63 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar61;
      *(long *)(param_6 + 0x458) = lVar63;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar61 != 0 && (lVar60 != lVar61))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar61 = *plVar1;
        lVar63 = *(long *)(param_6 + 0x458);
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar61;
          *(long *)(param_6 + 0x458) = lVar63;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d14010;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar61;
        *(long *)(param_6 + 0x454) = lVar63 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d14010:
    lVar61 = lVar4;
    lVar63 = *(long *)(param_6 + 0x458);
  } while (!bVar57);
  lVar60 = *(long *)(param_6 + 0x248) +
           (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
  uVar616 = *(undefined8 *)(lVar60 + 0x18);
  Var53 = *(unkbyte9 *)(lVar60 + 0x10);
  bStack_f7 = (byte)((ulong)uVar616 >> 8);
  bStack_f6 = (byte)((ulong)uVar616 >> 0x10);
  bStack_f5 = (byte)((ulong)uVar616 >> 0x18);
  bStack_f4 = (byte)((ulong)uVar616 >> 0x20);
  bStack_f3 = (byte)((ulong)uVar616 >> 0x28);
  bStack_f2 = (byte)((ulong)uVar616 >> 0x30);
  bStack_f1 = (byte)((ulong)uVar616 >> 0x38);
  do {
    lVar60 = *plVar1;
    lVar61 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x458) = lVar61;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar63 = *plVar1;
    lVar4 = *(long *)(param_6 + 0x458);
    if (lVar63 != lVar60 || lVar4 != lVar61) {
      bVar57 = false;
      ClearExclusiveLocal();
      goto LAB_00d1407c;
    }
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x454) = lVar61 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar57 = true;
LAB_00d1407c:
  if (!bVar57) {
    do {
      lVar60 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      if (lVar60 != lVar63 || lVar61 != lVar4) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d166dc;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar63;
        *(long *)(param_6 + 0x454) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
joined_r0x00d166dc:
    if (!bVar57) {
      do {
        lVar63 = *plVar1;
        lVar4 = *(long *)(param_6 + 0x458);
        if (lVar63 != lVar60 || lVar4 != lVar61) {
          bVar57 = false;
          ClearExclusiveLocal();
          lVar60 = lVar63;
          lVar61 = lVar4;
          goto joined_r0x00d166dc;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar60;
          *(long *)(param_6 + 0x454) = lVar61 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
      lVar60 = lVar63;
      lVar61 = lVar4;
      goto joined_r0x00d166dc;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  auVar40[9] = bStack_f7;
  auVar40._0_9_ = Var53;
  auVar40[10] = bStack_f6;
  auVar40[0xb] = bStack_f5;
  auVar39[0xc] = bStack_f4;
  auVar39._0_12_ = auVar40;
  auVar39[0xd] = bStack_f3;
  auVar39[0xe] = bStack_f2;
  auVar39[0xf] = bStack_f1;
  uVar149 = auVar40._8_4_;
  auVar162._4_4_ = uVar149;
  auVar162._0_4_ = uVar149;
  auVar162._8_4_ = uVar149;
  auVar162._12_4_ = uVar149;
  auVar606 = NEON_ext(auVar162,auVar39,0xc,1);
  uVar149 = (undefined4)((unkuint9)Var53 >> 0x20);
  auVar163._4_4_ = uVar149;
  auVar163._0_4_ = uVar149;
  auVar163._8_4_ = uVar149;
  auVar163._12_4_ = uVar149;
  NEON_ext(auVar163,auVar606,0xc,1);
  auVar164._4_4_ = auVar164._8_4_;
  auVar164._0_4_ = auVar164._8_4_;
  auVar164._12_4_ = auVar164._8_4_;
  auVar165._4_12_ = auVar164._4_12_;
  auVar167._0_8_ = auVar165._0_8_;
  auVar167._8_4_ = fVar274;
  auVar167._12_4_ = auVar164._8_4_;
  auVar166._8_8_ = auVar167._8_8_;
  auVar166._4_4_ = auVar164._8_4_;
  auVar166._0_4_ = auVar165._0_4_;
  auVar168._0_12_ = auVar166._0_12_;
  auVar168._12_4_ = auVar164._8_4_;
  auVar606 = NEON_ext(auVar168,auVar168,8,1);
  auVar169._4_12_ = auVar168._4_12_;
  auVar169._0_4_ = auVar606._0_4_;
  auVar171._0_8_ = auVar169._0_8_;
  auVar171._8_4_ = auVar606._8_4_;
  auVar171._12_4_ = auVar164._8_4_;
  auVar170._8_8_ = auVar171._8_8_;
  auVar170._4_4_ = auVar165._0_4_;
  auVar170._0_4_ = auVar606._0_4_;
  auVar172._0_12_ = auVar170._0_12_;
  auVar172._12_4_ = fVar274;
  auVar606 = NEON_ext(auVar172,auVar606,8,1);
  NEON_ext(auVar606,auVar606,0xc,1);
  fStack_d8 = (float)_UNK_03cab648;
  fStack_d4 = (float)((ulong)_UNK_03cab648 >> 0x20);
  local_e0 = (float)_DAT_03cab640;
  fStack_dc = (float)((ulong)_DAT_03cab640 >> 0x20);
  FUN_00d172e8(param_6,param_7);
  pfVar59 = (float *)FUN_00c4c40c(param_6,param_7);
  fVar274 = *(float *)(param_6 + 0x3e0);
  fVar227 = *(float *)(param_6 + 0x3e4);
  fVar228 = *(float *)(param_6 + 1000);
  fVar315 = *(float *)(param_6 + 0x3ec);
  auVar606 = *(undefined1 (*) [16])(param_6 + 0x3f0);
  auVar564 = *(undefined1 (*) [16])(param_6 + 0x400);
  auVar595 = *(undefined1 (*) [16])(param_6 + 0x410);
  fVar231 = *pfVar59;
  fVar268 = pfVar59[1];
  fVar271 = pfVar59[2];
  fVar273 = pfVar59[3];
  auVar330 = *(undefined1 (*) [16])(pfVar59 + 4);
  fVar275 = auVar606._0_4_;
  fVar310 = auVar606._4_4_;
  fVar312 = auVar606._8_4_;
  fVar368 = auVar606._12_4_;
  fVar690 = auVar564._0_4_;
  fVar696 = auVar564._4_4_;
  fVar487 = auVar564._8_4_;
  fVar692 = auVar564._12_4_;
  fVar276 = auVar595._0_4_;
  fVar311 = auVar595._4_4_;
  fVar313 = auVar595._8_4_;
  fVar314 = auVar595._12_4_;
  auVar428._0_4_ = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
  fVar485 = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
  fVar486 = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
  fVar489 = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
  fVar231 = auVar330._0_4_;
  fVar268 = auVar330._4_4_;
  fVar271 = auVar330._8_4_;
  fVar273 = auVar330._12_4_;
  fVar490 = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
  auVar568._4_4_ = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
  fVar729 = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
  fVar229 = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
  auVar606 = *(undefined1 (*) [16])(pfVar59 + 8);
  auVar564 = *(undefined1 (*) [16])(pfVar59 + 0xc);
  fVar231 = auVar606._0_4_;
  fVar530 = auVar564._0_4_;
  fVar268 = auVar606._4_4_;
  fVar424 = auVar564._4_4_;
  fVar271 = auVar606._8_4_;
  fVar488 = auVar564._8_4_;
  fVar273 = auVar606._12_4_;
  auVar497._0_4_ = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
  auVar497._4_4_ = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
  auVar497._8_4_ = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
  auVar497._12_4_ = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
  fVar268 = auVar564._12_4_;
  fVar231 = fVar274 * fVar530 + fVar275 * fVar424 + fVar690 * fVar488 + fVar276 * fVar268;
  fVar273 = fVar227 * fVar530 + fVar310 * fVar424 + fVar696 * fVar488 + fVar311 * fVar268;
  fVar312 = fVar228 * fVar530 + fVar312 * fVar424 + fVar487 * fVar488 + fVar313 * fVar268;
  fVar690 = fVar315 * fVar530 + fVar368 * fVar424 + fVar692 * fVar488 + fVar314 * fVar268;
  auVar498 = auVar497;
  lVar60 = FUN_00c4c40c(param_6,param_8);
  auVar606 = *(undefined1 (*) [16])(param_6 + 0x3f0);
  auVar595 = *(undefined1 (*) [16])(lVar60 + 0x30);
  auVar330 = *(undefined1 (*) [16])(param_6 + 0x400);
  fVar274 = auVar595._0_4_;
  fVar227 = auVar595._4_4_;
  auVar658 = *(undefined1 (*) [16])(param_6 + 0x410);
  fVar228 = auVar595._8_4_;
  fVar315 = auVar595._12_4_;
  fVar268 = *(float *)(param_6 + 0x3e0) * fVar274 + auVar606._0_4_ * fVar227 +
            auVar330._0_4_ * fVar228 + auVar658._0_4_ * fVar315;
  fVar275 = *(float *)(param_6 + 0x3e4) * fVar274 + auVar606._4_4_ * fVar227 +
            auVar330._4_4_ * fVar228 + auVar658._4_4_ * fVar315;
  fVar368 = *(float *)(param_6 + 1000) * fVar274 + auVar606._8_4_ * fVar227 +
            auVar330._8_4_ * fVar228 + auVar658._8_4_ * fVar315;
  lVar60 = FUN_00c4c40c(param_6,param_9);
  fVar274 = *(float *)(lVar60 + 0x30);
  fVar227 = *(float *)(lVar60 + 0x34);
  fVar228 = *(float *)(lVar60 + 0x38);
  fVar315 = *(float *)(lVar60 + 0x3c);
  fVar271 = *(float *)(param_6 + 0x3e0) * fVar274 + *(float *)(param_6 + 0x3f0) * fVar227 +
            *(float *)(param_6 + 0x400) * fVar228 + *(float *)(param_6 + 0x410) * fVar315;
  fVar310 = *(float *)(param_6 + 0x3e4) * fVar274 + *(float *)(param_6 + 0x3f4) * fVar227 +
            *(float *)(param_6 + 0x404) * fVar228 + *(float *)(param_6 + 0x414) * fVar315;
  fVar274 = *(float *)(param_6 + 1000) * fVar274 + *(float *)(param_6 + 0x3f8) * fVar227 +
            *(float *)(param_6 + 0x408) * fVar228 + *(float *)(param_6 + 0x418) * fVar315;
  uVar149 = (undefined4)
            (CONCAT17((char)((uint)fVar690 >> 0x18),
                      CONCAT16((char)((uint)fVar690 >> 0x10),
                               CONCAT15((char)((uint)fVar690 >> 8),
                                        CONCAT14(SUB41(fVar690,0),fVar312)))) >> 0x20);
  auVar639._4_12_ = auVar638._4_12_;
  auVar639._0_4_ = fVar486;
  auVar641._12_4_ = auVar638._12_4_;
  auVar641._0_8_ = auVar639._0_8_;
  auVar641._8_4_ = auVar497._8_4_;
  auVar640._8_8_ = auVar641._8_8_;
  auVar640._4_4_ = fVar729;
  auVar640._0_4_ = fVar486;
  auVar648._0_12_ = auVar640._0_12_;
  auVar648._12_4_ = fVar312;
  auVar499._4_12_ = auVar498._4_12_;
  auVar499._0_4_ = fVar489;
  auVar501._12_4_ = auVar498._12_4_;
  auVar501._0_8_ = auVar499._0_8_;
  auVar501._8_4_ = auVar497._12_4_;
  auVar500._8_8_ = auVar501._8_8_;
  auVar500._4_4_ = fVar229;
  auVar500._0_4_ = fVar489;
  auVar502._0_12_ = auVar500._0_12_;
  auVar502._12_4_ = uVar149;
  auVar400._4_4_ = fVar490;
  auVar400._0_4_ = fVar490;
  auVar400._8_4_ = fVar490;
  auVar400._12_4_ = fVar490;
  auVar607._4_4_ = fVar729;
  auVar607._0_4_ = fVar729;
  auVar607._8_4_ = fVar729;
  auVar607._12_4_ = fVar729;
  auVar620._4_12_ = auVar619._4_12_;
  auVar620._0_4_ = fVar486;
  auVar622._12_4_ = auVar619._12_4_;
  auVar622._0_8_ = auVar620._0_8_;
  auVar622._8_4_ = auVar497._8_4_;
  auVar621._8_8_ = auVar622._8_8_;
  auVar621._4_4_ = fVar486;
  auVar621._0_4_ = fVar486;
  auVar623._0_12_ = auVar621._0_12_;
  auVar623._12_4_ = auVar497._8_4_;
  auVar428._4_12_ = auVar564._4_12_;
  auVar430._12_4_ = auVar564._12_4_;
  auVar430._0_8_ = auVar428._0_8_;
  auVar430._8_4_ = auVar497._0_4_;
  auVar429._8_8_ = auVar430._8_8_;
  auVar429._4_4_ = auVar428._0_4_;
  auVar429._0_4_ = auVar428._0_4_;
  auVar431._0_12_ = auVar429._0_12_;
  auVar431._12_4_ = auVar497._0_4_;
  auVar568._0_4_ = auVar568._4_4_;
  auVar568._8_4_ = auVar568._4_4_;
  auVar568._12_4_ = auVar568._4_4_;
  auVar591._4_12_ = auVar590._4_12_;
  auVar591._0_4_ = fVar485;
  auVar593._12_4_ = auVar590._12_4_;
  auVar593._0_8_ = auVar591._0_8_;
  auVar593._8_4_ = auVar497._4_4_;
  auVar592._8_8_ = auVar593._8_8_;
  auVar592._4_4_ = fVar485;
  auVar592._0_4_ = fVar485;
  auVar594._0_12_ = auVar592._0_12_;
  auVar594._12_4_ = auVar497._4_4_;
  if (fVar690 == 1.0) {
    auVar81._0_4_ = fVar489 * fVar489 + fVar229 * fVar229;
    auVar81._4_4_ = auVar497._12_4_ * auVar497._12_4_ + 0.0;
    auVar81._8_4_ = fVar489 * fVar489 + fVar229 * fVar229;
    auVar81._12_4_ = auVar497._12_4_ * auVar497._12_4_ + 0.0;
    auVar606 = NEON_ext(auVar81,auVar81,4,1);
    auVar671._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar671._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar671._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar671._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    if (auVar671._0_4_ == 0.0) {
      auVar330 = NEON_ext(auVar623,auVar607,8,1);
      auVar638 = NEON_ext(auVar594,auVar568,8,1);
      auVar564 = NEON_ext(auVar431,auVar400,8,1);
      fVar228 = (auVar568._4_4_ * auVar330._0_4_ - auVar638._0_4_ * fVar729) * (float)_DAT_03cac270;
      fVar530 = (float)((ulong)_DAT_03cac270 >> 0x20);
      fVar690 = (fVar485 * auVar330._4_4_ - auVar638._4_4_ * fVar486) * fVar530;
      fVar487 = (fVar485 * auVar330._8_4_ - auVar638._8_4_ * fVar486) * (float)_UNK_03cac278;
      fVar424 = (float)((ulong)_UNK_03cac278 >> 0x20);
      fVar276 = (fVar485 * auVar330._12_4_ - auVar638._12_4_ * fVar486) * fVar424;
      fVar227 = auVar428._0_4_ * fVar228;
      fVar315 = fVar490 * fVar690;
      fVar696 = auVar497._0_4_ * fVar487;
      fVar692 = fVar276 * 0.0;
      auVar145._0_4_ = fVar227 + fVar315;
      auVar145._4_4_ = fVar696 + fVar692;
      auVar145._8_4_ = fVar227 + fVar315;
      auVar145._12_4_ = fVar696 + fVar692;
      auVar606 = NEON_ext(auVar145,auVar145,4,1);
      auVar146._0_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar146._4_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar146._8_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar146._12_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar606 = NEON_frecpe(auVar146,4);
      iVar721 = -(uint)(auVar146._0_4_ == 0.0);
      iVar726 = -(uint)(auVar146._4_4_ == 0.0);
      iVar727 = -(uint)(auVar146._8_4_ == 0.0);
      iVar728 = -(uint)(auVar146._12_4_ == 0.0);
      bVar541 = ~(byte)iVar721;
      bVar544 = ~(byte)((uint)iVar721 >> 8);
      bVar545 = ~(byte)((uint)iVar721 >> 0x10);
      bVar546 = ~(byte)((uint)iVar721 >> 0x18);
      bVar547 = ~(byte)iVar726;
      bVar548 = ~(byte)((uint)iVar726 >> 8);
      bVar549 = ~(byte)((uint)iVar726 >> 0x10);
      bVar550 = ~(byte)((uint)iVar726 >> 0x18);
      bVar551 = ~(byte)iVar727;
      bVar552 = ~(byte)((uint)iVar727 >> 8);
      bVar553 = ~(byte)((uint)iVar727 >> 0x10);
      bVar554 = ~(byte)((uint)iVar727 >> 0x18);
      bVar555 = ~(byte)iVar728;
      bVar556 = ~(byte)((uint)iVar728 >> 8);
      bVar557 = ~(byte)((uint)iVar728 >> 0x10);
      bVar558 = ~(byte)((uint)iVar728 >> 0x18);
      auVar595 = NEON_frecps(auVar606,auVar146,4);
      auVar422._0_4_ = auVar606._0_4_ * auVar595._0_4_;
      auVar422._4_4_ = auVar606._4_4_ * auVar595._4_4_;
      auVar422._8_4_ = auVar606._8_4_ * auVar595._8_4_;
      auVar422._12_4_ = auVar606._12_4_ * auVar595._12_4_;
      auVar606 = NEON_frecps(auVar422,auVar146,4);
      fVar692 = auVar422._0_4_ * auVar606._0_4_;
      fVar311 = auVar422._4_4_ * auVar606._4_4_;
      fVar313 = auVar422._8_4_ * auVar606._8_4_;
      fVar314 = auVar422._12_4_ * auVar606._12_4_;
      fVar228 = fVar228 * fVar692;
      fVar690 = fVar690 * fVar311;
      fVar487 = fVar487 * fVar313;
      fVar276 = fVar276 * fVar314;
      fVar227 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                                  SUB41(fVar228,0) & bVar541)));
      auVar239._0_8_ =
           CONCAT17((byte)((uint)fVar690 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar690 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar690 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar690,0) & bVar547,fVar227))));
      auVar239[8] = SUB41(fVar487,0) & bVar551;
      auVar239[9] = (byte)((uint)fVar487 >> 8) & bVar552;
      auVar239[10] = (byte)((uint)fVar487 >> 0x10) & bVar553;
      auVar239[0xb] = (byte)((uint)fVar487 >> 0x18) & bVar554;
      auVar242[0xc] = SUB41(fVar276,0) & bVar555;
      auVar242._0_12_ = auVar239;
      auVar242[0xd] = (byte)((uint)fVar276 >> 8) & bVar556;
      auVar242[0xe] = (byte)((uint)fVar276 >> 0x10) & bVar557;
      auVar242[0xf] = (byte)((uint)fVar276 >> 0x18) & bVar558;
      fVar228 = (fVar490 * auVar330._0_4_ - auVar564._0_4_ * fVar729) * (float)_DAT_03cab860 *
                fVar692;
      fVar315 = (auVar428._0_4_ * auVar330._4_4_ - auVar564._4_4_ * fVar486) *
                (float)((ulong)_DAT_03cab860 >> 0x20) * fVar311;
      fVar690 = (auVar428._0_4_ * auVar330._8_4_ - auVar564._8_4_ * fVar486) * (float)_UNK_03cab868
                * fVar313;
      fVar696 = (auVar428._0_4_ * auVar330._12_4_ - auVar564._12_4_ * fVar486) *
                (float)((ulong)_UNK_03cab868 >> 0x20) * fVar314;
      fVar692 = (fVar490 * auVar638._0_4_ - auVar564._0_4_ * auVar568._4_4_) * (float)_DAT_03cac270
                * fVar692;
      fVar311 = (auVar428._0_4_ * auVar638._4_4_ - auVar564._4_4_ * fVar485) * fVar530 * fVar311;
      fVar313 = (auVar428._0_4_ * auVar638._8_4_ - auVar564._8_4_ * fVar485) * (float)_UNK_03cac278
                * fVar313;
      fVar314 = (auVar428._0_4_ * auVar638._12_4_ - auVar564._12_4_ * fVar485) * fVar424 * fVar314;
      fVar228 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                                  SUB41(fVar228,0) & bVar541)));
      auVar284._0_8_ =
           CONCAT17((byte)((uint)fVar315 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar315 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar315 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar315,0) & bVar547,fVar228))));
      auVar284[8] = SUB41(fVar690,0) & bVar551;
      auVar284[9] = (byte)((uint)fVar690 >> 8) & bVar552;
      auVar284[10] = (byte)((uint)fVar690 >> 0x10) & bVar553;
      auVar284[0xb] = (byte)((uint)fVar690 >> 0x18) & bVar554;
      auVar288[0xc] = SUB41(fVar696,0) & bVar555;
      auVar288._0_12_ = auVar284;
      auVar288[0xd] = (byte)((uint)fVar696 >> 8) & bVar556;
      auVar288[0xe] = (byte)((uint)fVar696 >> 0x10) & bVar557;
      auVar288[0xf] = (byte)((uint)fVar696 >> 0x18) & bVar558;
      fVar315 = (float)CONCAT13((byte)((uint)fVar692 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar692 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar692 >> 8) & bVar544,
                                                  SUB41(fVar692,0) & bVar541)));
      auVar323._0_8_ =
           CONCAT17((byte)((uint)fVar311 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar311 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar311 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar311,0) & bVar547,fVar315))));
      auVar323[8] = SUB41(fVar313,0) & bVar551;
      auVar323[9] = (byte)((uint)fVar313 >> 8) & bVar552;
      auVar323[10] = (byte)((uint)fVar313 >> 0x10) & bVar553;
      auVar323[0xb] = (byte)((uint)fVar313 >> 0x18) & bVar554;
      auVar327[0xc] = SUB41(fVar314,0) & bVar555;
      auVar327._0_12_ = auVar323;
      auVar327[0xd] = (byte)((uint)fVar314 >> 8) & bVar556;
      auVar327[0xe] = (byte)((uint)fVar314 >> 0x10) & bVar557;
      auVar327[0xf] = (byte)((uint)fVar314 >> 0x18) & bVar558;
      fVar227 = fVar227 * fVar231 + fVar228 * fVar273 + fVar315 * fVar312;
      fVar228 = (float)((ulong)auVar239._0_8_ >> 0x20) * fVar231 +
                (float)((ulong)auVar284._0_8_ >> 0x20) * fVar273 +
                (float)((ulong)auVar323._0_8_ >> 0x20) * fVar312;
      fVar315 = auVar239._8_4_ * fVar231 + auVar284._8_4_ * fVar273 + auVar323._8_4_ * fVar312;
      fVar231 = auVar242._12_4_ * fVar231 + auVar288._12_4_ * fVar273 + auVar327._12_4_ * fVar312;
      auVar372._0_4_ = -fVar227;
      auVar372._4_4_ = -fVar228;
      auVar372._8_4_ = -fVar315;
      goto LAB_00d14368;
    }
  }
  auVar564 = NEON_ext(auVar594,auVar568,8,1);
  auVar595 = NEON_ext(auVar623,auVar607,8,1);
  auVar25._4_8_ = auVar648._8_8_;
  auVar25._0_4_ = fVar489;
  auVar642._0_8_ = auVar25._0_8_ << 0x20;
  auVar642._8_4_ = fVar489;
  auVar642._12_4_ = fVar489;
  auVar648._4_12_ = auVar642._4_12_;
  auVar648._0_4_ = fVar229;
  auVar608._4_4_ = fVar229;
  auVar608._0_4_ = fVar229;
  auVar608._8_4_ = fVar229;
  auVar608._12_4_ = fVar229;
  auVar503._4_12_ = auVar502._4_12_;
  auVar503._0_4_ = fVar489;
  auVar505._0_8_ = auVar503._0_8_;
  auVar505._8_4_ = auVar497._12_4_;
  auVar505._12_4_ = uVar149;
  auVar504._8_8_ = auVar505._8_8_;
  auVar504._4_4_ = fVar489;
  auVar504._0_4_ = fVar489;
  auVar506._0_12_ = auVar504._0_12_;
  auVar506._12_4_ = auVar497._12_4_;
  auVar606 = NEON_ext(auVar506,auVar608,8,1);
  fVar270 = auVar606._0_4_;
  fVar272 = auVar606._4_4_;
  fVar366 = auVar606._8_4_;
  fVar367 = auVar606._12_4_;
  fVar528 = auVar595._0_4_;
  fVar529 = auVar595._4_4_;
  fVar735 = auVar595._8_4_;
  fVar562 = fVar729 * fVar270 - fVar528 * fVar229;
  fVar563 = fVar486 * fVar272 - fVar529 * fVar489;
  fVar683 = fVar486 * fVar366 - fVar735 * fVar489;
  fVar685 = fVar486 * fVar367 - auVar595._12_4_ * fVar489;
  fVar535 = fVar690 * fVar528 - fVar312 * fVar270;
  fVar657 = fVar690 * fVar529 - fVar312 * fVar272;
  fVar666 = fVar690 * fVar735 - fVar312 * fVar366;
  fVar560 = auVar497._12_4_ * auVar595._12_4_ - auVar497._8_4_ * fVar367;
  fVar531 = fVar312 * fVar229 - fVar729 * fVar690;
  fVar532 = fVar312 * fVar489 - fVar486 * fVar690;
  fVar533 = fVar312 * fVar489 - fVar486 * fVar690;
  fVar736 = auVar497._8_4_ * fVar489 - fVar486 * auVar497._12_4_;
  auVar606 = NEON_ext(auVar431,auVar400,8,1);
  fVar314 = auVar564._0_4_;
  fVar424 = auVar564._4_4_;
  fVar230 = auVar564._8_4_;
  fVar527 = auVar564._12_4_;
  fVar313 = auVar606._0_4_;
  fVar530 = auVar606._4_4_;
  fVar488 = auVar606._8_4_;
  fVar266 = auVar606._12_4_;
  fVar228 = (auVar568._4_4_ * fVar535 + fVar531 * fVar314 + fVar562 * fVar273) * _DAT_03cabc00;
  fVar696 = (fVar485 * fVar657 + fVar532 * fVar424 + fVar563 * fVar273) * _UNK_03cabc04;
  fVar692 = (fVar485 * fVar666 + fVar533 * fVar230 + fVar683 * fVar273) * _UNK_03cabc08;
  fVar311 = (fVar485 * fVar560 + fVar736 * fVar527 + fVar685 * auVar497._4_4_) * _UNK_03cabc0c;
  fVar269 = (float)((ulong)_DAT_03cac210 >> 0x20);
  fVar536 = fVar273 * fVar313 - fVar231 * fVar314;
  fVar665 = fVar273 * fVar530 - fVar231 * fVar424;
  fVar680 = fVar273 * fVar488 - fVar231 * fVar230;
  fVar227 = auVar428._0_4_ * fVar228;
  fVar315 = fVar490 * fVar696;
  fVar487 = auVar497._0_4_ * fVar692;
  fVar276 = fVar231 * fVar311;
  auVar671._0_4_ = fVar231 * auVar568._4_4_ - fVar490 * fVar273;
  auVar671._4_4_ = fVar231 * fVar485 - auVar428._0_4_ * fVar273;
  auVar671._8_4_ = fVar231 * fVar485 - auVar428._0_4_ * fVar273;
  auVar671._12_4_ = auVar497._0_4_ * fVar485 - auVar428._0_4_ * auVar497._4_4_;
  auVar82._0_4_ = fVar227 + fVar315;
  auVar82._4_4_ = fVar487 + fVar276;
  auVar82._8_4_ = fVar227 + fVar315;
  auVar82._12_4_ = fVar487 + fVar276;
  fVar315 = fVar490 * fVar314 - fVar313 * auVar568._4_4_;
  fVar487 = auVar428._0_4_ * fVar424 - fVar530 * fVar485;
  fVar276 = auVar428._0_4_ * fVar230 - fVar488 * fVar485;
  auVar606 = NEON_ext(auVar82,auVar82,4,1);
  auVar83._0_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar83._4_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar83._8_4_ = auVar606._0_4_ + auVar606._4_4_;
  auVar83._12_4_ = auVar606._8_4_ + auVar606._12_4_;
  auVar606 = NEON_frecpe(auVar83,4);
  auVar564 = NEON_frecps(auVar606,auVar83,4);
  auVar401._0_4_ = auVar606._0_4_ * auVar564._0_4_;
  auVar401._4_4_ = auVar606._4_4_ * auVar564._4_4_;
  auVar401._8_4_ = auVar606._8_4_ * auVar564._8_4_;
  auVar401._12_4_ = auVar606._12_4_ * auVar564._12_4_;
  iVar721 = -(uint)(auVar83._0_4_ == 0.0);
  iVar726 = -(uint)(auVar83._4_4_ == 0.0);
  iVar727 = -(uint)(auVar83._8_4_ == 0.0);
  iVar728 = -(uint)(auVar83._12_4_ == 0.0);
  bVar541 = ~(byte)iVar721;
  bVar544 = ~(byte)((uint)iVar721 >> 8);
  bVar545 = ~(byte)((uint)iVar721 >> 0x10);
  bVar546 = ~(byte)((uint)iVar721 >> 0x18);
  bVar547 = ~(byte)iVar726;
  bVar548 = ~(byte)((uint)iVar726 >> 8);
  bVar549 = ~(byte)((uint)iVar726 >> 0x10);
  bVar550 = ~(byte)((uint)iVar726 >> 0x18);
  bVar551 = ~(byte)iVar727;
  bVar552 = ~(byte)((uint)iVar727 >> 8);
  bVar553 = ~(byte)((uint)iVar727 >> 0x10);
  bVar554 = ~(byte)((uint)iVar727 >> 0x18);
  bVar555 = ~(byte)iVar728;
  bVar556 = ~(byte)((uint)iVar728 >> 8);
  bVar557 = ~(byte)((uint)iVar728 >> 0x10);
  bVar558 = ~(byte)((uint)iVar728 >> 0x18);
  auVar606 = NEON_frecps(auVar401,auVar83,4);
  fVar314 = auVar401._0_4_ * auVar606._0_4_;
  fVar424 = auVar401._4_4_ * auVar606._4_4_;
  fVar230 = auVar401._8_4_ * auVar606._8_4_;
  fVar267 = auVar401._12_4_ * auVar606._12_4_;
  fVar228 = fVar228 * fVar314;
  fVar696 = fVar696 * fVar424;
  fVar692 = fVar692 * fVar230;
  fVar311 = fVar311 * fVar267;
  fVar227 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                            CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                     CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                              SUB41(fVar228,0) & bVar541)));
  auVar232._0_8_ =
       CONCAT17((byte)((uint)fVar696 >> 0x18) & bVar550,
                CONCAT16((byte)((uint)fVar696 >> 0x10) & bVar549,
                         CONCAT15((byte)((uint)fVar696 >> 8) & bVar548,
                                  CONCAT14(SUB41(fVar696,0) & bVar547,fVar227))));
  auVar232[8] = SUB41(fVar692,0) & bVar551;
  auVar232[9] = (byte)((uint)fVar692 >> 8) & bVar552;
  auVar232[10] = (byte)((uint)fVar692 >> 0x10) & bVar553;
  auVar232[0xb] = (byte)((uint)fVar692 >> 0x18) & bVar554;
  auVar242[0xc] = SUB41(fVar311,0) & bVar555;
  auVar242._0_12_ = auVar232;
  auVar242[0xd] = (byte)((uint)fVar311 >> 8) & bVar556;
  auVar242[0xe] = (byte)((uint)fVar311 >> 0x10) & bVar557;
  auVar242[0xf] = (byte)((uint)fVar311 >> 0x18) & bVar558;
  fVar228 = (fVar490 * fVar535 + fVar531 * fVar313 + fVar562 * fVar231) * (float)_DAT_03cac210 *
            fVar314;
  fVar696 = (auVar428._0_4_ * fVar657 + fVar532 * fVar530 + fVar563 * fVar231) * fVar269 * fVar424;
  fVar692 = (auVar428._0_4_ * fVar666 + fVar533 * fVar488 + fVar683 * fVar231) *
            (float)_UNK_03cac218 * fVar230;
  fVar311 = (auVar428._0_4_ * fVar560 + fVar736 * fVar266 + fVar685 * auVar497._0_4_) *
            (float)((ulong)_UNK_03cac218 >> 0x20) * fVar267;
  fVar313 = (fVar229 * fVar536 + auVar671._0_4_ * fVar270 + fVar315 * fVar690) * _DAT_03cabc00 *
            fVar314;
  fVar530 = (fVar489 * fVar665 + auVar671._4_4_ * fVar272 + fVar487 * fVar690) * _UNK_03cabc04 *
            fVar424;
  fVar690 = (fVar489 * fVar680 + auVar671._8_4_ * fVar366 + fVar276 * fVar690) * _UNK_03cabc08 *
            fVar230;
  fVar267 = (fVar489 * (auVar497._4_4_ * fVar266 - auVar497._0_4_ * fVar527) +
             auVar671._12_4_ * fVar367 +
            (auVar428._0_4_ * fVar527 - fVar266 * fVar485) * auVar497._12_4_) * _UNK_03cabc0c *
            fVar267;
  fVar228 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                            CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                     CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                              SUB41(fVar228,0) & bVar541)));
  auVar278._0_8_ =
       CONCAT17((byte)((uint)fVar696 >> 0x18) & bVar550,
                CONCAT16((byte)((uint)fVar696 >> 0x10) & bVar549,
                         CONCAT15((byte)((uint)fVar696 >> 8) & bVar548,
                                  CONCAT14(SUB41(fVar696,0) & bVar547,fVar228))));
  auVar278[8] = SUB41(fVar692,0) & bVar551;
  auVar278[9] = (byte)((uint)fVar692 >> 8) & bVar552;
  auVar278[10] = (byte)((uint)fVar692 >> 0x10) & bVar553;
  auVar278[0xb] = (byte)((uint)fVar692 >> 0x18) & bVar554;
  auVar288[0xc] = SUB41(fVar311,0) & bVar555;
  auVar288._0_12_ = auVar278;
  auVar288[0xd] = (byte)((uint)fVar311 >> 8) & bVar556;
  auVar288[0xe] = (byte)((uint)fVar311 >> 0x10) & bVar557;
  auVar288[0xf] = (byte)((uint)fVar311 >> 0x18) & bVar558;
  fVar314 = (fVar729 * fVar536 + auVar671._0_4_ * fVar528 + fVar315 * fVar312) *
            (float)_DAT_03cac210 * fVar314;
  fVar424 = (fVar486 * fVar665 + auVar671._4_4_ * fVar529 + fVar487 * fVar312) * fVar269 * fVar424;
  fVar230 = (fVar486 * fVar680 + auVar671._8_4_ * fVar735 + fVar276 * fVar312) *
            (float)_UNK_03cac218 * fVar230;
  fVar315 = (float)CONCAT13((byte)((uint)fVar313 >> 0x18) & bVar546,
                            CONCAT12((byte)((uint)fVar313 >> 0x10) & bVar545,
                                     CONCAT11((byte)((uint)fVar313 >> 8) & bVar544,
                                              SUB41(fVar313,0) & bVar541)));
  auVar319._0_8_ =
       CONCAT17((byte)((uint)fVar530 >> 0x18) & bVar550,
                CONCAT16((byte)((uint)fVar530 >> 0x10) & bVar549,
                         CONCAT15((byte)((uint)fVar530 >> 8) & bVar548,
                                  CONCAT14(SUB41(fVar530,0) & bVar547,fVar315))));
  auVar319[8] = SUB41(fVar690,0) & bVar551;
  auVar319[9] = (byte)((uint)fVar690 >> 8) & bVar552;
  auVar319[10] = (byte)((uint)fVar690 >> 0x10) & bVar553;
  auVar319[0xb] = (byte)((uint)fVar690 >> 0x18) & bVar554;
  auVar327[0xc] = SUB41(fVar267,0) & bVar555;
  auVar327._0_12_ = auVar319;
  auVar327[0xd] = (byte)((uint)fVar267 >> 8) & bVar556;
  auVar327[0xe] = (byte)((uint)fVar267 >> 0x10) & bVar557;
  auVar327[0xf] = (byte)((uint)fVar267 >> 0x18) & bVar558;
  auVar372[0] = SUB41(fVar314,0) & bVar541;
  auVar372[1] = (byte)((uint)fVar314 >> 8) & bVar544;
  auVar372[2] = (byte)((uint)fVar314 >> 0x10) & bVar545;
  auVar372[3] = (byte)((uint)fVar314 >> 0x18) & bVar546;
  auVar372[4] = SUB41(fVar424,0) & bVar547;
  auVar372[5] = (byte)((uint)fVar424 >> 8) & bVar548;
  auVar372[6] = (byte)((uint)fVar424 >> 0x10) & bVar549;
  auVar372[7] = (byte)((uint)fVar424 >> 0x18) & bVar550;
  auVar372[8] = SUB41(fVar230,0) & bVar551;
  auVar372[9] = (byte)((uint)fVar230 >> 8) & bVar552;
  auVar372[10] = (byte)((uint)fVar230 >> 0x10) & bVar553;
  auVar372[0xb] = (byte)((uint)fVar230 >> 0x18) & bVar554;
  fVar227 = fVar227 * fVar231 + fVar228 * fVar273 + fVar315 * fVar312;
  fVar228 = (float)((ulong)auVar232._0_8_ >> 0x20) * fVar231 +
            (float)((ulong)auVar278._0_8_ >> 0x20) * fVar273 +
            (float)((ulong)auVar319._0_8_ >> 0x20) * fVar312;
  fVar315 = auVar232._8_4_ * fVar231 + auVar278._8_4_ * fVar273 + auVar319._8_4_ * fVar312;
  fVar231 = auVar242._12_4_ * fVar231 + auVar288._12_4_ * fVar273 + auVar327._12_4_ * fVar312;
LAB_00d14368:
  fVar273 = auVar242._0_4_;
  fVar312 = auVar242._4_4_;
  fVar690 = auVar242._8_4_;
  fVar696 = auVar288._0_4_;
  fVar692 = auVar288._4_4_;
  fVar311 = auVar288._8_4_;
  fVar487 = auVar372._0_4_;
  fVar276 = auVar372._4_4_;
  fVar313 = auVar372._8_4_;
  fVar314 = auVar327._0_4_;
  fVar530 = auVar327._4_4_;
  fVar485 = auVar327._8_4_;
  auVar432._0_4_ = fVar273 * fVar268 + fVar696 * fVar275 + fVar314 * fVar368 + fVar487;
  auVar432._4_4_ = fVar312 * fVar268 + fVar692 * fVar275 + fVar530 * fVar368 + fVar276;
  auVar432._8_4_ = fVar690 * fVar268 + fVar311 * fVar275 + fVar485 * fVar368 + fVar313;
  auVar432._12_4_ =
       auVar242._12_4_ * fVar268 + auVar288._12_4_ * fVar275 + auVar327._12_4_ * fVar368 + 0.0;
  fVar227 = auVar432._0_4_ - (fVar227 + fVar487);
  fVar228 = auVar432._4_4_ - (fVar228 + fVar276);
  fVar315 = auVar432._8_4_ - (fVar315 + fVar313);
  fVar231 = auVar432._12_4_ - (fVar231 + 0.0);
  fVar227 = fVar227 * fVar227;
  fVar228 = fVar228 * fVar228;
  fVar315 = fVar315 * fVar315;
  fVar231 = fVar231 * fVar231;
  auVar84._0_4_ = fVar227 + fVar228;
  auVar84._4_4_ = fVar315 + fVar231;
  auVar84._8_4_ = fVar227 + fVar228;
  auVar84._12_4_ = fVar315 + fVar231;
  auVar606 = NEON_ext(auVar84,auVar84,4,1);
  fVar231 = SQRT(auVar606._0_4_ + auVar606._4_4_);
  fVar227 = (fVar273 * fVar271 + fVar696 * fVar310 + fVar314 * fVar274 + fVar487) - auVar432._0_4_;
  fVar228 = (fVar312 * fVar271 + fVar692 * fVar310 + fVar530 * fVar274 + fVar276) - auVar432._4_4_;
  fVar315 = (fVar690 * fVar271 + fVar311 * fVar310 + fVar485 * fVar274 + fVar313) - auVar432._8_4_;
  fVar274 = (auVar242._12_4_ * fVar271 + auVar288._12_4_ * fVar310 + auVar327._12_4_ * fVar274 + 0.0
            ) - auVar432._12_4_;
  fVar227 = fVar227 * fVar227;
  fVar228 = fVar228 * fVar228;
  fVar315 = fVar315 * fVar315;
  fVar274 = fVar274 * fVar274;
  auVar85._0_4_ = fVar227 + fVar228;
  auVar85._4_4_ = fVar315 + fVar274;
  auVar85._8_4_ = fVar227 + fVar228;
  auVar85._12_4_ = fVar315 + fVar274;
  fVar487 = local_d0 * fVar273 + fVar696 * fStack_cc + fVar314 * fStack_c8 + fVar487;
  fVar276 = local_d0 * fVar312 + fVar692 * fStack_cc + fVar530 * fStack_c8 + fVar276;
  fVar313 = local_d0 * fVar690 + fVar311 * fStack_cc + fVar485 * fStack_c8 + fVar313;
  auVar606 = NEON_ext(auVar85,auVar85,4,1);
  fVar227 = fVar276 * fVar276 + fVar313 * fVar313;
  fVar228 = SQRT(auVar606._0_4_ + auVar606._4_4_);
  fVar274 = SQRT(fVar227);
  if (NAN(fVar274)) {
    fVar274 = sqrtf(fVar227);
  }
  fVar315 = -1.0;
  fVar227 = (((fVar487 * fVar487 + fVar274 * fVar274) - fVar231 * fVar231) - fVar228 * fVar228) /
            ((fVar231 + fVar231) * fVar228);
  if (fVar227 <= -1.0) {
    fVar227 = -1.0;
  }
  if (1.0 < fVar227) {
    fVar227 = 1.0;
  }
  fVar268 = acosf(fVar227);
  fVar271 = sinf(fVar268);
  fVar227 = (fVar228 * fVar271) / (fVar231 + fVar228 * fVar227);
  fVar274 = atanf((fVar274 / fVar487 - fVar227) / ((fVar274 / fVar487) * fVar227 + 1.0));
  cosf(fVar274 * -0.5);
  fVar274 = sinf(fVar274 * -0.5);
  lVar60 = nn::os::GetCurrentThread();
  do {
    lVar61 = *plVar1;
    lVar63 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar61;
      *(long *)(param_6 + 0x458) = lVar63;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar61 != 0 && (lVar60 != lVar61))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar61 = *plVar1;
        lVar63 = *(long *)(param_6 + 0x458);
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar61;
          *(long *)(param_6 + 0x458) = lVar63;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d14524;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar61;
        *(long *)(param_6 + 0x454) = lVar63 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d14524:
    lVar61 = lVar4;
    lVar63 = *(long *)(param_6 + 0x458);
  } while (!bVar57);
  lVar60 = *(long *)(param_6 + 0x248) +
           (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
  uVar616 = *(undefined8 *)(lVar60 + 0x18);
  Var53 = *(unkbyte9 *)(lVar60 + 0x10);
  bStack_f7 = (byte)((ulong)uVar616 >> 8);
  bStack_f6 = (byte)((ulong)uVar616 >> 0x10);
  bStack_f5 = (byte)((ulong)uVar616 >> 0x18);
  bStack_f4 = (byte)((ulong)uVar616 >> 0x20);
  bStack_f3 = (byte)((ulong)uVar616 >> 0x28);
  bStack_f2 = (byte)((ulong)uVar616 >> 0x30);
  bStack_f1 = (byte)((ulong)uVar616 >> 0x38);
  do {
    lVar60 = *plVar1;
    lVar61 = *(long *)(param_6 + 0x458);
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x458) = lVar61;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar63 = *plVar1;
    lVar4 = *(long *)(param_6 + 0x458);
    if (lVar63 != lVar60 || lVar4 != lVar61) {
      bVar57 = false;
      ClearExclusiveLocal();
      goto LAB_00d145a0;
    }
    cVar5 = '\x01';
    bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar57) {
      *plVar1 = lVar60;
      *(long *)(param_6 + 0x454) = lVar61 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar57 = true;
LAB_00d145a0:
  if (!bVar57) {
    do {
      lVar60 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      if (lVar60 != lVar63 || lVar61 != lVar4) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d16740;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar63;
        *(long *)(param_6 + 0x454) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
joined_r0x00d16740:
    if (!bVar57) {
      do {
        lVar63 = *plVar1;
        lVar4 = *(long *)(param_6 + 0x458);
        if (lVar63 != lVar60 || lVar4 != lVar61) {
          bVar57 = false;
          ClearExclusiveLocal();
          lVar60 = lVar63;
          lVar61 = lVar4;
          goto joined_r0x00d16740;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar60;
          *(long *)(param_6 + 0x454) = lVar61 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
      lVar60 = lVar63;
      lVar61 = lVar4;
      goto joined_r0x00d16740;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  auVar42[9] = bStack_f7;
  auVar42._0_9_ = Var53;
  auVar42[10] = bStack_f6;
  auVar42[0xb] = bStack_f5;
  auVar41[0xc] = bStack_f4;
  auVar41._0_12_ = auVar42;
  auVar41[0xd] = bStack_f3;
  auVar41[0xe] = bStack_f2;
  auVar41[0xf] = bStack_f1;
  uVar149 = auVar42._8_4_;
  auVar173._4_4_ = uVar149;
  auVar173._0_4_ = uVar149;
  auVar173._8_4_ = uVar149;
  auVar173._12_4_ = uVar149;
  auVar606 = NEON_ext(auVar173,auVar41,0xc,1);
  uVar149 = (undefined4)((unkuint9)Var53 >> 0x20);
  auVar174._4_4_ = uVar149;
  auVar174._0_4_ = uVar149;
  auVar174._8_4_ = uVar149;
  auVar174._12_4_ = uVar149;
  NEON_ext(auVar174,auVar606,0xc,1);
  auVar175._4_4_ = fVar274 * fStack_158;
  auVar175._0_4_ = fVar274 * local_160;
  auVar175._8_4_ = fStack_15c * fVar274;
  auVar175._12_4_ = fVar274 * fStack_158;
  auVar606 = NEON_ext(auVar175,auVar175,8,1);
  auVar433._4_12_ = auVar432._4_12_;
  auVar433._0_4_ = auVar606._0_4_;
  auVar435._12_4_ = auVar432._12_4_;
  auVar435._0_8_ = auVar433._0_8_;
  auVar435._8_4_ = auVar606._8_4_;
  auVar434._8_8_ = auVar435._8_8_;
  auVar434._4_4_ = fVar274 * local_160;
  auVar434._0_4_ = auVar606._0_4_;
  auVar436._0_12_ = auVar434._0_12_;
  auVar436._12_4_ = fStack_15c * fVar274;
  auVar606 = NEON_ext(auVar436,auVar606,8,1);
  NEON_ext(auVar606,auVar606,0xc,1);
  FUN_00d172e8(param_6,param_7);
  cVar5 = *param_10;
  uVar316 = *(int *)(param_10 + 0x14) + 2;
  if (cVar5 == '\0') {
    uVar316 = 1;
  }
  if (uVar316 != 0) {
    uVar491 = 0;
    do {
      if (cVar5 == '\0') {
        bVar541 = 0;
      }
      else {
        lVar60 = nn::os::GetCurrentThread();
        do {
          lVar61 = *plVar1;
          lVar63 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar61;
            *(long *)(param_6 + 0x458) = lVar63;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          while ((lVar61 != 0 && (lVar60 != lVar61))) {
            nn::os::WaitLightEvent(pLVar2);
            do {
              lVar61 = *plVar1;
              lVar63 = *(long *)(param_6 + 0x458);
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar61;
                *(long *)(param_6 + 0x458) = lVar63;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            lVar4 = *plVar1;
            if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto LAB_00d14690;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar61;
              *(long *)(param_6 + 0x454) = lVar63 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
LAB_00d14690:
          lVar61 = lVar4;
          lVar63 = *(long *)(param_6 + 0x458);
        } while (!bVar57);
        lVar60 = *(long *)(param_6 + 0x248) +
                 (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
        auVar543 = *(undefined1 (*) [12])(lVar60 + 0x10);
        fStack_e4 = (float)((ulong)*(undefined8 *)(lVar60 + 0x18) >> 0x20);
        do {
          lVar60 = *plVar1;
          lVar61 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x458) = lVar61;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          lVar63 = *plVar1;
          lVar4 = *(long *)(param_6 + 0x458);
          if (lVar63 != lVar60 || lVar4 != lVar61) {
            bVar57 = false;
            ClearExclusiveLocal();
            goto LAB_00d146f8;
          }
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x454) = lVar61 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar57 = true;
LAB_00d146f8:
        if (!bVar57) {
          do {
            lVar60 = *plVar1;
            lVar61 = *(long *)(param_6 + 0x458);
            if (lVar60 != lVar63 || lVar61 != lVar4) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto joined_r0x00d1633c;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar63;
              *(long *)(param_6 + 0x454) = lVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
joined_r0x00d1633c:
          if (!bVar57) {
            do {
              lVar63 = *plVar1;
              lVar4 = *(long *)(param_6 + 0x458);
              if (lVar63 != lVar60 || lVar4 != lVar61) {
                bVar57 = false;
                ClearExclusiveLocal();
                lVar60 = lVar63;
                lVar61 = lVar4;
                goto joined_r0x00d1633c;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar60;
                *(long *)(param_6 + 0x454) = lVar61 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
            lVar60 = lVar63;
            lVar61 = lVar4;
            goto joined_r0x00d1633c;
          }
        }
        nn::os::SignalLightEvent(pLVar2);
        uVar616 = DAT_03cab620;
        auVar47._12_4_ = fStack_e4;
        auVar47._0_12_ = auVar543;
        fVar227 = auVar543._0_4_;
        fVar231 = auVar543._8_4_;
        auVar328._4_4_ = fVar231;
        auVar328._0_4_ = fVar231;
        auVar328._8_4_ = fVar231;
        auVar328._12_4_ = fVar231;
        auVar606 = NEON_ext(auVar328,auVar47,0xc,1);
        fVar228 = auVar543._4_4_;
        auVar375._4_4_ = fVar228;
        auVar375._0_4_ = fVar228;
        auVar375._8_4_ = fVar228;
        auVar375._12_4_ = fVar228;
        fVar271 = (float)DAT_03cab620;
        fVar310 = (float)((ulong)DAT_03cab620 >> 0x20);
        fVar690 = (float)DAT_03cab628;
        fVar692 = (float)((ulong)DAT_03cab628 >> 0x20);
        auVar564 = NEON_ext(auVar375,auVar606,0xc,1);
        fVar276 = (float)_DAT_03cabe50;
        fVar313 = (float)((ulong)_DAT_03cabe50 >> 0x20);
        fVar530 = (float)_UNK_03cabe58;
        fVar424 = (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar311 = (float)_DAT_03cabe60;
        fVar314 = (float)((ulong)_DAT_03cabe60 >> 0x20);
        fVar485 = (float)_UNK_03cabe68;
        fVar486 = (float)((ulong)_UNK_03cabe68 >> 0x20);
        fVar488 = (float)_DAT_03caa5b0;
        fVar489 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
        fVar490 = (float)_UNK_03caa5b8;
        fVar729 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
        auVar402._0_4_ =
             (fVar271 * fStack_e4 + fVar276 * fVar227 * local_e0 +
             fVar311 * auVar564._0_4_ * local_e0) - auVar606._0_4_ * fVar488;
        auVar402._4_4_ =
             (fVar310 * fStack_e4 + fVar313 * fVar228 * fStack_dc +
             fVar314 * auVar564._4_4_ * fStack_dc) - auVar606._4_4_ * fVar489;
        auVar402._8_4_ =
             (fVar690 * fStack_e4 + fVar530 * fVar231 * fStack_d8 +
             fVar485 * auVar564._8_4_ * fStack_d8) - auVar606._8_4_ * fVar490;
        auVar402._12_4_ =
             (fVar692 * fStack_e4 + fVar424 * fVar227 * fStack_d4 +
             fVar486 * auVar564._12_4_ * fStack_d4) - auVar606._12_4_ * fVar729;
        fVar227 = -fVar227;
        fVar228 = -fVar228;
        fVar231 = -fVar231;
        auVar243._4_4_ = fVar231;
        auVar243._0_4_ = fVar231;
        auVar243._8_4_ = fVar231;
        auVar243._12_4_ = fVar231;
        auVar289._4_4_ = auVar402._8_4_;
        auVar289._0_4_ = auVar402._8_4_;
        auVar289._8_4_ = auVar402._8_4_;
        auVar289._12_4_ = auVar402._8_4_;
        auVar595 = NEON_ext(auVar289,auVar402,0xc,1);
        auVar329._4_4_ = auVar402._4_4_;
        auVar329._0_4_ = auVar402._4_4_;
        auVar329._8_4_ = auVar402._4_4_;
        auVar329._12_4_ = auVar402._4_4_;
        auVar244._4_12_ = auVar243._4_12_;
        auVar244._0_4_ = fVar227;
        auVar246._0_8_ = auVar244._0_8_;
        auVar246._8_4_ = fVar228;
        auVar246._12_4_ = fVar231;
        auVar245._8_8_ = auVar246._8_8_;
        auVar245._4_4_ = fVar231;
        auVar245._0_4_ = fVar227;
        auVar247._0_12_ = auVar245._0_12_;
        auVar247._12_4_ = fVar231;
        auVar606 = NEON_ext(auVar247,auVar247,8,1);
        fVar274 = auVar606._0_4_;
        auVar248._4_12_ = auVar247._4_12_;
        auVar248._0_4_ = fVar274;
        auVar250._0_8_ = auVar248._0_8_;
        auVar250._8_4_ = auVar606._8_4_;
        auVar250._12_4_ = fVar231;
        auVar249._8_8_ = auVar250._8_8_;
        auVar249._4_4_ = fVar227;
        auVar249._0_4_ = fVar274;
        auVar251._0_12_ = auVar249._0_12_;
        auVar251._12_4_ = fVar228;
        auVar330 = NEON_ext(auVar329,auVar595,0xc,1);
        auVar564 = NEON_ext(auVar251,auVar606,8,1);
        auVar564 = NEON_ext(auVar564,auVar564,0xc,1);
        fVar274 = (fVar227 * auVar402._12_4_ + fStack_e4 * auVar402._0_4_ * local_e0 +
                  auVar564._0_4_ * auVar330._0_4_ * local_e0) - auVar595._0_4_ * fVar274;
        fVar227 = (fVar228 * auVar402._12_4_ + fStack_e4 * auVar402._4_4_ * fStack_dc +
                  auVar564._4_4_ * auVar330._4_4_ * fStack_dc) - auVar595._4_4_ * auVar606._4_4_;
        fVar228 = (fVar231 * auVar402._12_4_ + fStack_e4 * auVar402._8_4_ * fStack_d8 +
                  auVar564._8_4_ * auVar330._8_4_ * fStack_d8) - auVar595._8_4_ * auVar606._8_4_;
        auVar86._0_4_ = fVar274 * fVar271 + fVar227 * fVar310;
        auVar86._4_4_ = fVar228 * fVar690 + fVar692 * 0.0;
        auVar86._8_4_ = fVar274 * fVar271 + fVar227 * fVar310;
        auVar86._12_4_ = fVar228 * fVar690 + fVar692 * 0.0;
        auVar87._0_4_ = fVar274 * fVar311 + fVar227 * fVar314;
        auVar87._4_4_ = fVar228 * fVar485 + fVar486 * 0.0;
        auVar87._8_4_ = fVar274 * fVar311 + fVar227 * fVar314;
        auVar87._12_4_ = fVar228 * fVar485 + fVar486 * 0.0;
        auVar606 = NEON_ext(auVar86,auVar86,4,1);
        auVar564 = NEON_ext(auVar87,auVar87,4,1);
        auVar88._0_4_ = fVar274 * fVar488 + fVar227 * fVar489;
        auVar88._4_4_ = fVar228 * fVar490 + fVar729 * 0.0;
        auVar88._8_4_ = fVar274 * fVar488 + fVar227 * fVar489;
        auVar88._12_4_ = fVar228 * fVar490 + fVar729 * 0.0;
        fVar274 = auVar564._0_4_ + auVar564._4_4_;
        fVar228 = (auVar606._0_4_ + auVar606._4_4_) * fVar271;
        fVar273 = (auVar606._8_4_ + auVar606._12_4_) * fVar310;
        fVar312 = (auVar606._0_4_ + auVar606._4_4_) * fVar690;
        fVar696 = (auVar606._8_4_ + auVar606._12_4_) * fVar692;
        local_b4 = 1.0;
        fStack_b0 = -1.0;
        fVar231 = fVar228 + fVar274 * fVar311;
        fVar275 = fVar273 + (auVar564._8_4_ + auVar564._12_4_) * fVar314;
        fVar368 = fVar312 + (auVar564._0_4_ + auVar564._4_4_) * fVar485;
        fVar487 = fVar696 + (auVar564._8_4_ + auVar564._12_4_) * fVar486;
        auVar89._0_4_ = fVar231 * fVar231 + fVar275 * fVar275;
        auVar89._4_4_ = fVar368 * fVar368 + fVar487 * fVar487;
        auVar89._8_4_ = fVar231 * fVar231 + fVar275 * fVar275;
        auVar89._12_4_ = fVar368 * fVar368 + fVar487 * fVar487;
        auVar606 = NEON_ext(auVar89,auVar89,4,1);
        auVar90._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar90._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar90._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar90._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar606 = NEON_frsqrte(auVar90,4);
        auVar403._0_4_ = auVar90._0_4_ * auVar606._0_4_;
        auVar403._4_4_ = auVar90._4_4_ * auVar606._4_4_;
        auVar403._8_4_ = auVar90._8_4_ * auVar606._8_4_;
        auVar403._12_4_ = auVar90._12_4_ * auVar606._12_4_;
        auVar564 = NEON_frsqrts(auVar606,auVar403,4);
        auVar331._0_4_ = auVar606._0_4_ * auVar564._0_4_;
        auVar331._4_4_ = auVar606._4_4_ * auVar564._4_4_;
        auVar331._8_4_ = auVar606._8_4_ * auVar564._8_4_;
        auVar331._12_4_ = auVar606._12_4_ * auVar564._12_4_;
        auVar404._0_4_ = auVar90._0_4_ * auVar331._0_4_;
        auVar404._4_4_ = auVar90._4_4_ * auVar331._4_4_;
        auVar404._8_4_ = auVar90._8_4_ * auVar331._8_4_;
        auVar404._12_4_ = auVar90._12_4_ * auVar331._12_4_;
        iVar721 = -(uint)(auVar90._0_4_ == 0.0);
        iVar726 = -(uint)(auVar90._4_4_ == 0.0);
        iVar727 = -(uint)(auVar90._8_4_ == 0.0);
        iVar728 = -(uint)(auVar90._12_4_ == 0.0);
        auVar564 = NEON_frsqrts(auVar331,auVar404,4);
        auVar606 = NEON_ext(auVar88,auVar88,4,1);
        fVar227 = auVar606._0_4_ + auVar606._4_4_;
        fVar228 = fVar228 + fVar227 * fVar488;
        fVar273 = fVar273 + (auVar606._8_4_ + auVar606._12_4_) * fVar489;
        fVar312 = fVar312 + (auVar606._0_4_ + auVar606._4_4_) * fVar490;
        fVar696 = fVar696 + (auVar606._8_4_ + auVar606._12_4_) * fVar729;
        auVar91._0_4_ = fVar228 * fVar228 + fVar273 * fVar273;
        auVar91._4_4_ = fVar312 * fVar312 + fVar696 * fVar696;
        auVar91._8_4_ = fVar228 * fVar228 + fVar273 * fVar273;
        auVar91._12_4_ = fVar312 * fVar312 + fVar696 * fVar696;
        auVar606 = NEON_ext(auVar91,auVar91,4,1);
        auVar92._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar92._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar92._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar92._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar606 = NEON_frsqrte(auVar92,4);
        auVar405._0_4_ = auVar92._0_4_ * auVar606._0_4_;
        auVar405._4_4_ = auVar92._4_4_ * auVar606._4_4_;
        auVar405._8_4_ = auVar92._8_4_ * auVar606._8_4_;
        auVar405._12_4_ = auVar92._12_4_ * auVar606._12_4_;
        auVar595 = NEON_frsqrts(auVar606,auVar405,4);
        auVar376._0_4_ = auVar606._0_4_ * auVar595._0_4_;
        auVar376._4_4_ = auVar606._4_4_ * auVar595._4_4_;
        auVar376._8_4_ = auVar606._8_4_ * auVar595._8_4_;
        auVar376._12_4_ = auVar606._12_4_ * auVar595._12_4_;
        auVar406._0_4_ = auVar92._0_4_ * auVar376._0_4_;
        auVar406._4_4_ = auVar92._4_4_ * auVar376._4_4_;
        auVar406._8_4_ = auVar92._8_4_ * auVar376._8_4_;
        auVar406._12_4_ = auVar92._12_4_ * auVar376._12_4_;
        auVar595 = NEON_frsqrts(auVar376,auVar406,4);
        fVar231 = fVar231 * auVar331._0_4_ * auVar564._0_4_ * fVar271;
        fVar275 = fVar275 * auVar331._4_4_ * auVar564._4_4_ * fVar310;
        fVar368 = fVar368 * auVar331._8_4_ * auVar564._8_4_ * fVar690;
        fVar487 = fVar487 * auVar331._12_4_ * auVar564._12_4_ * fVar692;
        fVar231 = (float)CONCAT13((byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                  CONCAT12((byte)((uint)fVar231 >> 0x10) &
                                           ~(byte)((uint)iVar721 >> 0x10),
                                           CONCAT11((byte)((uint)fVar231 >> 8) &
                                                    ~(byte)((uint)iVar721 >> 8),
                                                    SUB41(fVar231,0) & ~(byte)iVar721)));
        auVar152._0_8_ =
             CONCAT17((byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                      CONCAT16((byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                               CONCAT15((byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                        CONCAT14(SUB41(fVar275,0) & ~(byte)iVar726,fVar231))));
        auVar152[8] = SUB41(fVar368,0) & ~(byte)iVar727;
        auVar152[9] = (byte)((uint)fVar368 >> 8) & ~(byte)((uint)iVar727 >> 8);
        auVar152[10] = (byte)((uint)fVar368 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
        auVar152[0xb] = (byte)((uint)fVar368 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
        auVar176[0xc] = SUB41(fVar487,0) & ~(byte)iVar728;
        auVar176._0_12_ = auVar152;
        auVar176[0xd] = (byte)((uint)fVar487 >> 8) & ~(byte)((uint)iVar728 >> 8);
        auVar176[0xe] = (byte)((uint)fVar487 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
        auVar176[0xf] = (byte)((uint)fVar487 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
        iVar721 = -(uint)(auVar92._0_4_ == 0.0);
        iVar726 = -(uint)(auVar92._4_4_ == 0.0);
        iVar727 = -(uint)(auVar92._8_4_ == 0.0);
        iVar728 = -(uint)(auVar92._12_4_ == 0.0);
        fVar275 = (float)((ulong)auVar152._0_8_ >> 0x20);
        auVar93._0_4_ = fVar231 + fVar275;
        auVar93._4_4_ = auVar152._8_4_ + auVar176._12_4_;
        auVar93._8_4_ = fVar231 + fVar275;
        auVar93._12_4_ = auVar152._8_4_ + auVar176._12_4_;
        auVar606 = NEON_ext(auVar93,auVar93,4,1);
        local_ac[0] = auVar606._0_4_ + auVar606._4_4_;
        pfVar59 = &local_b4;
        if (local_ac[0] <= 1.0) {
          pfVar59 = local_ac;
        }
        pfVar3 = &fStack_b0;
        if (fVar315 <= local_ac[0]) {
          pfVar3 = pfVar59;
        }
        fVar231 = acosf(*pfVar3);
        local_b4 = 1.0;
        fStack_b0 = -1.0;
        fVar228 = fVar228 * auVar376._0_4_ * auVar595._0_4_ * fVar271;
        fVar273 = fVar273 * auVar376._4_4_ * auVar595._4_4_ * fVar310;
        fVar275 = fVar312 * auVar376._8_4_ * auVar595._8_4_ * fVar690;
        fVar312 = fVar696 * auVar376._12_4_ * auVar595._12_4_ * fVar692;
        fVar228 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                  CONCAT12((byte)((uint)fVar228 >> 0x10) &
                                           ~(byte)((uint)iVar721 >> 0x10),
                                           CONCAT11((byte)((uint)fVar228 >> 8) &
                                                    ~(byte)((uint)iVar721 >> 8),
                                                    SUB41(fVar228,0) & ~(byte)iVar721)));
        auVar153._0_8_ =
             CONCAT17((byte)((uint)fVar273 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                      CONCAT16((byte)((uint)fVar273 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                               CONCAT15((byte)((uint)fVar273 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                        CONCAT14(SUB41(fVar273,0) & ~(byte)iVar726,fVar228))));
        auVar153[8] = SUB41(fVar275,0) & ~(byte)iVar727;
        auVar153[9] = (byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar727 >> 8);
        auVar153[10] = (byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
        auVar153[0xb] = (byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
        auVar177[0xc] = SUB41(fVar312,0) & ~(byte)iVar728;
        auVar177._0_12_ = auVar153;
        auVar177[0xd] = (byte)((uint)fVar312 >> 8) & ~(byte)((uint)iVar728 >> 8);
        auVar177[0xe] = (byte)((uint)fVar312 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
        auVar177[0xf] = (byte)((uint)fVar312 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
        fVar273 = (float)((ulong)auVar153._0_8_ >> 0x20);
        auVar94._0_4_ = fVar228 + fVar273;
        auVar94._4_4_ = auVar153._8_4_ + auVar177._12_4_;
        auVar94._8_4_ = fVar228 + fVar273;
        auVar94._12_4_ = auVar153._8_4_ + auVar177._12_4_;
        auVar606 = NEON_ext(auVar94,auVar94,4,1);
        local_ac[0] = auVar606._0_4_ + auVar606._4_4_;
        pfVar59 = &local_b4;
        if (local_ac[0] <= 1.0) {
          pfVar59 = local_ac;
        }
        pfVar3 = &fStack_b0;
        if (fVar315 <= local_ac[0]) {
          pfVar3 = pfVar59;
        }
        fVar228 = acosf(*pfVar3);
        if (0.0 < fVar274) {
          fVar274 = *(float *)(param_10 + 0xc);
          bVar57 = fVar274 < fVar231;
          if (fVar231 <= fVar274) {
            fVar274 = fVar231;
          }
        }
        else {
          fVar273 = *(float *)(param_10 + 0x10);
          fVar274 = fVar273;
          if (fVar231 <= fVar273) {
            fVar274 = fVar231;
          }
          bVar57 = fVar273 < fVar231;
          fVar274 = -fVar274;
        }
        if (fVar227 <= 0.0) {
          fVar227 = *(float *)(param_10 + 8);
          bVar58 = NAN(fVar228) || NAN(fVar227);
          bVar56 = fVar228 == fVar227;
          bVar55 = fVar228 < fVar227;
          if (fVar228 <= fVar227) {
            fVar227 = fVar228;
          }
          fVar227 = -fVar227;
          fVar228 = fVar227;
        }
        else {
          fVar227 = *(float *)(param_10 + 4);
          bVar55 = false;
          bVar56 = false;
          bVar58 = true;
          if (!NAN(fVar228) && !NAN(fVar227)) {
            bVar55 = fVar228 < fVar227;
            bVar56 = fVar228 == fVar227;
            bVar58 = false;
          }
        }
        if ((!bVar56 && bVar55 == bVar58) || (fVar227 = fVar228, bVar57)) {
          fVar227 = fVar227 * -0.5;
          auVar718._8_4_ = 0x3f000000;
          auVar718._0_8_ = 0x3f0000003f000000;
          auVar718._12_4_ = 0x3f000000;
          auVar333._8_4_ = 0xbf000000;
          auVar333._0_8_ = 0xbf000000bf000000;
          auVar333._12_4_ = 0xbf000000;
          iVar721 = -(uint)(ABS(fVar227) == INFINITY);
          iVar726 = -(uint)(ABS(fVar227) == INFINITY);
          iVar727 = -(uint)(ABS(fVar227) == INFINITY);
          iVar728 = -(uint)(ABS(fVar227) == INFINITY);
          auVar596[0] = ~(byte)iVar721;
          auVar596[1] = ~(byte)((uint)iVar721 >> 8);
          auVar596[2] = ~(byte)((uint)iVar721 >> 0x10);
          auVar596[3] = ~(byte)((uint)iVar721 >> 0x18);
          auVar596[4] = ~(byte)iVar726;
          auVar596[5] = ~(byte)((uint)iVar726 >> 8);
          auVar596[6] = ~(byte)((uint)iVar726 >> 0x10);
          auVar596[7] = ~(byte)((uint)iVar726 >> 0x18);
          auVar596[8] = ~(byte)iVar727;
          auVar596[9] = ~(byte)((uint)iVar727 >> 8);
          auVar596[10] = ~(byte)((uint)iVar727 >> 0x10);
          auVar596[0xb] = ~(byte)((uint)iVar727 >> 0x18);
          auVar596[0xc] = ~(byte)iVar728;
          auVar596[0xd] = ~(byte)((uint)iVar728 >> 8);
          auVar596[0xe] = ~(byte)((uint)iVar728 >> 0x10);
          auVar596[0xf] = ~(byte)((uint)iVar728 >> 0x18);
          fVar228 = fVar227 + (float)_DAT_03caa8d0;
          fVar275 = (float)((ulong)_DAT_03caa8d0 >> 0x20);
          fVar231 = fVar227 + fVar275;
          fVar273 = fVar227 + (float)_UNK_03caa8d8;
          fVar312 = (float)((ulong)_UNK_03caa8d8 >> 0x20);
          fVar227 = fVar227 + fVar312;
          auVar377._0_8_ = CONCAT44(-(uint)(0.0 <= fVar231),-(uint)(0.0 <= fVar228));
          auVar377._8_4_ = -(uint)(0.0 <= fVar273);
          auVar377._12_4_ = -(uint)(0.0 <= fVar227);
          auVar407._8_8_ = auVar377._8_8_;
          auVar407._0_8_ = auVar377._0_8_;
          auVar606 = auVar333 ^ (auVar333 ^ auVar718) & auVar407;
          auVar408._0_4_ = (int)(auVar606._0_4_ + fVar228 * 0.15915494);
          auVar408._4_4_ = (int)(auVar606._4_4_ + fVar231 * 0.15915494);
          auVar408._8_4_ = (int)(auVar606._8_4_ + fVar273 * 0.15915494);
          auVar408._12_4_ = (int)(auVar606._12_4_ + fVar227 * 0.15915494);
          auVar606 = NEON_scvtf(auVar408,4);
          fVar228 = fVar228 - auVar606._0_4_ * 6.2831855;
          fVar231 = fVar231 - auVar606._4_4_ * 6.2831855;
          fVar273 = fVar273 - auVar606._8_4_ * 6.2831855;
          fVar227 = fVar227 - auVar606._12_4_ * 6.2831855;
          fVar228 = (float)((uint)fVar228 ^
                           ((uint)fVar228 ^ (uint)(-3.1415927 - fVar228)) &
                           -(uint)(fVar228 < -1.5707964));
          fVar231 = (float)((uint)fVar231 ^
                           ((uint)fVar231 ^ (uint)(-3.1415927 - fVar231)) &
                           -(uint)(fVar231 < -1.5707964));
          fVar273 = (float)((uint)fVar273 ^
                           ((uint)fVar273 ^ (uint)(-3.1415927 - fVar273)) &
                           -(uint)(fVar273 < -1.5707964));
          fVar227 = (float)((uint)fVar227 ^
                           ((uint)fVar227 ^ (uint)(-3.1415927 - fVar227)) &
                           -(uint)(fVar227 < -1.5707964));
          auVar624._8_4_ = 0x40490fdb;
          auVar624._0_8_ = 0x40490fdb40490fdb;
          auVar624._12_4_ = 0x40490fdb;
          fVar228 = (float)((uint)fVar228 ^
                           ((uint)fVar228 ^ (uint)(3.1415927 - fVar228)) &
                           -(uint)(1.5707964 < fVar228));
          fVar231 = (float)((uint)fVar231 ^
                           ((uint)fVar231 ^ (uint)(3.1415927 - fVar231)) &
                           -(uint)(1.5707964 < fVar231));
          fVar273 = (float)((uint)fVar273 ^
                           ((uint)fVar273 ^ (uint)(3.1415927 - fVar273)) &
                           -(uint)(1.5707964 < fVar273));
          fVar227 = (float)((uint)fVar227 ^
                           ((uint)fVar227 ^ (uint)(3.1415927 - fVar227)) &
                           -(uint)(1.5707964 < fVar227));
          auVar643._0_12_ = ZEXT812(0);
          auVar643._12_4_ = -(uint)(fVar227 == 1.5707964);
          fVar368 = fVar228 * fVar228;
          fVar696 = fVar231 * fVar231;
          fVar487 = fVar273 * fVar273;
          fVar229 = fVar227 * fVar227;
          auVar609._8_4_ = 0x7fc00000;
          auVar609._0_8_ = 0x7fc000007fc00000;
          auVar609._12_4_ = 0x7fc00000;
          auVar178._0_4_ =
               fVar228 * (local_120 +
                         fVar368 * (fVar368 * (fVar368 * (fVar368 * (fVar368 * -2.5052108e-08 +
                                                                    2.7557319e-06) + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar178._4_4_ =
               fVar231 * (fStack_11c +
                         fVar696 * (fVar696 * (fVar696 * (fVar696 * (fVar696 * -2.5052108e-08 +
                                                                    2.7557319e-06) + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar178._8_4_ =
               fVar273 * (fStack_118 +
                         fVar487 * (fVar487 * (fVar487 * (fVar487 * (fVar487 * -2.5052108e-08 +
                                                                    2.7557319e-06) + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar178._12_4_ =
               fVar227 * (fStack_114 +
                         fVar229 * (fVar229 * (fVar229 * (fVar229 * (fVar229 * -2.5052108e-08 +
                                                                    2.7557319e-06) + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar178 = auVar178 ^ (auVar178 ^ auVar561) & auVar643;
          auVar95._0_4_ = fVar311 + fVar314;
          auVar95._4_4_ = fVar485 + fVar486;
          auVar95._8_4_ = fVar311 + fVar314;
          auVar95._12_4_ = fVar485 + fVar486;
          auVar178 = auVar178 ^ (auVar178 ^ auVar609) & ~auVar596;
          auVar606 = NEON_ext(auVar95,auVar95,4,1);
          auVar96._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar96._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar96._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar96._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frsqrte(auVar96,4);
          auVar694._0_4_ = auVar96._0_4_ * auVar606._0_4_;
          auVar694._4_4_ = auVar96._4_4_ * auVar606._4_4_;
          auVar694._8_4_ = auVar96._8_4_ * auVar606._8_4_;
          auVar694._12_4_ = auVar96._12_4_ * auVar606._12_4_;
          auVar564 = NEON_frsqrts(auVar606,auVar694,4);
          auVar644._0_4_ = auVar606._0_4_ * auVar564._0_4_;
          auVar644._4_4_ = auVar606._4_4_ * auVar564._4_4_;
          auVar644._8_4_ = auVar606._8_4_ * auVar564._8_4_;
          auVar644._12_4_ = auVar606._12_4_ * auVar564._12_4_;
          auVar695._0_4_ = auVar96._0_4_ * auVar644._0_4_;
          auVar695._4_4_ = auVar96._4_4_ * auVar644._4_4_;
          auVar695._8_4_ = auVar96._8_4_ * auVar644._8_4_;
          auVar695._12_4_ = auVar96._12_4_ * auVar644._12_4_;
          iVar721 = -(uint)(auVar96._0_4_ == 0.0);
          iVar726 = -(uint)(auVar96._4_4_ == 0.0);
          iVar727 = -(uint)(auVar96._8_4_ == 0.0);
          auVar606 = NEON_frsqrts(auVar644,auVar695,4);
          fVar227 = auVar644._0_4_ * auVar606._0_4_ * (float)_DAT_03cabe60;
          fVar228 = auVar644._4_4_ * auVar606._4_4_ * (float)((ulong)_DAT_03cabe60 >> 0x20);
          fVar231 = auVar644._8_4_ * auVar606._8_4_ * (float)_UNK_03cabe68;
          fVar227 = (float)CONCAT13((byte)((uint)fVar227 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                    CONCAT12((byte)((uint)fVar227 >> 0x10) &
                                             ~(byte)((uint)iVar721 >> 0x10),
                                             CONCAT11((byte)((uint)fVar227 >> 8) &
                                                      ~(byte)((uint)iVar721 >> 8),
                                                      SUB41(fVar227,0) & ~(byte)iVar721)));
          auVar588._0_8_ =
               CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                        CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                                 CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                          CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar227))));
          auVar588[8] = SUB41(fVar231,0) & ~(byte)iVar727;
          auVar588[9] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar727 >> 8);
          auVar588[10] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
          auVar588[0xb] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
          auVar638 = ZEXT816(0x3f800000);
          auVar179._0_4_ = fVar227 * auVar178._0_4_;
          auVar179._4_4_ = (float)((ulong)auVar588._0_8_ >> 0x20) * auVar178._4_4_;
          auVar179._8_4_ = auVar588._8_4_ * auVar178._8_4_;
          auVar179._12_4_ = auVar638._0_4_ * auVar178._12_4_;
          fVar274 = fVar274 * 0.5;
          fVar227 = fVar274 + (float)_DAT_03caa8d0;
          fVar275 = fVar274 + fVar275;
          fVar228 = fVar274 + (float)_UNK_03caa8d8;
          fVar312 = fVar274 + fVar312;
          iVar721 = -(uint)(ABS(fVar274) == INFINITY);
          iVar726 = -(uint)(ABS(fVar274) == INFINITY);
          iVar727 = -(uint)(ABS(fVar274) == INFINITY);
          iVar728 = -(uint)(ABS(fVar274) == INFINITY);
          auVar332._0_4_ = -(uint)(0.0 <= fVar227);
          auVar332._4_4_ = -(uint)(0.0 <= fVar275);
          auVar332._8_4_ = -(uint)(0.0 <= fVar228);
          auVar332._12_4_ = -(uint)(0.0 <= fVar312);
          auVar290[0] = ~(byte)iVar721;
          auVar290[1] = ~(byte)((uint)iVar721 >> 8);
          auVar290[2] = ~(byte)((uint)iVar721 >> 0x10);
          auVar290[3] = ~(byte)((uint)iVar721 >> 0x18);
          auVar290[4] = ~(byte)iVar726;
          auVar290[5] = ~(byte)((uint)iVar726 >> 8);
          auVar290[6] = ~(byte)((uint)iVar726 >> 0x10);
          auVar290[7] = ~(byte)((uint)iVar726 >> 0x18);
          auVar290[8] = ~(byte)iVar727;
          auVar290[9] = ~(byte)((uint)iVar727 >> 8);
          auVar290[10] = ~(byte)((uint)iVar727 >> 0x10);
          auVar290[0xb] = ~(byte)((uint)iVar727 >> 0x18);
          auVar290[0xc] = ~(byte)iVar728;
          auVar290[0xd] = ~(byte)((uint)iVar728 >> 8);
          auVar290[0xe] = ~(byte)((uint)iVar728 >> 0x10);
          auVar290[0xf] = ~(byte)((uint)iVar728 >> 0x18);
          auVar333 = auVar333 ^ (auVar333 ^ auVar718) & auVar332;
          auVar334._0_4_ = (int)(auVar333._0_4_ + fVar227 * 0.15915494);
          auVar334._4_4_ = (int)(auVar333._4_4_ + fVar275 * 0.15915494);
          auVar334._8_4_ = (int)(auVar333._8_4_ + fVar228 * 0.15915494);
          auVar334._12_4_ = (int)(auVar333._12_4_ + fVar312 * 0.15915494);
          auVar606 = NEON_scvtf(auVar334,4);
          fVar227 = fVar227 - auVar606._0_4_ * 6.2831855;
          fVar275 = fVar275 - auVar606._4_4_ * 6.2831855;
          fVar228 = fVar228 - auVar606._8_4_ * 6.2831855;
          fVar312 = fVar312 - auVar606._12_4_ * 6.2831855;
          fVar227 = (float)((uint)fVar227 ^
                           ((uint)fVar227 ^ (uint)(-3.1415927 - fVar227)) &
                           -(uint)(fVar227 < -1.5707964));
          fVar275 = (float)((uint)fVar275 ^
                           ((uint)fVar275 ^ (uint)(-3.1415927 - fVar275)) &
                           -(uint)(fVar275 < -1.5707964));
          fVar228 = (float)((uint)fVar228 ^
                           ((uint)fVar228 ^ (uint)(-3.1415927 - fVar228)) &
                           -(uint)(fVar228 < -1.5707964));
          fVar312 = (float)((uint)fVar312 ^
                           ((uint)fVar312 ^ (uint)(-3.1415927 - fVar312)) &
                           -(uint)(fVar312 < -1.5707964));
          fVar227 = (float)((uint)fVar227 ^
                           ((uint)fVar227 ^ (uint)(3.1415927 - fVar227)) &
                           -(uint)(1.5707964 < fVar227));
          fVar275 = (float)((uint)fVar275 ^
                           ((uint)fVar275 ^ (uint)(3.1415927 - fVar275)) &
                           -(uint)(1.5707964 < fVar275));
          fVar228 = (float)((uint)fVar228 ^
                           ((uint)fVar228 ^ (uint)(3.1415927 - fVar228)) &
                           -(uint)(1.5707964 < fVar228));
          fVar312 = (float)((uint)fVar312 ^
                           ((uint)fVar312 ^ (uint)(3.1415927 - fVar312)) &
                           -(uint)(1.5707964 < fVar312));
          auVar378._0_12_ = ZEXT812(0);
          auVar378._12_4_ = -(uint)(fVar312 == 1.5707964);
          fVar274 = fVar227 * fVar227;
          fVar231 = fVar275 * fVar275;
          fVar273 = fVar228 * fVar228;
          fVar368 = fVar312 * fVar312;
          auVar667._0_4_ = fVar274 * -2.5052108e-08 + 2.7557319e-06;
          auVar667._4_4_ = fVar231 * -2.5052108e-08 + 2.7557319e-06;
          auVar667._8_4_ = fVar273 * -2.5052108e-08 + 2.7557319e-06;
          auVar667._12_4_ = fVar368 * -2.5052108e-08 + 2.7557319e-06;
          auVar252._0_4_ =
               fVar227 * (local_120 +
                         fVar274 * (fVar274 * (fVar274 * (fVar274 * auVar667._0_4_ + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar252._4_4_ =
               fVar275 * (fStack_11c +
                         fVar231 * (fVar231 * (fVar231 * (fVar231 * auVar667._4_4_ + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar252._8_4_ =
               fVar228 * (fStack_118 +
                         fVar273 * (fVar273 * (fVar273 * (fVar273 * auVar667._8_4_ + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar252._12_4_ =
               fVar312 * (fStack_114 +
                         fVar368 * (fVar368 * (fVar368 * (fVar368 * auVar667._12_4_ + -0.0001984127)
                                              + 0.008333334) + -0.16666667));
          auVar97._0_4_ = fVar488 + fVar489;
          auVar97._4_4_ = fVar490 + fVar729;
          auVar97._8_4_ = fVar488 + fVar489;
          auVar97._12_4_ = fVar490 + fVar729;
          auVar252 = auVar252 ^ (auVar252 ^ auVar561) & auVar378;
          auVar252 = auVar252 ^ (auVar252 ^ auVar609) & ~auVar290;
          auVar606 = NEON_ext(auVar97,auVar97,4,1);
          auVar98._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar98._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar98._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar98._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frsqrte(auVar98,4);
          auVar379._0_4_ = auVar98._0_4_ * auVar606._0_4_;
          auVar379._4_4_ = auVar98._4_4_ * auVar606._4_4_;
          auVar379._8_4_ = auVar98._8_4_ * auVar606._8_4_;
          auVar379._12_4_ = auVar98._12_4_ * auVar606._12_4_;
          auVar564 = NEON_frsqrts(auVar606,auVar379,4);
          auVar335._0_4_ = auVar606._0_4_ * auVar564._0_4_;
          auVar335._4_4_ = auVar606._4_4_ * auVar564._4_4_;
          auVar335._8_4_ = auVar606._8_4_ * auVar564._8_4_;
          auVar335._12_4_ = auVar606._12_4_ * auVar564._12_4_;
          auVar380._0_4_ = auVar98._0_4_ * auVar335._0_4_;
          auVar380._4_4_ = auVar98._4_4_ * auVar335._4_4_;
          auVar380._8_4_ = auVar98._8_4_ * auVar335._8_4_;
          auVar380._12_4_ = auVar98._12_4_ * auVar335._12_4_;
          iVar721 = -(uint)(auVar98._0_4_ == 0.0);
          iVar726 = -(uint)(auVar98._4_4_ == 0.0);
          iVar727 = -(uint)(auVar98._8_4_ == 0.0);
          auVar606 = NEON_frsqrts(auVar335,auVar380,4);
          fVar274 = auVar335._0_4_ * auVar606._0_4_ * (float)_DAT_03caa5b0;
          fVar228 = auVar335._4_4_ * auVar606._4_4_ * (float)((ulong)_DAT_03caa5b0 >> 0x20);
          fVar231 = auVar335._8_4_ * auVar606._8_4_ * (float)_UNK_03caa5b8;
          fVar227 = (float)CONCAT13((byte)((uint)fVar274 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                    CONCAT12((byte)((uint)fVar274 >> 0x10) &
                                             ~(byte)((uint)iVar721 >> 0x10),
                                             CONCAT11((byte)((uint)fVar274 >> 8) &
                                                      ~(byte)((uint)iVar721 >> 8),
                                                      SUB41(fVar274,0) & ~(byte)iVar721)));
          auVar279._0_8_ =
               CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                        CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                                 CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                          CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar227))));
          auVar279[8] = SUB41(fVar231,0) & ~(byte)iVar727;
          auVar279[9] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar727 >> 8);
          auVar279[10] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
          auVar279[0xb] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
          auVar336._4_4_ = auVar179._4_4_;
          auVar336._0_4_ = auVar179._4_4_;
          auVar336._8_4_ = auVar179._4_4_;
          auVar336._12_4_ = auVar179._4_4_;
          fVar227 = auVar252._0_4_ * fVar227;
          fVar228 = auVar252._4_4_ * (float)((ulong)auVar279._0_8_ >> 0x20);
          fVar231 = auVar252._8_4_ * auVar279._8_4_;
          fVar273 = auVar252._12_4_ * auVar638._0_4_;
          auVar291._4_4_ = auVar179._8_4_;
          auVar291._0_4_ = auVar179._8_4_;
          auVar291._8_4_ = auVar179._8_4_;
          auVar291._12_4_ = auVar179._8_4_;
          auVar564 = NEON_ext(auVar291,auVar179,0xc,1);
          auVar437._4_4_ = fVar231;
          auVar437._0_4_ = fVar231;
          auVar437._8_4_ = fVar231;
          auVar437._12_4_ = fVar231;
          auVar595 = NEON_ext(auVar336,auVar564,0xc,1);
          auVar438._4_12_ = auVar437._4_12_;
          auVar438._0_4_ = fVar227;
          auVar440._0_8_ = auVar438._0_8_;
          auVar440._8_4_ = fVar228;
          auVar440._12_4_ = fVar231;
          auVar439._8_8_ = auVar440._8_8_;
          auVar439._4_4_ = fVar231;
          auVar439._0_4_ = fVar227;
          auVar441._0_12_ = auVar439._0_12_;
          auVar441._12_4_ = fVar231;
          auVar606 = NEON_ext(auVar441,auVar441,8,1);
          fVar274 = auVar606._0_4_;
          auVar442._4_12_ = auVar441._4_12_;
          auVar442._0_4_ = fVar274;
          auVar444._0_8_ = auVar442._0_8_;
          auVar444._8_4_ = auVar606._8_4_;
          auVar444._12_4_ = fVar231;
          auVar443._8_8_ = auVar444._8_8_;
          auVar443._4_4_ = fVar227;
          auVar443._0_4_ = fVar274;
          auVar445._0_12_ = auVar443._0_12_;
          auVar445._12_4_ = fVar228;
          auVar330 = NEON_ext(auVar445,auVar606,8,1);
          auVar330 = NEON_ext(auVar330,auVar330,0xc,1);
          auVar381._0_4_ =
               (fVar227 * auVar179._12_4_ + fVar273 * auVar179._0_4_ * local_e0 +
               auVar330._0_4_ * auVar595._0_4_ * local_e0) - auVar564._0_4_ * fVar274;
          auVar381._4_4_ =
               (fVar228 * auVar179._12_4_ + fVar273 * auVar179._4_4_ * fStack_dc +
               auVar330._4_4_ * auVar595._4_4_ * fStack_dc) - auVar564._4_4_ * auVar606._4_4_;
          auVar381._8_4_ =
               (fVar231 * auVar179._12_4_ + fVar273 * auVar179._8_4_ * fStack_d8 +
               auVar330._8_4_ * auVar595._8_4_ * fStack_d8) - auVar564._8_4_ * auVar606._8_4_;
          auVar381._12_4_ =
               (fVar273 * auVar179._12_4_ + fVar227 * auVar179._0_4_ * fStack_d4 +
               auVar330._12_4_ * auVar595._12_4_ * fStack_d4) - auVar564._12_4_ * auVar606._12_4_;
          auVar181._0_4_ = -auVar381._0_4_;
          fVar227 = -auVar381._4_4_;
          auVar180._8_4_ = -auVar381._8_4_;
          auVar292._4_4_ = auVar381._8_4_;
          auVar292._0_4_ = auVar381._8_4_;
          auVar292._8_4_ = auVar381._8_4_;
          auVar292._12_4_ = auVar381._8_4_;
          auVar606 = NEON_ext(auVar292,auVar381,0xc,1);
          auVar337._4_4_ = auVar381._4_4_;
          auVar337._0_4_ = auVar381._4_4_;
          auVar337._8_4_ = auVar381._4_4_;
          auVar337._12_4_ = auVar381._4_4_;
          auVar564 = NEON_ext(auVar337,auVar606,0xc,1);
          auVar180._4_4_ = auVar180._8_4_;
          auVar180._0_4_ = auVar180._8_4_;
          auVar180._12_4_ = auVar180._8_4_;
          auVar181._4_12_ = auVar180._4_12_;
          auVar183._0_8_ = auVar181._0_8_;
          auVar183._8_4_ = fVar227;
          auVar183._12_4_ = auVar180._8_4_;
          auVar182._8_8_ = auVar183._8_8_;
          auVar182._4_4_ = auVar180._8_4_;
          auVar182._0_4_ = auVar181._0_4_;
          auVar184._0_12_ = auVar182._0_12_;
          auVar184._12_4_ = auVar180._8_4_;
          auVar446._0_4_ =
               (fVar271 * auVar381._12_4_ + fVar276 * auVar381._0_4_ * local_e0 +
               fVar311 * auVar564._0_4_ * local_e0) - auVar606._0_4_ * fVar488;
          auVar446._4_4_ =
               (fVar310 * auVar381._12_4_ + fVar313 * auVar381._4_4_ * fStack_dc +
               fVar314 * auVar564._4_4_ * fStack_dc) - auVar606._4_4_ * fVar489;
          auVar446._8_4_ =
               (fVar690 * auVar381._12_4_ + fVar530 * auVar381._8_4_ * fStack_d8 +
               fVar485 * auVar564._8_4_ * fStack_d8) - auVar606._8_4_ * fVar490;
          auVar446._12_4_ =
               (fVar692 * auVar381._12_4_ + fVar424 * auVar381._0_4_ * fStack_d4 +
               fVar486 * auVar564._12_4_ * fStack_d4) - auVar606._12_4_ * fVar729;
          auVar293._4_4_ = auVar446._8_4_;
          auVar293._0_4_ = auVar446._8_4_;
          auVar293._8_4_ = auVar446._8_4_;
          auVar293._12_4_ = auVar446._8_4_;
          auVar338._4_4_ = auVar446._4_4_;
          auVar338._0_4_ = auVar446._4_4_;
          auVar338._8_4_ = auVar446._4_4_;
          auVar338._12_4_ = auVar446._4_4_;
          auVar595 = NEON_ext(auVar293,auVar446,0xc,1);
          auVar564 = NEON_ext(auVar338,auVar595,0xc,1);
          auVar330 = NEON_ext(auVar184,auVar184,8,1);
          fVar274 = auVar330._0_4_;
          auVar185._4_12_ = auVar184._4_12_;
          auVar185._0_4_ = fVar274;
          auVar187._0_8_ = auVar185._0_8_;
          auVar187._8_4_ = auVar330._8_4_;
          auVar187._12_4_ = auVar180._8_4_;
          auVar186._8_8_ = auVar187._8_8_;
          auVar186._4_4_ = auVar181._0_4_;
          auVar186._0_4_ = fVar274;
          auVar188._0_12_ = auVar186._0_12_;
          auVar188._12_4_ = fVar227;
          auVar606 = NEON_ext(auVar188,auVar330,8,1);
          auVar606 = NEON_ext(auVar606,auVar606,0xc,1);
          fVar274 = (auVar181._0_4_ * auVar446._12_4_ + auVar381._12_4_ * auVar446._0_4_ * local_e0
                    + auVar606._0_4_ * auVar564._0_4_ * local_e0) - auVar595._0_4_ * fVar274;
          fVar227 = (fVar227 * auVar446._12_4_ + auVar381._12_4_ * auVar446._4_4_ * fStack_dc +
                    auVar606._4_4_ * auVar564._4_4_ * fStack_dc) - auVar595._4_4_ * auVar330._4_4_;
          fVar228 = (auVar180._8_4_ * auVar446._12_4_ + auVar381._12_4_ * auVar446._8_4_ * fStack_d8
                    + auVar606._8_4_ * auVar564._8_4_ * fStack_d8) - auVar595._8_4_ * auVar330._8_4_
          ;
          lVar60 = nn::os::GetCurrentThread();
          do {
            lVar61 = *plVar1;
            lVar63 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar61;
              *(long *)(param_6 + 0x458) = lVar63;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            while ((lVar61 != 0 && (lVar60 != lVar61))) {
              nn::os::WaitLightEvent(pLVar2);
              do {
                lVar61 = *plVar1;
                lVar63 = *(long *)(param_6 + 0x458);
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar61;
                  *(long *)(param_6 + 0x458) = lVar63;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            do {
              lVar4 = *plVar1;
              if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto LAB_00d14d28;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar61;
                *(long *)(param_6 + 0x454) = lVar63 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
LAB_00d14d28:
            lVar61 = lVar4;
            lVar63 = *(long *)(param_6 + 0x458);
          } while (!bVar57);
          lVar60 = *(long *)(param_6 + 0x248) +
                   (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
          auVar543 = *(undefined1 (*) [12])(lVar60 + 0x10);
          fStack_124 = (float)((ulong)*(undefined8 *)(lVar60 + 0x18) >> 0x20);
          do {
            lVar60 = *plVar1;
            lVar61 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x458) = lVar61;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar63 = *plVar1;
            lVar4 = *(long *)(param_6 + 0x458);
            if (lVar63 != lVar60 || lVar4 != lVar61) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto LAB_00d14d8c;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x454) = lVar61 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
LAB_00d14d8c:
          if (!bVar57) {
            do {
              lVar60 = *plVar1;
              lVar61 = *(long *)(param_6 + 0x458);
              if (lVar60 != lVar63 || lVar61 != lVar4) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto joined_r0x00d1639c;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar63;
                *(long *)(param_6 + 0x454) = lVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
joined_r0x00d1639c:
            if (!bVar57) {
              do {
                lVar63 = *plVar1;
                lVar4 = *(long *)(param_6 + 0x458);
                if (lVar63 != lVar60 || lVar4 != lVar61) {
                  bVar57 = false;
                  ClearExclusiveLocal();
                  lVar60 = lVar63;
                  lVar61 = lVar4;
                  goto joined_r0x00d1639c;
                }
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar60;
                  *(long *)(param_6 + 0x454) = lVar61 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar57 = true;
              lVar60 = lVar63;
              lVar61 = lVar4;
              goto joined_r0x00d1639c;
            }
          }
          nn::os::SignalLightEvent(pLVar2);
          auVar35._12_4_ = fStack_124;
          auVar35._0_12_ = auVar543;
          fVar275 = auVar543._8_4_;
          auVar339._4_4_ = fVar275;
          auVar339._0_4_ = fVar275;
          auVar339._8_4_ = fVar275;
          auVar339._12_4_ = fVar275;
          fVar231 = auVar543._0_4_;
          auVar606 = NEON_ext(auVar339,auVar35,0xc,1);
          fVar273 = auVar543._4_4_;
          auVar409._4_4_ = fVar273;
          auVar409._0_4_ = fVar273;
          auVar409._8_4_ = fVar273;
          auVar409._12_4_ = fVar273;
          auVar564 = NEON_ext(auVar409,auVar606,0xc,1);
          auVar382._0_4_ =
               fVar271 * fStack_124 + fVar276 * fVar231 * local_e0 +
               fVar311 * auVar564._0_4_ * local_e0 + (float)_DAT_03cac220 * auVar606._0_4_;
          auVar382._4_4_ =
               fVar310 * fStack_124 + fVar313 * fVar273 * fStack_dc +
               fVar314 * auVar564._4_4_ * fStack_dc +
               (float)((ulong)_DAT_03cac220 >> 0x20) * auVar606._4_4_;
          auVar382._8_4_ =
               fVar690 * fStack_124 + fVar530 * fVar275 * fStack_d8 +
               fVar485 * auVar564._8_4_ * fStack_d8 + (float)_UNK_03cac228 * auVar606._8_4_;
          auVar382._12_4_ =
               fVar692 * fStack_124 + fVar424 * fVar231 * fStack_d4 +
               fVar486 * auVar564._12_4_ * fStack_d4 +
               (float)((ulong)_UNK_03cac228 >> 0x20) * auVar606._12_4_;
          auVar189._0_4_ = -fVar231;
          auVar189._4_4_ = -fVar273;
          auVar189._8_4_ = -fVar275;
          auVar294._4_4_ = auVar382._8_4_;
          auVar294._0_4_ = auVar382._8_4_;
          auVar294._8_4_ = auVar382._8_4_;
          auVar294._12_4_ = auVar382._8_4_;
          auVar189._12_4_ = fStack_124;
          auVar595 = NEON_ext(auVar294,auVar382,0xc,1);
          auVar340._4_4_ = auVar382._4_4_;
          auVar340._0_4_ = auVar382._4_4_;
          auVar340._8_4_ = auVar382._4_4_;
          auVar340._12_4_ = auVar382._4_4_;
          auVar48._4_4_ = fVar227;
          auVar48._0_4_ = fVar274;
          auVar48._8_4_ = fVar228;
          auVar48._12_4_ = 0;
          auVar190._4_12_ = auVar189._4_12_;
          auVar190._0_4_ = auVar189._0_4_;
          auVar192._0_8_ = auVar190._0_8_;
          auVar192._8_4_ = auVar189._4_4_;
          auVar192._12_4_ = fStack_124;
          auVar191._8_8_ = auVar192._8_8_;
          auVar191._4_4_ = auVar189._8_4_;
          auVar191._0_4_ = auVar189._0_4_;
          auVar193._0_12_ = auVar191._0_12_;
          auVar193._12_4_ = auVar189._8_4_;
          auVar564 = NEON_ext(auVar340,auVar595,0xc,1);
          auVar330 = NEON_ext(auVar193,auVar193,8,1);
          fVar231 = auVar330._0_4_;
          auVar194._4_12_ = auVar193._4_12_;
          auVar194._0_4_ = fVar231;
          auVar196._0_8_ = auVar194._0_8_;
          auVar196._8_4_ = auVar330._8_4_;
          auVar196._12_4_ = auVar189._8_4_;
          auVar195._8_8_ = auVar196._8_8_;
          auVar195._4_4_ = auVar189._0_4_;
          auVar195._0_4_ = fVar231;
          auVar197._0_12_ = auVar195._0_12_;
          auVar197._12_4_ = auVar189._4_4_;
          auVar606 = NEON_ext(auVar197,auVar330,8,1);
          uVar493 = a64_TBL(ZEXT816(0),auVar48,uVar492);
          auVar606 = NEON_ext(auVar606,auVar606,0xc,1);
          auVar410._0_4_ =
               (auVar189._0_4_ * auVar382._12_4_ + fStack_124 * auVar382._0_4_ * local_e0 +
               auVar606._0_4_ * auVar564._0_4_ * local_e0) - auVar595._0_4_ * fVar231;
          auVar410._4_4_ =
               (auVar189._4_4_ * auVar382._12_4_ + fStack_124 * auVar382._4_4_ * fStack_dc +
               auVar606._4_4_ * auVar564._4_4_ * fStack_dc) - auVar595._4_4_ * auVar330._4_4_;
          auVar410._8_4_ =
               (auVar189._8_4_ * auVar382._12_4_ + fStack_124 * auVar382._8_4_ * fStack_d8 +
               auVar606._8_4_ * auVar564._8_4_ * fStack_d8) - auVar595._8_4_ * auVar330._8_4_;
          uVar730 = a64_TBL(ZEXT816(0),auVar48,uVar559);
          auVar410._12_4_ = 0;
          uVar710 = a64_TBL(ZEXT816(0),auVar410,uVar492);
          uVar722 = a64_TBL(ZEXT816(0),auVar410,uVar542);
          uVar317 = a64_TBL(ZEXT816(0),auVar48,uVar566);
          uVar369 = a64_TBL(ZEXT816(0),auVar410,uVar559);
          auVar447._0_8_ = a64_TBL(ZEXT816(0),auVar410,uVar566);
          auVar447._8_8_ = 0;
          uVar567 = a64_TBL(ZEXT816(0),auVar48,uVar542);
          fVar231 = (float)uVar710 * (float)uVar730 - (float)uVar369 * (float)uVar493;
          fVar273 = (float)((ulong)uVar710 >> 0x20) * (float)((ulong)uVar730 >> 0x20) -
                    (float)((ulong)uVar369 >> 0x20) * (float)((ulong)uVar493 >> 0x20);
          fVar275 = (float)uVar722 * (float)uVar317 - (float)auVar447._0_8_ * (float)uVar567;
          fVar312 = (float)((ulong)uVar722 >> 0x20) * (float)((ulong)uVar317 >> 0x20) -
                    (float)(auVar447._0_8_ >> 0x20) * (float)((ulong)uVar567 >> 0x20);
          fVar312 = fVar312 * fVar312;
          auVar99._0_4_ = fVar231 * fVar231 + fVar273 * fVar273;
          auVar99._4_4_ = fVar275 * fVar275 + fVar312;
          auVar99._8_4_ = fVar231 * fVar231 + fVar273 * fVar273;
          auVar99._12_4_ = fVar275 * fVar275 + fVar312;
          auVar606 = NEON_ext(auVar99,auVar99,4,1);
          auVar100._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar100._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar100._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar100._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frsqrte(auVar100,4);
          auVar341._0_4_ = auVar100._0_4_ * auVar606._0_4_;
          auVar341._4_4_ = auVar100._4_4_ * auVar606._4_4_;
          auVar341._8_4_ = auVar100._8_4_ * auVar606._8_4_;
          auVar341._12_4_ = auVar100._12_4_ * auVar606._12_4_;
          auVar564 = NEON_frsqrts(auVar606,auVar341,4);
          auVar295._0_4_ = auVar606._0_4_ * auVar564._0_4_;
          auVar295._4_4_ = auVar606._4_4_ * auVar564._4_4_;
          auVar295._8_4_ = auVar606._8_4_ * auVar564._8_4_;
          auVar295._12_4_ = auVar606._12_4_ * auVar564._12_4_;
          auVar342._0_4_ = auVar100._0_4_ * auVar295._0_4_;
          auVar342._4_4_ = auVar100._4_4_ * auVar295._4_4_;
          auVar342._8_4_ = auVar100._8_4_ * auVar295._8_4_;
          auVar342._12_4_ = auVar100._12_4_ * auVar295._12_4_;
          iVar721 = -(uint)(auVar100._0_4_ == 0.0);
          iVar726 = -(uint)(auVar100._4_4_ == 0.0);
          iVar727 = -(uint)(auVar100._8_4_ == 0.0);
          auVar606 = NEON_frsqrts(auVar295,auVar342,4);
          fVar231 = fVar231 * auVar295._0_4_ * auVar606._0_4_;
          fVar273 = fVar273 * auVar295._4_4_ * auVar606._4_4_;
          fVar275 = fVar275 * auVar295._8_4_ * auVar606._8_4_;
          fVar231 = (float)CONCAT13((byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                    CONCAT12((byte)((uint)fVar231 >> 0x10) &
                                             ~(byte)((uint)iVar721 >> 0x10),
                                             CONCAT11((byte)((uint)fVar231 >> 8) &
                                                      ~(byte)((uint)iVar721 >> 8),
                                                      SUB41(fVar231,0) & ~(byte)iVar721)));
          auVar154._0_8_ =
               CONCAT17((byte)((uint)fVar273 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                        CONCAT16((byte)((uint)fVar273 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                                 CONCAT15((byte)((uint)fVar273 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                          CONCAT14(SUB41(fVar273,0) & ~(byte)iVar726,fVar231))));
          auVar154[8] = SUB41(fVar275,0) & ~(byte)iVar727;
          auVar154[9] = (byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar727 >> 8);
          auVar154[10] = (byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
          auVar154[0xb] = (byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
          fVar274 = fVar274 * auVar410._0_4_;
          fVar227 = fVar227 * auVar410._4_4_;
          fVar228 = fVar228 * auVar410._8_4_;
          auVar101._0_4_ = fVar274 + fVar227;
          auVar101._4_4_ = fVar228 + 0.0;
          auVar101._8_4_ = fVar274 + fVar227;
          auVar101._12_4_ = fVar228 + 0.0;
          auVar606 = NEON_ext(auVar101,auVar101,4,1);
          auVar102._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar102._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar102._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar102._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_fmax(auVar102,auVar326,4);
          auVar606 = NEON_fmin(auVar606,auVar561,4);
          auVar201._0_4_ = fVar231 * SQRT(local_120 - (auVar606._0_4_ + local_120) * 0.5);
          fVar274 = (float)((ulong)auVar154._0_8_ >> 0x20) *
                    SQRT(fStack_11c - (auVar606._4_4_ + fStack_11c) * 0.5);
          auVar200._8_4_ = auVar154._8_4_ * SQRT(fStack_118 - (auVar606._8_4_ + fStack_118) * 0.5);
          lVar60 = nn::os::GetCurrentThread();
          do {
            lVar61 = *plVar1;
            lVar63 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar61;
              *(long *)(param_6 + 0x458) = lVar63;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            while ((lVar61 != 0 && (lVar60 != lVar61))) {
              nn::os::WaitLightEvent(pLVar2);
              do {
                lVar61 = *plVar1;
                lVar63 = *(long *)(param_6 + 0x458);
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar61;
                  *(long *)(param_6 + 0x458) = lVar63;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            do {
              lVar4 = *plVar1;
              if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto LAB_00d14f48;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar61;
                *(long *)(param_6 + 0x454) = lVar63 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
LAB_00d14f48:
            lVar61 = lVar4;
            lVar63 = *(long *)(param_6 + 0x458);
          } while (!bVar57);
          lVar60 = *(long *)(param_6 + 0x248) +
                   (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
          auVar543 = *(undefined1 (*) [12])(lVar60 + 0x10);
          fStack_124 = (float)((ulong)*(undefined8 *)(lVar60 + 0x18) >> 0x20);
          do {
            lVar60 = *plVar1;
            lVar61 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x458) = lVar61;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar63 = *plVar1;
            lVar4 = *(long *)(param_6 + 0x458);
            if (lVar63 != lVar60 || lVar4 != lVar61) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto LAB_00d14fa8;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x454) = lVar61 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
LAB_00d14fa8:
          if (!bVar57) {
            do {
              lVar60 = *plVar1;
              lVar61 = *(long *)(param_6 + 0x458);
              if (lVar60 != lVar63 || lVar61 != lVar4) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto joined_r0x00d163e8;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar63;
                *(long *)(param_6 + 0x454) = lVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
joined_r0x00d163e8:
            if (!bVar57) {
              do {
                lVar63 = *plVar1;
                lVar4 = *(long *)(param_6 + 0x458);
                if (lVar63 != lVar60 || lVar4 != lVar61) {
                  bVar57 = false;
                  ClearExclusiveLocal();
                  lVar60 = lVar63;
                  lVar61 = lVar4;
                  goto joined_r0x00d163e8;
                }
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar60;
                  *(long *)(param_6 + 0x454) = lVar61 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar57 = true;
              lVar60 = lVar63;
              lVar61 = lVar4;
              goto joined_r0x00d163e8;
            }
          }
          nn::os::SignalLightEvent(pLVar2);
          auVar36._12_4_ = fStack_124;
          auVar36._0_12_ = auVar543;
          uVar149 = auVar543._8_4_;
          auVar198._4_4_ = uVar149;
          auVar198._0_4_ = uVar149;
          auVar198._8_4_ = uVar149;
          auVar198._12_4_ = uVar149;
          auVar606 = NEON_ext(auVar198,auVar36,0xc,1);
          uVar149 = auVar543._4_4_;
          auVar199._4_4_ = uVar149;
          auVar199._0_4_ = uVar149;
          auVar199._8_4_ = uVar149;
          auVar199._12_4_ = uVar149;
          NEON_ext(auVar199,auVar606,0xc,1);
          auVar200._4_4_ = auVar200._8_4_;
          auVar200._0_4_ = auVar200._8_4_;
          auVar200._12_4_ = auVar200._8_4_;
          auVar201._4_12_ = auVar200._4_12_;
          auVar203._0_8_ = auVar201._0_8_;
          auVar203._8_4_ = fVar274;
          auVar203._12_4_ = auVar200._8_4_;
          auVar202._8_8_ = auVar203._8_8_;
          auVar202._4_4_ = auVar200._8_4_;
          auVar202._0_4_ = auVar201._0_4_;
          auVar204._0_12_ = auVar202._0_12_;
          auVar204._12_4_ = auVar200._8_4_;
          auVar606 = NEON_ext(auVar204,auVar204,8,1);
          auVar448._4_12_ = auVar447._4_12_;
          auVar448._0_4_ = auVar606._0_4_;
          auVar450._12_4_ = auVar447._12_4_;
          auVar450._0_8_ = auVar448._0_8_;
          auVar450._8_4_ = auVar606._8_4_;
          auVar449._8_8_ = auVar450._8_8_;
          auVar449._4_4_ = auVar201._0_4_;
          auVar449._0_4_ = auVar606._0_4_;
          auVar451._0_12_ = auVar449._0_12_;
          auVar451._12_4_ = fVar274;
          auVar606 = NEON_ext(auVar451,auVar606,8,1);
          NEON_ext(auVar606,auVar606,0xc,1);
          FUN_00d172e8(param_6,param_7);
          pfVar59 = (float *)FUN_00c4c40c(param_6,param_7);
          fVar274 = *(float *)(param_6 + 0x3e0);
          fVar227 = *(float *)(param_6 + 0x3e4);
          fVar228 = *(float *)(param_6 + 1000);
          fVar231 = *(float *)(param_6 + 0x3ec);
          fVar273 = *(float *)(param_6 + 0x3f0);
          fVar275 = *(float *)(param_6 + 0x3f4);
          fVar312 = *(float *)(param_6 + 0x3f8);
          fVar368 = *(float *)(param_6 + 0x3fc);
          fVar696 = *(float *)(param_6 + 0x400);
          fVar487 = *(float *)(param_6 + 0x404);
          fVar276 = *(float *)(param_6 + 0x408);
          fVar311 = *(float *)(param_6 + 0x40c);
          fVar313 = *(float *)(param_6 + 0x410);
          fVar314 = *(float *)(param_6 + 0x414);
          fVar530 = *(float *)(param_6 + 0x418);
          fVar485 = *(float *)(param_6 + 0x41c);
          fVar424 = *pfVar59;
          fVar486 = pfVar59[1];
          fVar488 = pfVar59[2];
          fVar489 = pfVar59[3];
          fVar490 = pfVar59[4];
          fVar729 = pfVar59[5];
          fVar229 = pfVar59[6];
          fVar230 = pfVar59[7];
          fVar272 = fVar274 * fVar424 + fVar273 * fVar486 + fVar696 * fVar488 + fVar313 * fVar489;
          fVar366 = fVar227 * fVar424 + fVar275 * fVar486 + fVar487 * fVar488 + fVar314 * fVar489;
          fVar367 = fVar228 * fVar424 + fVar312 * fVar486 + fVar276 * fVar488 + fVar530 * fVar489;
          fVar527 = fVar231 * fVar424 + fVar368 * fVar486 + fVar311 * fVar488 + fVar485 * fVar489;
          fVar424 = pfVar59[8];
          fVar486 = pfVar59[9];
          fVar488 = pfVar59[10];
          fVar489 = pfVar59[0xb];
          fVar266 = pfVar59[0xc];
          fVar267 = pfVar59[0xd];
          fVar269 = pfVar59[0xe];
          fVar270 = pfVar59[0xf];
          fVar528 = fVar274 * fVar490 + fVar273 * fVar729 + fVar696 * fVar229 + fVar313 * fVar230;
          fVar529 = fVar227 * fVar490 + fVar275 * fVar729 + fVar487 * fVar229 + fVar314 * fVar230;
          fVar735 = fVar228 * fVar490 + fVar312 * fVar729 + fVar276 * fVar229 + fVar530 * fVar230;
          fVar490 = fVar231 * fVar490 + fVar368 * fVar729 + fVar311 * fVar229 + fVar485 * fVar230;
          auVar597._0_4_ =
               fVar274 * fVar424 + fVar273 * fVar486 + fVar696 * fVar488 + fVar313 * fVar489;
          auVar597._4_4_ =
               fVar227 * fVar424 + fVar275 * fVar486 + fVar487 * fVar488 + fVar314 * fVar489;
          auVar597._8_4_ =
               fVar228 * fVar424 + fVar312 * fVar486 + fVar276 * fVar488 + fVar530 * fVar489;
          auVar597._12_4_ =
               fVar231 * fVar424 + fVar368 * fVar486 + fVar311 * fVar488 + fVar485 * fVar489;
          fVar274 = fVar274 * fVar266 + fVar273 * fVar267 + fVar696 * fVar269 + fVar313 * fVar270;
          fVar227 = fVar227 * fVar266 + fVar275 * fVar267 + fVar487 * fVar269 + fVar314 * fVar270;
          fVar228 = fVar228 * fVar266 + fVar312 * fVar267 + fVar276 * fVar269 + fVar530 * fVar270;
          fVar231 = fVar231 * fVar266 + fVar368 * fVar267 + fVar311 * fVar269 + fVar485 * fVar270;
          auVar645._4_12_ = auVar638._4_12_;
          auVar645._0_4_ = fVar527;
          auVar647._12_4_ = auVar638._12_4_;
          auVar647._0_8_ = auVar645._0_8_;
          auVar647._8_4_ = auVar597._12_4_;
          auVar646._8_8_ = auVar647._8_8_;
          auVar646._4_4_ = fVar490;
          auVar646._0_4_ = fVar527;
          auVar648._0_12_ = auVar646._0_12_;
          auVar648._12_4_ = fVar231;
          auVar569._4_4_ = fVar528;
          auVar569._0_4_ = fVar528;
          auVar569._8_4_ = fVar528;
          auVar569._12_4_ = fVar528;
          auVar598._4_12_ = auVar597._4_12_;
          auVar598._0_4_ = fVar272;
          auVar600._0_8_ = auVar598._0_8_;
          auVar600._8_4_ = auVar597._0_4_;
          auVar600._12_4_ = auVar597._12_4_;
          auVar599._8_8_ = auVar600._8_8_;
          auVar599._4_4_ = fVar272;
          auVar599._0_4_ = fVar272;
          auVar601._0_12_ = auVar599._0_12_;
          auVar601._12_4_ = auVar597._0_4_;
          auVar610._4_4_ = fVar529;
          auVar610._0_4_ = fVar529;
          auVar610._8_4_ = fVar529;
          auVar610._12_4_ = fVar529;
          auVar103._0_4_ = fVar527 * fVar527 + fVar490 * fVar490;
          auVar103._4_4_ = auVar597._12_4_ * auVar597._12_4_ + 0.0;
          auVar103._8_4_ = fVar527 * fVar527 + fVar490 * fVar490;
          auVar103._12_4_ = auVar597._12_4_ * auVar597._12_4_ + 0.0;
          auVar606 = NEON_ext(auVar103,auVar103,4,1);
          auVar625._4_12_ = auVar624._4_12_;
          auVar625._0_4_ = fVar366;
          auVar627._12_4_ = auVar624._12_4_;
          auVar627._0_8_ = auVar625._0_8_;
          auVar627._8_4_ = auVar597._4_4_;
          auVar626._8_8_ = auVar627._8_8_;
          auVar626._4_4_ = fVar366;
          auVar626._0_4_ = fVar366;
          auVar628._0_12_ = auVar626._0_12_;
          auVar628._12_4_ = auVar597._4_4_;
          auVar661._4_4_ = fVar735;
          auVar661._0_4_ = fVar735;
          auVar661._8_4_ = fVar735;
          auVar661._12_4_ = fVar735;
          bVar57 = false;
          if ((auVar606._0_4_ + auVar606._4_4_ == 0.0) && (bVar57 = false, !NAN(fVar231))) {
            bVar57 = fVar231 == 1.0;
          }
          auVar668._4_12_ = auVar667._4_12_;
          auVar668._0_4_ = fVar367;
          auVar670._12_4_ = auVar667._12_4_;
          auVar670._0_8_ = auVar668._0_8_;
          auVar670._8_4_ = auVar597._8_4_;
          auVar669._8_8_ = auVar670._8_8_;
          auVar669._4_4_ = fVar367;
          auVar669._0_4_ = fVar367;
          auVar671._0_12_ = auVar669._0_12_;
          auVar671._12_4_ = auVar597._8_4_;
          if (bVar57) {
            auVar638 = NEON_ext(auVar671,auVar661,8,1);
            auVar564 = NEON_ext(auVar601,auVar569,8,1);
            auVar595 = NEON_ext(auVar628,auVar610,8,1);
            fVar273 = (fVar529 * auVar638._0_4_ - auVar595._0_4_ * fVar735) * (float)_DAT_03cac270;
            fVar530 = (float)((ulong)_DAT_03cac270 >> 0x20);
            fVar312 = (fVar366 * auVar638._4_4_ - auVar595._4_4_ * fVar367) * fVar530;
            fVar696 = (fVar366 * auVar638._8_4_ - auVar595._8_4_ * fVar367) * (float)_UNK_03cac278;
            fVar485 = (float)((ulong)_UNK_03cac278 >> 0x20);
            fVar276 = (fVar366 * auVar638._12_4_ - auVar595._12_4_ * fVar367) * fVar485;
            fVar231 = fVar272 * fVar273;
            fVar275 = fVar528 * fVar312;
            fVar368 = auVar597._0_4_ * fVar696;
            fVar487 = fVar276 * 0.0;
            auVar137._0_4_ = fVar231 + fVar275;
            auVar137._4_4_ = fVar368 + fVar487;
            auVar137._8_4_ = fVar231 + fVar275;
            auVar137._12_4_ = fVar368 + fVar487;
            auVar606 = NEON_ext(auVar137,auVar137,4,1);
            auVar138._0_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar138._4_4_ = auVar606._8_4_ + auVar606._12_4_;
            auVar138._8_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar138._12_4_ = auVar606._8_4_ + auVar606._12_4_;
            auVar606 = NEON_frecpe(auVar138,4);
            iVar721 = -(uint)(auVar138._0_4_ == 0.0);
            iVar726 = -(uint)(auVar138._4_4_ == 0.0);
            iVar727 = -(uint)(auVar138._8_4_ == 0.0);
            iVar728 = -(uint)(auVar138._12_4_ == 0.0);
            local_100 = ~(byte)iVar721;
            bStack_ff = ~(byte)((uint)iVar721 >> 8);
            bStack_fe = ~(byte)((uint)iVar721 >> 0x10);
            bStack_fd = ~(byte)((uint)iVar721 >> 0x18);
            bStack_fc = ~(byte)iVar726;
            bStack_fb = ~(byte)((uint)iVar726 >> 8);
            bStack_fa = ~(byte)((uint)iVar726 >> 0x10);
            bStack_f9 = ~(byte)((uint)iVar726 >> 0x18);
            bVar541 = ~(byte)iVar727;
            bVar544 = ~(byte)((uint)iVar727 >> 8);
            bVar545 = ~(byte)((uint)iVar727 >> 0x10);
            bVar546 = ~(byte)((uint)iVar727 >> 0x18);
            bStack_f4 = ~(byte)iVar728;
            bStack_f3 = ~(byte)((uint)iVar728 >> 8);
            bStack_f2 = ~(byte)((uint)iVar728 >> 0x10);
            bStack_f1 = ~(byte)((uint)iVar728 >> 0x18);
            auVar330 = NEON_frecps(auVar606,auVar138,4);
            auVar420._0_4_ = auVar606._0_4_ * auVar330._0_4_;
            auVar420._4_4_ = auVar606._4_4_ * auVar330._4_4_;
            auVar420._8_4_ = auVar606._8_4_ * auVar330._8_4_;
            auVar420._12_4_ = auVar606._12_4_ * auVar330._12_4_;
            auVar606 = NEON_frecps(auVar420,auVar138,4);
            fVar487 = auVar420._0_4_ * auVar606._0_4_;
            fVar311 = auVar420._4_4_ * auVar606._4_4_;
            fVar313 = auVar420._8_4_ * auVar606._8_4_;
            fVar314 = auVar420._12_4_ * auVar606._12_4_;
            fVar273 = fVar273 * fVar487;
            fVar312 = fVar312 * fVar311;
            fVar696 = fVar696 * fVar313;
            fVar276 = fVar276 * fVar314;
            fVar231 = (float)CONCAT13((byte)((uint)fVar273 >> 0x18) & bStack_fd,
                                      CONCAT12((byte)((uint)fVar273 >> 0x10) & bStack_fe,
                                               CONCAT11((byte)((uint)fVar273 >> 8) & bStack_ff,
                                                        SUB41(fVar273,0) & local_100)));
            auVar236._0_8_ =
                 CONCAT17((byte)((uint)fVar312 >> 0x18) & bStack_f9,
                          CONCAT16((byte)((uint)fVar312 >> 0x10) & bStack_fa,
                                   CONCAT15((byte)((uint)fVar312 >> 8) & bStack_fb,
                                            CONCAT14(SUB41(fVar312,0) & bStack_fc,fVar231))));
            auVar236[8] = SUB41(fVar696,0) & bVar541;
            auVar236[9] = (byte)((uint)fVar696 >> 8) & bVar544;
            auVar236[10] = (byte)((uint)fVar696 >> 0x10) & bVar545;
            auVar236[0xb] = (byte)((uint)fVar696 >> 0x18) & bVar546;
            auVar253[0xc] = SUB41(fVar276,0) & bStack_f4;
            auVar253._0_12_ = auVar236;
            auVar253[0xd] = (byte)((uint)fVar276 >> 8) & bStack_f3;
            auVar253[0xe] = (byte)((uint)fVar276 >> 0x10) & bStack_f2;
            auVar253[0xf] = (byte)((uint)fVar276 >> 0x18) & bStack_f1;
            fVar273 = (fVar528 * auVar638._0_4_ - auVar564._0_4_ * fVar735) * (float)_DAT_03cab860 *
                      fVar487;
            fVar275 = (fVar272 * auVar638._4_4_ - auVar564._4_4_ * fVar367) *
                      (float)((ulong)_DAT_03cab860 >> 0x20) * fVar311;
            fVar312 = (fVar272 * auVar638._8_4_ - auVar564._8_4_ * fVar367) * (float)_UNK_03cab868 *
                      fVar313;
            fVar368 = (fVar272 * auVar638._12_4_ - auVar564._12_4_ * fVar367) *
                      (float)((ulong)_UNK_03cab868 >> 0x20) * fVar314;
            fVar487 = (fVar528 * auVar595._0_4_ - auVar564._0_4_ * fVar529) * (float)_DAT_03cac270 *
                      fVar487;
            fVar311 = (fVar272 * auVar595._4_4_ - auVar564._4_4_ * fVar366) * fVar530 * fVar311;
            fVar313 = (fVar272 * auVar595._8_4_ - auVar564._8_4_ * fVar366) * (float)_UNK_03cac278 *
                      fVar313;
            fVar314 = (fVar272 * auVar595._12_4_ - auVar564._12_4_ * fVar366) * fVar485 * fVar314;
            fVar273 = (float)CONCAT13((byte)((uint)fVar273 >> 0x18) & bStack_fd,
                                      CONCAT12((byte)((uint)fVar273 >> 0x10) & bStack_fe,
                                               CONCAT11((byte)((uint)fVar273 >> 8) & bStack_ff,
                                                        SUB41(fVar273,0) & local_100)));
            auVar281._0_8_ =
                 CONCAT17((byte)((uint)fVar275 >> 0x18) & bStack_f9,
                          CONCAT16((byte)((uint)fVar275 >> 0x10) & bStack_fa,
                                   CONCAT15((byte)((uint)fVar275 >> 8) & bStack_fb,
                                            CONCAT14(SUB41(fVar275,0) & bStack_fc,fVar273))));
            auVar281[8] = SUB41(fVar312,0) & bVar541;
            auVar281[9] = (byte)((uint)fVar312 >> 8) & bVar544;
            auVar281[10] = (byte)((uint)fVar312 >> 0x10) & bVar545;
            auVar281[0xb] = (byte)((uint)fVar312 >> 0x18) & bVar546;
            auVar297[0xc] = SUB41(fVar368,0) & bStack_f4;
            auVar297._0_12_ = auVar281;
            auVar297[0xd] = (byte)((uint)fVar368 >> 8) & bStack_f3;
            auVar297[0xe] = (byte)((uint)fVar368 >> 0x10) & bStack_f2;
            auVar297[0xf] = (byte)((uint)fVar368 >> 0x18) & bStack_f1;
            local_100 = SUB41(fVar487,0) & local_100;
            bStack_ff = (byte)((uint)fVar487 >> 8) & bStack_ff;
            bStack_fe = (byte)((uint)fVar487 >> 0x10) & bStack_fe;
            bStack_fd = (byte)((uint)fVar487 >> 0x18) & bStack_fd;
            fVar275 = (float)CONCAT13(bStack_fd,CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100)));
            bStack_fc = SUB41(fVar311,0) & bStack_fc;
            bStack_fb = (byte)((uint)fVar311 >> 8) & bStack_fb;
            bStack_fa = (byte)((uint)fVar311 >> 0x10) & bStack_fa;
            bStack_f9 = (byte)((uint)fVar311 >> 0x18) & bStack_f9;
            auVar370._0_8_ =
                 CONCAT17(bStack_f9,
                          CONCAT16(bStack_fa,CONCAT15(bStack_fb,CONCAT14(bStack_fc,fVar275))));
            auVar370[8] = SUB41(fVar313,0) & bVar541;
            auVar370[9] = (byte)((uint)fVar313 >> 8) & bVar544;
            auVar370[10] = (byte)((uint)fVar313 >> 0x10) & bVar545;
            auVar370[0xb] = (byte)((uint)fVar313 >> 0x18) & bVar546;
            bStack_f4 = SUB41(fVar314,0) & bStack_f4;
            bStack_f3 = (byte)((uint)fVar314 >> 8) & bStack_f3;
            bStack_f2 = (byte)((uint)fVar314 >> 0x10) & bStack_f2;
            bStack_f1 = (byte)((uint)fVar314 >> 0x18) & bStack_f1;
            auVar320._0_4_ = -(fVar231 * fVar274 + fVar273 * fVar227 + fVar275 * fVar228);
            auVar320._4_4_ =
                 -((float)((ulong)auVar236._0_8_ >> 0x20) * fVar274 +
                   (float)((ulong)auVar281._0_8_ >> 0x20) * fVar227 +
                  (float)((ulong)auVar370._0_8_ >> 0x20) * fVar228);
            auVar320._8_4_ =
                 -(auVar236._8_4_ * fVar274 + auVar281._8_4_ * fVar227 + auVar370._8_4_ * fVar228);
            bStack_f8 = auVar370[8];
            bStack_f7 = auVar370[9];
            bStack_f6 = auVar370[10];
            bStack_f5 = auVar370[0xb];
          }
          else {
            auVar606 = NEON_ext(auVar671,auVar661,8,1);
            auVar682._4_4_ = fVar490;
            auVar682._0_4_ = fVar490;
            auVar682._8_4_ = fVar490;
            auVar682._12_4_ = fVar490;
            auVar9._4_4_ = fVar527;
            auVar9._0_4_ = fVar527;
            auVar9._8_4_ = auVar597._12_4_;
            auVar9._12_4_ = auVar597._12_4_;
            auVar648 = NEON_ext(auVar9,auVar682,8,1);
            fVar533 = auVar648._0_4_;
            fVar736 = auVar648._4_4_;
            fVar535 = auVar648._8_4_;
            fVar536 = auVar648._12_4_;
            fVar657 = auVar606._0_4_;
            fVar665 = auVar606._4_4_;
            fVar666 = auVar606._8_4_;
            fVar683 = fVar735 * fVar533 - fVar657 * fVar490;
            fVar685 = fVar367 * fVar736 - fVar665 * fVar527;
            fVar686 = fVar367 * fVar535 - fVar666 * fVar527;
            fVar687 = fVar367 * fVar536 - auVar606._12_4_ * fVar527;
            fVar680 = fVar231 * fVar657 - fVar228 * fVar533;
            fVar560 = fVar231 * fVar665 - fVar228 * fVar736;
            fVar562 = fVar231 * fVar666 - fVar228 * fVar535;
            fVar563 = auVar597._12_4_ * auVar606._12_4_ - auVar597._8_4_ * fVar536;
            fVar688 = fVar228 * fVar490 - fVar735 * fVar231;
            fVar689 = fVar228 * fVar527 - fVar367 * fVar231;
            fVar691 = fVar228 * fVar527 - fVar367 * fVar231;
            fVar693 = auVar597._8_4_ * fVar527 - fVar367 * auVar597._12_4_;
            auVar564 = NEON_ext(auVar601,auVar569,8,1);
            auVar606 = NEON_ext(auVar628,auVar610,8,1);
            fVar229 = auVar564._0_4_;
            fVar230 = auVar564._4_4_;
            fVar267 = auVar564._8_4_;
            fVar269 = auVar564._12_4_;
            fVar276 = auVar606._0_4_;
            fVar311 = auVar606._4_4_;
            fVar424 = auVar606._8_4_;
            fVar729 = auVar606._12_4_;
            fVar270 = fVar227 * fVar229 - fVar274 * fVar276;
            fVar531 = fVar227 * fVar230 - fVar274 * fVar311;
            fVar532 = fVar227 * fVar267 - fVar274 * fVar424;
            fVar313 = (fVar529 * fVar680 + fVar688 * fVar276 + fVar683 * fVar227) * _DAT_03cabc00;
            fVar314 = (fVar366 * fVar560 + fVar689 * fVar311 + fVar685 * fVar227) * _UNK_03cabc04;
            fVar530 = (fVar366 * fVar562 + fVar691 * fVar424 + fVar686 * fVar227) * _UNK_03cabc08;
            fVar485 = (fVar366 * fVar563 + fVar693 * fVar729 + fVar687 * auVar597._4_4_) *
                      _UNK_03cabc0c;
            fVar273 = fVar274 * fVar529 - fVar528 * fVar227;
            fVar275 = fVar274 * fVar366 - fVar272 * fVar227;
            fVar227 = fVar274 * fVar366 - fVar272 * fVar227;
            fVar312 = fVar272 * fVar313;
            fVar368 = fVar528 * fVar314;
            fVar696 = auVar597._0_4_ * fVar530;
            fVar487 = fVar274 * fVar485;
            fVar486 = fVar528 * fVar276 - fVar229 * fVar529;
            fVar488 = fVar272 * fVar311 - fVar230 * fVar366;
            fVar489 = fVar272 * fVar424 - fVar267 * fVar366;
            auVar104._0_4_ = fVar312 + fVar368;
            auVar104._4_4_ = fVar696 + fVar487;
            auVar104._8_4_ = fVar312 + fVar368;
            auVar104._12_4_ = fVar696 + fVar487;
            auVar606 = NEON_ext(auVar104,auVar104,4,1);
            auVar105._0_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar105._4_4_ = auVar606._8_4_ + auVar606._12_4_;
            auVar105._8_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar105._12_4_ = auVar606._8_4_ + auVar606._12_4_;
            fVar266 = (float)((ulong)_DAT_03cac210 >> 0x20);
            auVar606 = NEON_frecpe(auVar105,4);
            iVar721 = -(uint)(auVar105._0_4_ == 0.0);
            iVar726 = -(uint)(auVar105._4_4_ == 0.0);
            iVar727 = -(uint)(auVar105._8_4_ == 0.0);
            iVar728 = -(uint)(auVar105._12_4_ == 0.0);
            bVar541 = ~(byte)iVar721;
            bVar544 = ~(byte)((uint)iVar721 >> 8);
            bVar545 = ~(byte)((uint)iVar721 >> 0x10);
            bVar546 = ~(byte)((uint)iVar721 >> 0x18);
            bVar547 = ~(byte)iVar726;
            bVar548 = ~(byte)((uint)iVar726 >> 8);
            bVar549 = ~(byte)((uint)iVar726 >> 0x10);
            bVar550 = ~(byte)((uint)iVar726 >> 0x18);
            bVar551 = ~(byte)iVar727;
            bVar552 = ~(byte)((uint)iVar727 >> 8);
            bVar553 = ~(byte)((uint)iVar727 >> 0x10);
            bVar554 = ~(byte)((uint)iVar727 >> 0x18);
            bVar555 = ~(byte)iVar728;
            bVar556 = ~(byte)((uint)iVar728 >> 8);
            bVar557 = ~(byte)((uint)iVar728 >> 0x10);
            bVar558 = ~(byte)((uint)iVar728 >> 0x18);
            auVar671 = NEON_frecps(auVar606,auVar105,4);
            auVar296._0_4_ = auVar606._0_4_ * auVar671._0_4_;
            auVar296._4_4_ = auVar606._4_4_ * auVar671._4_4_;
            auVar296._8_4_ = auVar606._8_4_ * auVar671._8_4_;
            auVar296._12_4_ = auVar606._12_4_ * auVar671._12_4_;
            auVar606 = NEON_frecps(auVar296,auVar105,4);
            fVar368 = auVar296._0_4_ * auVar606._0_4_;
            fVar487 = auVar296._4_4_ * auVar606._4_4_;
            fVar276 = auVar296._8_4_ * auVar606._8_4_;
            fVar424 = auVar296._12_4_ * auVar606._12_4_;
            fVar312 = (fVar528 * fVar680 + fVar688 * fVar229 + fVar683 * fVar274) *
                      (float)_DAT_03cac210 * fVar368;
            fVar696 = (fVar272 * fVar560 + fVar689 * fVar230 + fVar685 * fVar274) * fVar266 *
                      fVar487;
            fVar274 = (fVar272 * fVar562 + fVar691 * fVar267 + fVar686 * fVar274) *
                      (float)_UNK_03cac218 * fVar276;
            fVar311 = (fVar272 * fVar563 + fVar693 * fVar269 + fVar687 * auVar597._0_4_) *
                      (float)((ulong)_UNK_03cac218 >> 0x20) * fVar424;
            auVar297[0] = SUB41(fVar312,0) & bVar541;
            auVar297[1] = (byte)((uint)fVar312 >> 8) & bVar544;
            auVar297[2] = (byte)((uint)fVar312 >> 0x10) & bVar545;
            auVar297[3] = (byte)((uint)fVar312 >> 0x18) & bVar546;
            auVar297[4] = SUB41(fVar696,0) & bVar547;
            auVar297[5] = (byte)((uint)fVar696 >> 8) & bVar548;
            auVar297[6] = (byte)((uint)fVar696 >> 0x10) & bVar549;
            auVar297[7] = (byte)((uint)fVar696 >> 0x18) & bVar550;
            auVar297[8] = SUB41(fVar274,0) & bVar551;
            auVar297[9] = (byte)((uint)fVar274 >> 8) & bVar552;
            auVar297[10] = (byte)((uint)fVar274 >> 0x10) & bVar553;
            auVar297[0xb] = (byte)((uint)fVar274 >> 0x18) & bVar554;
            auVar297[0xc] = SUB41(fVar311,0) & bVar555;
            auVar297[0xd] = (byte)((uint)fVar311 >> 8) & bVar556;
            auVar297[0xe] = (byte)((uint)fVar311 >> 0x10) & bVar557;
            auVar297[0xf] = (byte)((uint)fVar311 >> 0x18) & bVar558;
            fVar274 = (fVar490 * fVar270 + fVar273 * fVar533 + fVar486 * fVar231) * _DAT_03cabc00 *
                      fVar368;
            fVar312 = (fVar527 * fVar531 + fVar275 * fVar736 + fVar488 * fVar231) * _UNK_03cabc04 *
                      fVar487;
            fVar231 = (fVar527 * fVar532 + fVar227 * fVar535 + fVar489 * fVar231) * _UNK_03cabc08 *
                      fVar276;
            fVar696 = (fVar527 * (auVar597._4_4_ * fVar269 - auVar597._0_4_ * fVar729) +
                       (auVar597._0_4_ * fVar366 - fVar272 * auVar597._4_4_) * fVar536 +
                      (fVar272 * fVar729 - fVar269 * fVar366) * auVar597._12_4_) * _UNK_03cabc0c *
                      fVar424;
            local_100 = SUB41(fVar274,0) & bVar541;
            bStack_ff = (byte)((uint)fVar274 >> 8) & bVar544;
            bStack_fe = (byte)((uint)fVar274 >> 0x10) & bVar545;
            bStack_fd = (byte)((uint)fVar274 >> 0x18) & bVar546;
            bStack_fc = SUB41(fVar312,0) & bVar547;
            bStack_fb = (byte)((uint)fVar312 >> 8) & bVar548;
            bStack_fa = (byte)((uint)fVar312 >> 0x10) & bVar549;
            bStack_f9 = (byte)((uint)fVar312 >> 0x18) & bVar550;
            bStack_f8 = SUB41(fVar231,0) & bVar551;
            bStack_f7 = (byte)((uint)fVar231 >> 8) & bVar552;
            bStack_f6 = (byte)((uint)fVar231 >> 0x10) & bVar553;
            bStack_f5 = (byte)((uint)fVar231 >> 0x18) & bVar554;
            bStack_f4 = SUB41(fVar696,0) & bVar555;
            bStack_f3 = (byte)((uint)fVar696 >> 8) & bVar556;
            bStack_f2 = (byte)((uint)fVar696 >> 0x10) & bVar557;
            bStack_f1 = (byte)((uint)fVar696 >> 0x18) & bVar558;
            fVar313 = fVar313 * fVar368;
            fVar314 = fVar314 * fVar487;
            fVar530 = fVar530 * fVar276;
            fVar485 = fVar485 * fVar424;
            auVar253[0] = SUB41(fVar313,0) & bVar541;
            auVar253[1] = (byte)((uint)fVar313 >> 8) & bVar544;
            auVar253[2] = (byte)((uint)fVar313 >> 0x10) & bVar545;
            auVar253[3] = (byte)((uint)fVar313 >> 0x18) & bVar546;
            auVar253[4] = SUB41(fVar314,0) & bVar547;
            auVar253[5] = (byte)((uint)fVar314 >> 8) & bVar548;
            auVar253[6] = (byte)((uint)fVar314 >> 0x10) & bVar549;
            auVar253[7] = (byte)((uint)fVar314 >> 0x18) & bVar550;
            auVar253[8] = SUB41(fVar530,0) & bVar551;
            auVar253[9] = (byte)((uint)fVar530 >> 8) & bVar552;
            auVar253[10] = (byte)((uint)fVar530 >> 0x10) & bVar553;
            auVar253[0xb] = (byte)((uint)fVar530 >> 0x18) & bVar554;
            auVar253[0xc] = SUB41(fVar485,0) & bVar555;
            auVar253[0xd] = (byte)((uint)fVar485 >> 8) & bVar556;
            auVar253[0xe] = (byte)((uint)fVar485 >> 0x10) & bVar557;
            auVar253[0xf] = (byte)((uint)fVar485 >> 0x18) & bVar558;
            fVar368 = (fVar735 * fVar270 + fVar273 * fVar657 + fVar486 * fVar228) *
                      (float)_DAT_03cac210 * fVar368;
            fVar487 = (fVar367 * fVar531 + fVar275 * fVar665 + fVar488 * fVar228) * fVar266 *
                      fVar487;
            fVar276 = (fVar367 * fVar532 + fVar227 * fVar666 + fVar489 * fVar228) *
                      (float)_UNK_03cac218 * fVar276;
            auVar320[0] = SUB41(fVar368,0) & bVar541;
            auVar320[1] = (byte)((uint)fVar368 >> 8) & bVar544;
            auVar320[2] = (byte)((uint)fVar368 >> 0x10) & bVar545;
            auVar320[3] = (byte)((uint)fVar368 >> 0x18) & bVar546;
            auVar320[4] = SUB41(fVar487,0) & bVar547;
            auVar320[5] = (byte)((uint)fVar487 >> 8) & bVar548;
            auVar320[6] = (byte)((uint)fVar487 >> 0x10) & bVar549;
            auVar320[7] = (byte)((uint)fVar487 >> 0x18) & bVar550;
            auVar320[8] = SUB41(fVar276,0) & bVar551;
            auVar320[9] = (byte)((uint)fVar276 >> 8) & bVar552;
            auVar320[10] = (byte)((uint)fVar276 >> 0x10) & bVar553;
            auVar320[0xb] = (byte)((uint)fVar276 >> 0x18) & bVar554;
          }
          local_f0 = auVar320._0_4_;
          fStack_ec = auVar320._4_4_;
          lVar60 = nn::os::GetCurrentThread();
          do {
            lVar61 = *plVar1;
            lVar63 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar61;
              *(long *)(param_6 + 0x458) = lVar63;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            while ((lVar61 != 0 && (lVar60 != lVar61))) {
              nn::os::WaitLightEvent(pLVar2);
              do {
                lVar61 = *plVar1;
                lVar63 = *(long *)(param_6 + 0x458);
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar61;
                  *(long *)(param_6 + 0x458) = lVar63;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            do {
              lVar4 = *plVar1;
              if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto LAB_00d15284;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar61;
                *(long *)(param_6 + 0x454) = lVar63 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
LAB_00d15284:
            lVar61 = lVar4;
            lVar63 = *(long *)(param_6 + 0x458);
          } while (!bVar57);
          lVar60 = *(long *)(param_6 + 0x248) +
                   (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar62 * 2) * 0x30;
          uVar710 = *(undefined8 *)(lVar60 + 0x20);
          uVar722 = *(undefined8 *)(lVar60 + 0x28);
          do {
            lVar60 = *plVar1;
            lVar61 = *(long *)(param_6 + 0x458);
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x458) = lVar61;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar63 = *plVar1;
            lVar4 = *(long *)(param_6 + 0x458);
            if (lVar63 != lVar60 || lVar4 != lVar61) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto LAB_00d152f0;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar60;
              *(long *)(param_6 + 0x454) = lVar61 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
LAB_00d152f0:
          if (!bVar57) {
            do {
              lVar60 = *plVar1;
              lVar61 = *(long *)(param_6 + 0x458);
              if (lVar60 != lVar63 || lVar61 != lVar4) {
                bVar57 = false;
                ClearExclusiveLocal();
                goto joined_r0x00d16434;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar63;
                *(long *)(param_6 + 0x454) = lVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
joined_r0x00d16434:
            if (!bVar57) {
              do {
                lVar63 = *plVar1;
                lVar4 = *(long *)(param_6 + 0x458);
                if (lVar63 != lVar60 || lVar4 != lVar61) {
                  bVar57 = false;
                  ClearExclusiveLocal();
                  lVar60 = lVar63;
                  lVar61 = lVar4;
                  goto joined_r0x00d16434;
                }
                cVar5 = '\x01';
                bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar57) {
                  *plVar1 = lVar60;
                  *(long *)(param_6 + 0x454) = lVar61 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar57 = true;
              lVar60 = lVar63;
              lVar61 = lVar4;
              goto joined_r0x00d16434;
            }
          }
          nn::os::SignalLightEvent(pLVar2);
          fVar274 = (local_d0 * auVar253._0_4_ + auVar297._0_4_ * fStack_cc +
                     (float)CONCAT13(bStack_fd,CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))) *
                     fStack_c8 + local_f0) - (float)uVar710;
          fVar227 = (local_d0 * auVar253._4_4_ + auVar297._4_4_ * fStack_cc +
                     (float)CONCAT13(bStack_f9,CONCAT12(bStack_fa,CONCAT11(bStack_fb,bStack_fc))) *
                     fStack_c8 + fStack_ec) - (float)((ulong)uVar710 >> 0x20);
          fVar228 = (local_d0 * auVar253._8_4_ + auVar297._8_4_ * fStack_cc +
                     (float)CONCAT13(bStack_f5,CONCAT12(bStack_f6,CONCAT11(bStack_f7,bStack_f8))) *
                     fStack_c8 + auVar320._8_4_) - (float)uVar722;
          fVar231 = (local_d0 * auVar253._12_4_ + auVar297._12_4_ * fStack_cc +
                     (float)CONCAT13(bStack_f1,CONCAT12(bStack_f2,CONCAT11(bStack_f3,bStack_f4))) *
                     fStack_c8 + 0.0) - (float)((ulong)uVar722 >> 0x20);
          auVar106._0_4_ = fVar274 * fVar274 + fVar227 * fVar227;
          auVar106._4_4_ = fVar228 * fVar228 + fVar231 * fVar231;
          auVar106._8_4_ = fVar274 * fVar274 + fVar227 * fVar227;
          auVar106._12_4_ = fVar228 * fVar228 + fVar231 * fVar231;
          auVar606 = NEON_ext(auVar106,auVar106,4,1);
          auVar107._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar107._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar107._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar107._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frsqrte(auVar107,4);
          auVar343._0_4_ = auVar107._0_4_ * auVar606._0_4_;
          auVar343._4_4_ = auVar107._4_4_ * auVar606._4_4_;
          auVar343._8_4_ = auVar107._8_4_ * auVar606._8_4_;
          auVar343._12_4_ = auVar107._12_4_ * auVar606._12_4_;
          auVar564 = NEON_frsqrts(auVar606,auVar343,4);
          auVar298._0_4_ = auVar606._0_4_ * auVar564._0_4_;
          auVar298._4_4_ = auVar606._4_4_ * auVar564._4_4_;
          auVar298._8_4_ = auVar606._8_4_ * auVar564._8_4_;
          auVar298._12_4_ = auVar606._12_4_ * auVar564._12_4_;
          auVar344._0_4_ = auVar107._0_4_ * auVar298._0_4_;
          auVar344._4_4_ = auVar107._4_4_ * auVar298._4_4_;
          auVar344._8_4_ = auVar107._8_4_ * auVar298._8_4_;
          auVar344._12_4_ = auVar107._12_4_ * auVar298._12_4_;
          iVar721 = -(uint)(auVar107._0_4_ == 0.0);
          iVar726 = -(uint)(auVar107._4_4_ == 0.0);
          iVar727 = -(uint)(auVar107._8_4_ == 0.0);
          iVar728 = -(uint)(auVar107._12_4_ == 0.0);
          auVar606 = NEON_frsqrts(auVar298,auVar344,4);
          fVar274 = fVar274 * auVar298._0_4_ * auVar606._0_4_;
          fVar227 = fVar227 * auVar298._4_4_ * auVar606._4_4_;
          fVar228 = fVar228 * auVar298._8_4_ * auVar606._8_4_;
          fVar231 = fVar231 * auVar298._12_4_ * auVar606._12_4_;
          fVar274 = (float)CONCAT13((byte)((uint)fVar274 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                    CONCAT12((byte)((uint)fVar274 >> 0x10) &
                                             ~(byte)((uint)iVar721 >> 0x10),
                                             CONCAT11((byte)((uint)fVar274 >> 8) &
                                                      ~(byte)((uint)iVar721 >> 8),
                                                      SUB41(fVar274,0) & ~(byte)iVar721)));
          auVar155._0_8_ =
               CONCAT17((byte)((uint)fVar227 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                        CONCAT16((byte)((uint)fVar227 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                                 CONCAT15((byte)((uint)fVar227 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                          CONCAT14(SUB41(fVar227,0) & ~(byte)iVar726,fVar274))));
          auVar155[8] = SUB41(fVar228,0) & ~(byte)iVar727;
          auVar155[9] = (byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar727 >> 8);
          auVar155[10] = (byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
          auVar155[0xb] = (byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
          auVar205[0xc] = SUB41(fVar231,0) & ~(byte)iVar728;
          auVar205._0_12_ = auVar155;
          auVar205[0xd] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar728 >> 8);
          auVar205[0xe] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
          auVar205[0xf] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
          fVar227 = (float)((ulong)auVar155._0_8_ >> 0x20);
          fVar228 = auVar155._8_4_;
          fVar231 = auVar205._12_4_;
          auVar108._0_4_ = fVar274 * fVar274 + fVar227 * fVar227;
          auVar108._4_4_ = fVar228 * fVar228 + fVar231 * fVar231;
          auVar108._8_4_ = fVar274 * fVar274 + fVar227 * fVar227;
          auVar108._12_4_ = fVar228 * fVar228 + fVar231 * fVar231;
          auVar606 = NEON_ext(auVar108,auVar108,4,1);
          if (0.0 < auVar606._0_4_ + auVar606._4_4_) {
            auVar51._8_4_ = fVar690;
            auVar51._0_8_ = uVar616;
            auVar51._12_4_ = fVar692;
            uVar616 = a64_TBL(ZEXT816(0),auVar51,uVar492);
            uVar710 = a64_TBL(ZEXT816(0),auVar51,uVar542);
            uVar722 = a64_TBL(ZEXT816(0),param_2,uVar559);
            uVar730 = a64_TBL(ZEXT816(0),param_2,uVar566);
            uVar317 = a64_TBL(ZEXT816(0),auVar51,uVar559);
            uVar369 = a64_TBL(ZEXT816(0),auVar51,uVar566);
            uVar493 = a64_TBL(ZEXT816(0),param_2,uVar492);
            uVar567 = a64_TBL(ZEXT816(0),param_2,uVar542);
            fVar268 = (float)uVar616 * (float)uVar722 - (float)uVar317 * (float)uVar493;
            fVar275 = (float)((ulong)uVar616 >> 0x20) * (float)((ulong)uVar722 >> 0x20) -
                      (float)((ulong)uVar317 >> 0x20) * (float)((ulong)uVar493 >> 0x20);
            fVar312 = (float)uVar710 * (float)uVar730 - (float)uVar369 * (float)uVar567;
            fVar368 = (float)((ulong)uVar710 >> 0x20) * (float)((ulong)uVar730 >> 0x20) -
                      (float)((ulong)uVar369 >> 0x20) * (float)((ulong)uVar567 >> 0x20);
            auVar109._0_4_ = fVar268 * fVar268 + fVar275 * fVar275;
            auVar109._4_4_ = fVar312 * fVar312 + fVar368 * fVar368;
            auVar109._8_4_ = fVar268 * fVar268 + fVar275 * fVar275;
            auVar109._12_4_ = fVar312 * fVar312 + fVar368 * fVar368;
            auVar606 = NEON_ext(auVar109,auVar109,4,1);
            auVar110._0_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar110._4_4_ = auVar606._8_4_ + auVar606._12_4_;
            auVar110._8_4_ = auVar606._0_4_ + auVar606._4_4_;
            auVar110._12_4_ = auVar606._8_4_ + auVar606._12_4_;
            auVar606 = NEON_frsqrte(auVar110,4);
            auVar383._0_4_ = auVar110._0_4_ * auVar606._0_4_;
            auVar383._4_4_ = auVar110._4_4_ * auVar606._4_4_;
            auVar383._8_4_ = auVar110._8_4_ * auVar606._8_4_;
            auVar383._12_4_ = auVar110._12_4_ * auVar606._12_4_;
            auVar564 = NEON_frsqrts(auVar606,auVar383,4);
            auVar345._0_4_ = auVar606._0_4_ * auVar564._0_4_;
            auVar345._4_4_ = auVar606._4_4_ * auVar564._4_4_;
            auVar345._8_4_ = auVar606._8_4_ * auVar564._8_4_;
            auVar345._12_4_ = auVar606._12_4_ * auVar564._12_4_;
            auVar384._0_4_ = auVar110._0_4_ * auVar345._0_4_;
            auVar384._4_4_ = auVar110._4_4_ * auVar345._4_4_;
            auVar384._8_4_ = auVar110._8_4_ * auVar345._8_4_;
            auVar384._12_4_ = auVar110._12_4_ * auVar345._12_4_;
            iVar721 = -(uint)(auVar110._0_4_ == 0.0);
            iVar726 = -(uint)(auVar110._4_4_ == 0.0);
            iVar727 = -(uint)(auVar110._8_4_ == 0.0);
            iVar728 = -(uint)(auVar110._12_4_ == 0.0);
            auVar606 = NEON_frsqrts(auVar345,auVar384,4);
            fVar268 = fVar268 * auVar345._0_4_ * auVar606._0_4_;
            fVar275 = fVar275 * auVar345._4_4_ * auVar606._4_4_;
            fVar312 = fVar312 * auVar345._8_4_ * auVar606._8_4_;
            fVar368 = fVar368 * auVar345._12_4_ * auVar606._12_4_;
            fVar273 = (float)CONCAT13((byte)((uint)fVar268 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18)
                                      ,CONCAT12((byte)((uint)fVar268 >> 0x10) &
                                                ~(byte)((uint)iVar721 >> 0x10),
                                                CONCAT11((byte)((uint)fVar268 >> 8) &
                                                         ~(byte)((uint)iVar721 >> 8),
                                                         SUB41(fVar268,0) & ~(byte)iVar721)));
            auVar280._0_8_ =
                 CONCAT17((byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                          CONCAT16((byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                                   CONCAT15((byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar726 >> 8)
                                            ,CONCAT14(SUB41(fVar275,0) & ~(byte)iVar726,fVar273))));
            auVar280[8] = SUB41(fVar312,0) & ~(byte)iVar727;
            auVar280[9] = (byte)((uint)fVar312 >> 8) & ~(byte)((uint)iVar727 >> 8);
            auVar280[10] = (byte)((uint)fVar312 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
            auVar280[0xb] = (byte)((uint)fVar312 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
            auVar299[0xc] = SUB41(fVar368,0) & ~(byte)iVar728;
            auVar299._0_12_ = auVar280;
            auVar299[0xd] = (byte)((uint)fVar368 >> 8) & ~(byte)((uint)iVar728 >> 8);
            auVar299[0xe] = (byte)((uint)fVar368 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
            auVar299[0xf] = (byte)((uint)fVar368 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
            fVar275 = (float)((ulong)auVar280._0_8_ >> 0x20);
            fVar312 = auVar280._8_4_;
            fVar368 = auVar299._12_4_;
            auVar111._0_4_ = fVar274 * fVar271 + fVar227 * fVar310;
            auVar111._4_4_ = fVar228 * fVar690 + fVar231 * fVar692;
            auVar111._8_4_ = fVar274 * fVar271 + fVar227 * fVar310;
            auVar111._12_4_ = fVar228 * fVar690 + fVar231 * fVar692;
            auVar112._0_4_ = fVar274 * fVar273 + fVar227 * fVar275;
            auVar112._4_4_ = fVar228 * fVar312 + fVar231 * fVar368;
            auVar112._8_4_ = fVar274 * fVar273 + fVar227 * fVar275;
            auVar112._12_4_ = fVar228 * fVar312 + fVar231 * fVar368;
            auVar564 = NEON_ext(auVar111,auVar111,4,1);
            auVar606 = NEON_ext(auVar112,auVar112,4,1);
            fVar274 = (auVar564._0_4_ + auVar564._4_4_) * fVar271 +
                      fVar273 * (auVar606._0_4_ + auVar606._4_4_);
            fVar228 = (auVar564._8_4_ + auVar564._12_4_) * fVar310 +
                      fVar275 * (auVar606._8_4_ + auVar606._12_4_);
            fVar231 = (auVar564._0_4_ + auVar564._4_4_) * fVar690 +
                      fVar312 * (auVar606._0_4_ + auVar606._4_4_);
            fVar268 = (auVar564._8_4_ + auVar564._12_4_) * fVar692 +
                      fVar368 * (auVar606._8_4_ + auVar606._12_4_);
            fVar271 = fVar274 * fVar271;
            fVar310 = fVar228 * fVar310;
            fVar690 = fVar231 * fVar690;
            fVar692 = fVar268 * fVar692;
            auVar113._0_4_ = fVar271 + fVar310;
            auVar113._4_4_ = fVar690 + fVar692;
            auVar113._8_4_ = fVar271 + fVar310;
            auVar113._12_4_ = fVar690 + fVar692;
            auVar606 = NEON_ext(auVar113,auVar113,4,1);
            fVar227 = acosf(auVar606._0_4_ + auVar606._4_4_);
            fVar273 = fVar273 * fVar274;
            fVar275 = fVar275 * fVar228;
            fVar312 = fVar312 * fVar231;
            fVar368 = fVar368 * fVar268;
            auVar114._0_4_ = fVar273 + fVar275;
            auVar114._4_4_ = fVar312 + fVar368;
            auVar114._8_4_ = fVar273 + fVar275;
            auVar114._12_4_ = fVar312 + fVar368;
            auVar606 = NEON_ext(auVar114,auVar114,4,1);
            fVar268 = -fVar227;
            if (0.0 <= auVar606._0_4_ + auVar606._4_4_) {
              fVar268 = fVar227;
            }
          }
          bVar541 = 1;
        }
        else {
          bVar541 = 0;
        }
        if (uVar316 <= uVar491 + 1) break;
      }
      if (*param_11 == '\0') {
        bVar57 = false;
      }
      else {
        fVar227 = *(float *)(param_11 + 4);
        fVar274 = -*(float *)(param_11 + 8);
        bVar57 = fVar268 < fVar274;
        if (!bVar57) {
          fVar274 = fVar268;
        }
        fVar268 = fVar227;
        if (fVar274 <= fVar227) {
          fVar268 = fVar274;
        }
        bVar57 = bVar57 || fVar227 < fVar274;
      }
      fVar227 = fVar268 * -0.5;
      fVar274 = cosf(fVar227);
      fVar227 = sinf(fVar227);
      auVar254._0_4_ = local_160 * fVar227;
      auVar254._4_4_ = fStack_15c * fVar227;
      auVar254._8_4_ = fStack_158 * fVar227;
      auVar254._12_4_ = fVar274;
      FUN_00d172e8(auVar254,param_6,param_8);
      if ((bool)(bVar541 | bVar57)) {
        pfVar59 = (float *)FUN_00c4c40c(param_6,param_7);
        fVar274 = *(float *)(param_6 + 0x3e0);
        fVar227 = *(float *)(param_6 + 0x3e4);
        fVar228 = *(float *)(param_6 + 1000);
        fVar231 = *(float *)(param_6 + 0x3ec);
        auVar606 = *(undefined1 (*) [16])(param_6 + 0x3f0);
        auVar564 = *(undefined1 (*) [16])(param_6 + 0x400);
        auVar595 = *(undefined1 (*) [16])(param_6 + 0x410);
        fVar271 = *pfVar59;
        fVar273 = pfVar59[1];
        fVar275 = pfVar59[2];
        fVar310 = pfVar59[3];
        auVar330 = *(undefined1 (*) [16])(pfVar59 + 4);
        fVar312 = auVar606._0_4_;
        fVar368 = auVar606._4_4_;
        fVar690 = auVar606._8_4_;
        fVar487 = auVar606._12_4_;
        fVar696 = auVar564._0_4_;
        fVar692 = auVar564._4_4_;
        fVar276 = auVar564._8_4_;
        fVar311 = auVar564._12_4_;
        fVar313 = auVar595._0_4_;
        fVar314 = auVar595._4_4_;
        fVar530 = auVar595._8_4_;
        fVar485 = auVar595._12_4_;
        fVar424 = fVar274 * fVar271 + fVar312 * fVar273 + fVar696 * fVar275 + fVar313 * fVar310;
        fVar488 = fVar227 * fVar271 + fVar368 * fVar273 + fVar692 * fVar275 + fVar314 * fVar310;
        fVar490 = fVar228 * fVar271 + fVar690 * fVar273 + fVar276 * fVar275 + fVar530 * fVar310;
        fVar229 = fVar231 * fVar271 + fVar487 * fVar273 + fVar311 * fVar275 + fVar485 * fVar310;
        fVar271 = auVar330._0_4_;
        fVar273 = auVar330._4_4_;
        fVar275 = auVar330._8_4_;
        fVar310 = auVar330._12_4_;
        fVar230 = fVar274 * fVar271 + fVar312 * fVar273 + fVar696 * fVar275 + fVar313 * fVar310;
        fVar266 = fVar227 * fVar271 + fVar368 * fVar273 + fVar692 * fVar275 + fVar314 * fVar310;
        fVar267 = fVar228 * fVar271 + fVar690 * fVar273 + fVar276 * fVar275 + fVar530 * fVar310;
        fVar269 = fVar231 * fVar271 + fVar487 * fVar273 + fVar311 * fVar275 + fVar485 * fVar310;
        auVar606 = *(undefined1 (*) [16])(pfVar59 + 8);
        auVar564 = *(undefined1 (*) [16])(pfVar59 + 0xc);
        fVar271 = auVar606._0_4_;
        fVar486 = auVar564._0_4_;
        fVar273 = auVar606._4_4_;
        fVar489 = auVar564._4_4_;
        fVar275 = auVar606._8_4_;
        fVar729 = auVar564._8_4_;
        fVar310 = auVar606._12_4_;
        auVar507._0_4_ =
             fVar274 * fVar271 + fVar312 * fVar273 + fVar696 * fVar275 + fVar313 * fVar310;
        auVar507._4_4_ =
             fVar227 * fVar271 + fVar368 * fVar273 + fVar692 * fVar275 + fVar314 * fVar310;
        auVar507._8_4_ =
             fVar228 * fVar271 + fVar690 * fVar273 + fVar276 * fVar275 + fVar530 * fVar310;
        auVar507._12_4_ =
             fVar231 * fVar271 + fVar487 * fVar273 + fVar311 * fVar275 + fVar485 * fVar310;
        fVar271 = auVar564._12_4_;
        fVar310 = fVar274 * fVar486 + fVar312 * fVar489 + fVar696 * fVar729 + fVar313 * fVar271;
        fVar368 = fVar227 * fVar486 + fVar368 * fVar489 + fVar692 * fVar729 + fVar314 * fVar271;
        fVar696 = fVar228 * fVar486 + fVar690 * fVar489 + fVar276 * fVar729 + fVar530 * fVar271;
        fVar487 = fVar231 * fVar486 + fVar487 * fVar489 + fVar311 * fVar729 + fVar485 * fVar271;
        bStack_f8 = SUB41(fVar267,0);
        bStack_f7 = (byte)((uint)fVar267 >> 8);
        bStack_f6 = (byte)((uint)fVar267 >> 0x10);
        bStack_f5 = (byte)((uint)fVar267 >> 0x18);
        bStack_f4 = SUB41(fVar269,0);
        bStack_f3 = (byte)((uint)fVar269 >> 8);
        bStack_f2 = (byte)((uint)fVar269 >> 0x10);
        bStack_f1 = (byte)((uint)fVar269 >> 0x18);
        bStack_fc = SUB41(fVar266,0);
        bStack_fb = (byte)((uint)fVar266 >> 8);
        bStack_fa = (byte)((uint)fVar266 >> 0x10);
        bStack_f9 = (byte)((uint)fVar266 >> 0x18);
        auVar595 = auVar507;
        lVar60 = FUN_00c4c40c(param_6,param_9);
        uVar616 = CONCAT17(bStack_f9,
                           CONCAT16(bStack_fa,CONCAT15(bStack_fb,CONCAT14(bStack_fc,fVar230))));
        auVar44[8] = bStack_f8;
        auVar44._0_8_ = uVar616;
        auVar44[9] = bStack_f7;
        auVar44[10] = bStack_f6;
        auVar44[0xb] = bStack_f5;
        auVar43[0xc] = bStack_f4;
        auVar43._0_12_ = auVar44;
        auVar43[0xd] = bStack_f3;
        auVar43[0xe] = bStack_f2;
        auVar43[0xf] = bStack_f1;
        auVar452._4_12_ = auVar564._4_12_;
        auVar452._0_4_ = fVar230;
        fVar271 = (float)((ulong)uVar616 >> 0x20);
        auVar454._12_4_ = auVar564._12_4_;
        auVar454._0_8_ = auVar452._0_8_;
        auVar454._8_4_ = fVar271;
        auVar453._8_8_ = auVar454._8_8_;
        auVar453._4_4_ = fVar310;
        auVar453._0_4_ = fVar230;
        auVar455._0_12_ = auVar453._0_12_;
        auVar455._12_4_ = fVar368;
        fVar274 = *(float *)(lVar60 + 0x30);
        fVar227 = *(float *)(lVar60 + 0x34);
        fVar228 = *(float *)(lVar60 + 0x38);
        fVar231 = *(float *)(lVar60 + 0x3c);
        auVar346._4_12_ = auVar606._4_12_;
        auVar346._0_4_ = fVar424;
        auVar348._12_4_ = auVar606._12_4_;
        auVar348._0_8_ = auVar346._0_8_;
        auVar348._8_4_ = fVar488;
        auVar347._8_8_ = auVar348._8_8_;
        auVar347._4_4_ = auVar507._0_4_;
        auVar347._0_4_ = fVar424;
        auVar349._0_12_ = auVar347._0_12_;
        auVar349._12_4_ = auVar507._4_4_;
        fVar273 = auVar44._8_4_;
        auVar508._4_12_ = auVar595._4_12_;
        auVar508._0_4_ = fVar273;
        fVar275 = auVar43._12_4_;
        auVar510._12_4_ = auVar595._12_4_;
        auVar510._0_8_ = auVar508._0_8_;
        auVar510._8_4_ = fVar275;
        auVar509._8_8_ = auVar510._8_8_;
        auVar509._4_4_ = fVar696;
        auVar509._0_4_ = fVar273;
        uVar149 = (undefined4)
                  (CONCAT17((char)((uint)fVar487 >> 0x18),
                            CONCAT16((char)((uint)fVar487 >> 0x10),
                                     CONCAT15((char)((uint)fVar487 >> 8),
                                              CONCAT14(SUB41(fVar487,0),fVar696)))) >> 0x20);
        auVar511._0_12_ = auVar509._0_12_;
        auVar511._12_4_ = uVar149;
        auVar350._4_12_ = auVar349._4_12_;
        auVar350._0_4_ = fVar488;
        auVar352._0_8_ = auVar350._0_8_;
        auVar352._8_4_ = auVar507._4_4_;
        auVar352._12_4_ = auVar507._4_4_;
        auVar351._8_8_ = auVar352._8_8_;
        auVar351._4_4_ = fVar271;
        auVar351._0_4_ = fVar488;
        auVar353._0_12_ = auVar351._0_12_;
        auVar353._12_4_ = fVar368;
        auVar456._4_12_ = auVar455._4_12_;
        auVar456._0_4_ = fVar490;
        auVar458._0_8_ = auVar456._0_8_;
        auVar458._8_4_ = auVar507._8_4_;
        auVar458._12_4_ = fVar368;
        auVar457._8_8_ = auVar458._8_8_;
        auVar457._4_4_ = fVar273;
        auVar457._0_4_ = fVar490;
        auVar459._0_12_ = auVar457._0_12_;
        auVar459._12_4_ = fVar696;
        auVar512._4_12_ = auVar511._4_12_;
        auVar512._0_4_ = fVar229;
        auVar514._0_8_ = auVar512._0_8_;
        auVar514._8_4_ = auVar507._12_4_;
        auVar514._12_4_ = uVar149;
        auVar513._8_8_ = auVar514._8_8_;
        auVar513._4_4_ = fVar275;
        auVar513._0_4_ = fVar229;
        auVar515._0_12_ = auVar513._0_12_;
        auVar515._12_4_ = uVar149;
        fVar312 = *(float *)(param_6 + 0x3e0) * fVar274 + *(float *)(param_6 + 0x3f0) * fVar227 +
                  *(float *)(param_6 + 0x400) * fVar228 + *(float *)(param_6 + 0x410) * fVar231;
        fVar690 = *(float *)(param_6 + 0x3e4) * fVar274 + *(float *)(param_6 + 0x3f4) * fVar227 +
                  *(float *)(param_6 + 0x404) * fVar228 + *(float *)(param_6 + 0x414) * fVar231;
        fVar274 = *(float *)(param_6 + 1000) * fVar274 + *(float *)(param_6 + 0x3f8) * fVar227 +
                  *(float *)(param_6 + 0x408) * fVar228 + *(float *)(param_6 + 0x418) * fVar231;
        auVar516._4_12_ = auVar515._4_12_;
        if ((fVar487 == 1.0) &&
           (auVar115._0_4_ = fVar229 * fVar229 + fVar275 * fVar275,
           auVar115._4_4_ = auVar507._12_4_ * auVar507._12_4_ + 0.0,
           auVar115._8_4_ = fVar229 * fVar229 + fVar275 * fVar275,
           auVar115._12_4_ = auVar507._12_4_ * auVar507._12_4_ + 0.0,
           auVar606 = NEON_ext(auVar115,auVar115,4,1), auVar606._0_4_ + auVar606._4_4_ == 0.0)) {
          auVar526._4_4_ = fVar230;
          auVar526._0_4_ = fVar230;
          auVar526._8_4_ = fVar230;
          auVar526._12_4_ = fVar230;
          auVar578._4_12_ = auVar43._4_12_;
          auVar578._0_4_ = fVar424;
          auVar580._0_8_ = auVar578._0_8_;
          auVar580._8_4_ = auVar507._0_4_;
          auVar580._12_4_ = fVar275;
          auVar579._8_8_ = auVar580._8_8_;
          auVar579._4_4_ = fVar424;
          auVar579._0_4_ = fVar424;
          auVar581._0_12_ = auVar579._0_12_;
          auVar581._12_4_ = auVar507._0_4_;
          auVar638 = NEON_ext(auVar581,auVar526,8,1);
          auVar582._4_4_ = fVar271;
          auVar582._0_4_ = fVar271;
          auVar582._8_4_ = fVar271;
          auVar582._12_4_ = fVar271;
          auVar362._4_12_ = auVar353._4_12_;
          auVar362._0_4_ = fVar488;
          auVar364._0_8_ = auVar362._0_8_;
          auVar364._8_4_ = auVar507._4_4_;
          auVar364._12_4_ = fVar368;
          auVar363._8_8_ = auVar364._8_8_;
          auVar363._4_4_ = fVar488;
          auVar363._0_4_ = fVar488;
          auVar365._0_12_ = auVar363._0_12_;
          auVar365._12_4_ = auVar507._4_4_;
          auVar564 = NEON_ext(auVar365,auVar582,8,1);
          auVar583._4_4_ = fVar273;
          auVar583._0_4_ = fVar273;
          auVar583._8_4_ = fVar273;
          auVar583._12_4_ = fVar273;
          auVar481._4_12_ = auVar459._4_12_;
          auVar481._0_4_ = fVar490;
          auVar483._0_8_ = auVar481._0_8_;
          auVar483._8_4_ = auVar507._8_4_;
          auVar483._12_4_ = fVar696;
          auVar482._8_8_ = auVar483._8_8_;
          auVar482._4_4_ = fVar490;
          auVar482._0_4_ = fVar490;
          auVar484._0_12_ = auVar482._0_12_;
          auVar484._12_4_ = auVar507._8_4_;
          auVar595 = NEON_ext(auVar484,auVar583,8,1);
          fVar228 = (fVar271 * auVar595._0_4_ - auVar564._0_4_ * fVar273) * (float)_DAT_03cac270;
          fVar314 = (float)((ulong)_DAT_03cac270 >> 0x20);
          fVar275 = (fVar488 * auVar595._4_4_ - auVar564._4_4_ * fVar490) * fVar314;
          fVar692 = (fVar488 * auVar595._8_4_ - auVar564._8_4_ * fVar490) * (float)_UNK_03cac278;
          fVar530 = (float)((ulong)_UNK_03cac278 >> 0x20);
          fVar311 = (fVar488 * auVar595._12_4_ - auVar564._12_4_ * fVar490) * fVar530;
          fVar227 = fVar424 * fVar228;
          fVar231 = fVar230 * fVar275;
          fVar487 = auVar507._0_4_ * fVar692;
          fVar276 = fVar311 * 0.0;
          auVar139._0_4_ = fVar227 + fVar231;
          auVar139._4_4_ = fVar487 + fVar276;
          auVar139._8_4_ = fVar227 + fVar231;
          auVar139._12_4_ = fVar487 + fVar276;
          auVar606 = NEON_ext(auVar139,auVar139,4,1);
          auVar140._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar140._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar140._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar140._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frecpe(auVar140,4);
          iVar721 = -(uint)(auVar140._0_4_ == 0.0);
          iVar726 = -(uint)(auVar140._4_4_ == 0.0);
          iVar727 = -(uint)(auVar140._8_4_ == 0.0);
          iVar728 = -(uint)(auVar140._12_4_ == 0.0);
          bVar541 = ~(byte)iVar721;
          bVar544 = ~(byte)((uint)iVar721 >> 8);
          bVar545 = ~(byte)((uint)iVar721 >> 0x10);
          bVar546 = ~(byte)((uint)iVar721 >> 0x18);
          bVar547 = ~(byte)iVar726;
          bVar548 = ~(byte)((uint)iVar726 >> 8);
          bVar549 = ~(byte)((uint)iVar726 >> 0x10);
          bVar550 = ~(byte)((uint)iVar726 >> 0x18);
          bVar551 = ~(byte)iVar727;
          bVar552 = ~(byte)((uint)iVar727 >> 8);
          bVar553 = ~(byte)((uint)iVar727 >> 0x10);
          bVar554 = ~(byte)((uint)iVar727 >> 0x18);
          bVar555 = ~(byte)iVar728;
          bVar556 = ~(byte)((uint)iVar728 >> 8);
          bVar557 = ~(byte)((uint)iVar728 >> 0x10);
          bVar558 = ~(byte)((uint)iVar728 >> 0x18);
          auVar330 = NEON_frecps(auVar606,auVar140,4);
          auVar394._0_4_ = auVar606._0_4_ * auVar330._0_4_;
          auVar394._4_4_ = auVar606._4_4_ * auVar330._4_4_;
          auVar394._8_4_ = auVar606._8_4_ * auVar330._8_4_;
          auVar394._12_4_ = auVar606._12_4_ * auVar330._12_4_;
          auVar606 = NEON_frecps(auVar394,auVar140,4);
          fVar231 = auVar394._0_4_ * auVar606._0_4_;
          fVar487 = auVar394._4_4_ * auVar606._4_4_;
          fVar276 = auVar394._8_4_ * auVar606._8_4_;
          fVar313 = auVar394._12_4_ * auVar606._12_4_;
          fVar228 = fVar228 * fVar231;
          fVar275 = fVar275 * fVar487;
          fVar692 = fVar692 * fVar276;
          fVar311 = fVar311 * fVar313;
          fVar227 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                                    CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                             CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                                      SUB41(fVar228,0) & bVar541)));
          auVar237._0_8_ =
               CONCAT17((byte)((uint)fVar275 >> 0x18) & bVar550,
                        CONCAT16((byte)((uint)fVar275 >> 0x10) & bVar549,
                                 CONCAT15((byte)((uint)fVar275 >> 8) & bVar548,
                                          CONCAT14(SUB41(fVar275,0) & bVar547,fVar227))));
          auVar237[8] = SUB41(fVar692,0) & bVar551;
          auVar237[9] = (byte)((uint)fVar692 >> 8) & bVar552;
          auVar237[10] = (byte)((uint)fVar692 >> 0x10) & bVar553;
          auVar237[0xb] = (byte)((uint)fVar692 >> 0x18) & bVar554;
          auVar255[0xc] = SUB41(fVar311,0) & bVar555;
          auVar255._0_12_ = auVar237;
          auVar255[0xd] = (byte)((uint)fVar311 >> 8) & bVar556;
          auVar255[0xe] = (byte)((uint)fVar311 >> 0x10) & bVar557;
          auVar255[0xf] = (byte)((uint)fVar311 >> 0x18) & bVar558;
          fVar228 = (fVar230 * auVar595._0_4_ - auVar638._0_4_ * fVar273) * (float)_DAT_03cab860 *
                    fVar231;
          fVar273 = (fVar424 * auVar595._4_4_ - auVar638._4_4_ * fVar490) *
                    (float)((ulong)_DAT_03cab860 >> 0x20) * fVar487;
          fVar275 = (fVar424 * auVar595._8_4_ - auVar638._8_4_ * fVar490) * (float)_UNK_03cab868 *
                    fVar276;
          fVar692 = (fVar424 * auVar595._12_4_ - auVar638._12_4_ * fVar490) *
                    (float)((ulong)_UNK_03cab868 >> 0x20) * fVar313;
          fVar231 = (fVar230 * auVar564._0_4_ - auVar638._0_4_ * fVar271) * (float)_DAT_03cac270 *
                    fVar231;
          fVar487 = (fVar424 * auVar564._4_4_ - auVar638._4_4_ * fVar488) * fVar314 * fVar487;
          fVar276 = (fVar424 * auVar564._8_4_ - auVar638._8_4_ * fVar488) * (float)_UNK_03cac278 *
                    fVar276;
          fVar313 = (fVar424 * auVar564._12_4_ - auVar638._12_4_ * fVar488) * fVar530 * fVar313;
          fVar228 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                                    CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                             CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                                      SUB41(fVar228,0) & bVar541)));
          auVar282._0_8_ =
               CONCAT17((byte)((uint)fVar273 >> 0x18) & bVar550,
                        CONCAT16((byte)((uint)fVar273 >> 0x10) & bVar549,
                                 CONCAT15((byte)((uint)fVar273 >> 8) & bVar548,
                                          CONCAT14(SUB41(fVar273,0) & bVar547,fVar228))));
          auVar282[8] = SUB41(fVar275,0) & bVar551;
          auVar282[9] = (byte)((uint)fVar275 >> 8) & bVar552;
          auVar282[10] = (byte)((uint)fVar275 >> 0x10) & bVar553;
          auVar282[0xb] = (byte)((uint)fVar275 >> 0x18) & bVar554;
          auVar300[0xc] = SUB41(fVar692,0) & bVar555;
          auVar300._0_12_ = auVar282;
          auVar300[0xd] = (byte)((uint)fVar692 >> 8) & bVar556;
          auVar300[0xe] = (byte)((uint)fVar692 >> 0x10) & bVar557;
          auVar300[0xf] = (byte)((uint)fVar692 >> 0x18) & bVar558;
          fVar231 = (float)CONCAT13((byte)((uint)fVar231 >> 0x18) & bVar546,
                                    CONCAT12((byte)((uint)fVar231 >> 0x10) & bVar545,
                                             CONCAT11((byte)((uint)fVar231 >> 8) & bVar544,
                                                      SUB41(fVar231,0) & bVar541)));
          auVar321._0_8_ =
               CONCAT17((byte)((uint)fVar487 >> 0x18) & bVar550,
                        CONCAT16((byte)((uint)fVar487 >> 0x10) & bVar549,
                                 CONCAT15((byte)((uint)fVar487 >> 8) & bVar548,
                                          CONCAT14(SUB41(fVar487,0) & bVar547,fVar231))));
          auVar321[8] = SUB41(fVar276,0) & bVar551;
          auVar321[9] = (byte)((uint)fVar276 >> 8) & bVar552;
          auVar321[10] = (byte)((uint)fVar276 >> 0x10) & bVar553;
          auVar321[0xb] = (byte)((uint)fVar276 >> 0x18) & bVar554;
          auVar354[0xc] = SUB41(fVar313,0) & bVar555;
          auVar354._0_12_ = auVar321;
          auVar354[0xd] = (byte)((uint)fVar313 >> 8) & bVar556;
          auVar354[0xe] = (byte)((uint)fVar313 >> 0x10) & bVar557;
          auVar354[0xf] = (byte)((uint)fVar313 >> 0x18) & bVar558;
          auVar371._0_4_ = -(fVar227 * fVar310 + fVar228 * fVar368 + fVar231 * fVar696);
          auVar371._4_4_ =
               -((float)((ulong)auVar237._0_8_ >> 0x20) * fVar310 +
                 (float)((ulong)auVar282._0_8_ >> 0x20) * fVar368 +
                (float)((ulong)auVar321._0_8_ >> 0x20) * fVar696);
          auVar371._8_4_ =
               -(auVar237._8_4_ * fVar310 + auVar282._8_4_ * fVar368 + auVar321._8_4_ * fVar696);
        }
        else {
          auVar662._4_4_ = fVar273;
          auVar662._0_4_ = fVar273;
          auVar662._8_4_ = fVar273;
          auVar662._12_4_ = fVar273;
          auVar672._4_12_ = auVar671._4_12_;
          auVar672._0_4_ = fVar490;
          auVar674._12_4_ = auVar671._12_4_;
          auVar674._0_8_ = auVar672._0_8_;
          auVar674._8_4_ = auVar507._8_4_;
          auVar673._8_8_ = auVar674._8_8_;
          auVar673._4_4_ = fVar490;
          auVar673._0_4_ = fVar490;
          auVar675._0_12_ = auVar673._0_12_;
          auVar675._12_4_ = auVar507._8_4_;
          auVar564 = NEON_ext(auVar675,auVar662,8,1);
          auVar684._4_4_ = fVar275;
          auVar684._0_4_ = fVar275;
          auVar684._8_4_ = fVar275;
          auVar684._12_4_ = fVar275;
          auVar516._0_4_ = fVar229;
          auVar518._0_8_ = auVar516._0_8_;
          auVar518._8_4_ = auVar507._12_4_;
          auVar518._12_4_ = uVar149;
          auVar517._8_8_ = auVar518._8_8_;
          auVar517._4_4_ = fVar229;
          auVar517._0_4_ = fVar229;
          auVar519._0_12_ = auVar517._0_12_;
          auVar519._12_4_ = auVar507._12_4_;
          auVar595 = NEON_ext(auVar519,auVar684,8,1);
          auVar649._4_4_ = fVar271;
          auVar649._0_4_ = fVar271;
          auVar649._8_4_ = fVar271;
          auVar649._12_4_ = fVar271;
          auVar10._4_4_ = fVar488;
          auVar10._0_4_ = fVar488;
          auVar10._8_4_ = auVar507._4_4_;
          auVar10._12_4_ = auVar507._4_4_;
          auVar606 = NEON_ext(auVar10,auVar649,8,1);
          auVar648._4_4_ = fVar310;
          auVar648._0_4_ = fVar310;
          auVar648._8_4_ = fVar310;
          fVar366 = auVar564._0_4_;
          fVar367 = auVar564._4_4_;
          fVar527 = auVar564._8_4_;
          auVar629._4_4_ = fVar230;
          auVar629._0_4_ = fVar230;
          auVar629._8_4_ = fVar230;
          auVar629._12_4_ = fVar230;
          auVar648._12_4_ = auVar507._0_4_;
          uVar697 = (undefined1)((uint)auVar507._0_4_ >> 8);
          uVar698 = (undefined1)((uint)auVar507._0_4_ >> 0x10);
          uVar699 = (undefined1)((uint)auVar507._0_4_ >> 0x18);
          auVar19[4] = SUB41(fVar424,0);
          auVar19._0_4_ = fVar424;
          auVar19[5] = (char)((uint)fVar424 >> 8);
          auVar19[6] = (char)((uint)fVar424 >> 0x10);
          auVar19[7] = (char)((uint)fVar424 >> 0x18);
          auVar19[8] = SUB41(auVar507._0_4_,0);
          auVar19[9] = uVar697;
          auVar19[10] = uVar698;
          auVar19[0xb] = uVar699;
          auVar19[0xc] = SUB41(auVar507._0_4_,0);
          auVar19[0xd] = uVar697;
          auVar19[0xe] = uVar698;
          auVar19[0xf] = uVar699;
          auVar330 = NEON_ext(auVar19,auVar629,8,1);
          auVar671._0_4_ = fVar696 * fVar275 - fVar273 * fVar487;
          auVar671._4_4_ = fVar696 * fVar229 - fVar490 * fVar487;
          auVar671._8_4_ = fVar696 * fVar229 - fVar490 * fVar487;
          auVar671._12_4_ = auVar507._8_4_ * fVar229 - fVar490 * auVar507._12_4_;
          fVar528 = auVar595._0_4_;
          fVar529 = auVar595._4_4_;
          fVar735 = auVar595._8_4_;
          fVar531 = auVar595._12_4_;
          fVar657 = fVar487 * fVar366 - fVar696 * fVar528;
          fVar665 = fVar487 * fVar367 - fVar696 * fVar529;
          fVar666 = fVar487 * fVar527 - fVar696 * fVar735;
          fVar680 = auVar507._12_4_ * auVar564._12_4_ - auVar507._8_4_ * fVar531;
          fVar560 = fVar273 * fVar528 - fVar366 * fVar275;
          fVar562 = fVar490 * fVar529 - fVar367 * fVar229;
          fVar563 = fVar490 * fVar735 - fVar527 * fVar229;
          fVar683 = fVar490 * fVar531 - auVar564._12_4_ * fVar229;
          fVar533 = auVar330._0_4_;
          fVar736 = auVar330._4_4_;
          fVar535 = auVar330._8_4_;
          fVar536 = auVar330._12_4_;
          fVar313 = auVar606._0_4_;
          fVar314 = auVar606._4_4_;
          fVar530 = auVar606._8_4_;
          fVar269 = auVar606._12_4_;
          fVar227 = fVar368 * fVar533 - fVar310 * fVar313;
          fVar228 = fVar368 * fVar736 - fVar310 * fVar314;
          fVar231 = fVar368 * fVar535 - fVar310 * fVar530;
          fVar692 = fVar310 * fVar271 - fVar230 * fVar368;
          fVar276 = fVar310 * fVar488 - fVar424 * fVar368;
          fVar311 = fVar310 * fVar488 - fVar424 * fVar368;
          fVar729 = fVar230 * fVar313 - fVar533 * fVar271;
          fVar266 = fVar424 * fVar314 - fVar736 * fVar488;
          fVar267 = fVar424 * fVar530 - fVar535 * fVar488;
          fVar313 = (fVar271 * fVar657 + auVar671._0_4_ * fVar313 + fVar560 * fVar368) *
                    _DAT_03cabc00;
          fVar314 = (fVar488 * fVar665 + auVar671._4_4_ * fVar314 + fVar562 * fVar368) *
                    _UNK_03cabc04;
          fVar485 = (fVar488 * fVar666 + auVar671._8_4_ * fVar530 + fVar563 * fVar368) *
                    _UNK_03cabc08;
          fVar489 = (fVar488 * fVar680 + auVar671._12_4_ * fVar269 + fVar683 * auVar507._4_4_) *
                    _UNK_03cabc0c;
          fVar271 = fVar424 * fVar313;
          fVar368 = fVar230 * fVar314;
          fVar530 = auVar507._0_4_ * fVar485;
          fVar486 = fVar310 * fVar489;
          auVar116._0_4_ = fVar271 + fVar368;
          auVar116._4_4_ = fVar530 + fVar486;
          auVar116._8_4_ = fVar271 + fVar368;
          auVar116._12_4_ = fVar530 + fVar486;
          auVar606 = NEON_ext(auVar116,auVar116,4,1);
          auVar117._0_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar117._4_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar117._8_4_ = auVar606._0_4_ + auVar606._4_4_;
          auVar117._12_4_ = auVar606._8_4_ + auVar606._12_4_;
          auVar606 = NEON_frecpe(auVar117,4);
          auVar564 = NEON_frecps(auVar606,auVar117,4);
          auVar570._0_4_ = auVar606._0_4_ * auVar564._0_4_;
          auVar570._4_4_ = auVar606._4_4_ * auVar564._4_4_;
          auVar570._8_4_ = auVar606._8_4_ * auVar564._8_4_;
          auVar570._12_4_ = auVar606._12_4_ * auVar564._12_4_;
          iVar721 = -(uint)(auVar117._0_4_ == 0.0);
          iVar726 = -(uint)(auVar117._4_4_ == 0.0);
          iVar727 = -(uint)(auVar117._8_4_ == 0.0);
          iVar728 = -(uint)(auVar117._12_4_ == 0.0);
          bVar541 = ~(byte)iVar721;
          bVar544 = ~(byte)((uint)iVar721 >> 8);
          bVar545 = ~(byte)((uint)iVar721 >> 0x10);
          bVar546 = ~(byte)((uint)iVar721 >> 0x18);
          bVar547 = ~(byte)iVar726;
          bVar548 = ~(byte)((uint)iVar726 >> 8);
          bVar549 = ~(byte)((uint)iVar726 >> 0x10);
          bVar550 = ~(byte)((uint)iVar726 >> 0x18);
          bVar551 = ~(byte)iVar727;
          bVar552 = ~(byte)((uint)iVar727 >> 8);
          bVar553 = ~(byte)((uint)iVar727 >> 0x10);
          bVar554 = ~(byte)((uint)iVar727 >> 0x18);
          bVar555 = ~(byte)iVar728;
          bVar556 = ~(byte)((uint)iVar728 >> 8);
          bVar557 = ~(byte)((uint)iVar728 >> 0x10);
          bVar558 = ~(byte)((uint)iVar728 >> 0x18);
          fVar532 = (float)((ulong)_DAT_03cac210 >> 0x20);
          auVar606 = NEON_frecps(auVar570,auVar117,4);
          fVar486 = auVar570._0_4_ * auVar606._0_4_;
          fVar270 = auVar570._4_4_ * auVar606._4_4_;
          fVar272 = auVar570._8_4_ * auVar606._8_4_;
          fVar530 = auVar570._12_4_ * auVar606._12_4_;
          fVar313 = fVar313 * fVar486;
          fVar314 = fVar314 * fVar270;
          fVar485 = fVar485 * fVar272;
          fVar489 = fVar489 * fVar530;
          auVar255[0] = SUB41(fVar313,0) & bVar541;
          auVar255[1] = (byte)((uint)fVar313 >> 8) & bVar544;
          auVar255[2] = (byte)((uint)fVar313 >> 0x10) & bVar545;
          auVar255[3] = (byte)((uint)fVar313 >> 0x18) & bVar546;
          auVar255[4] = SUB41(fVar314,0) & bVar547;
          auVar255[5] = (byte)((uint)fVar314 >> 8) & bVar548;
          auVar255[6] = (byte)((uint)fVar314 >> 0x10) & bVar549;
          auVar255[7] = (byte)((uint)fVar314 >> 0x18) & bVar550;
          auVar255[8] = SUB41(fVar485,0) & bVar551;
          auVar255[9] = (byte)((uint)fVar485 >> 8) & bVar552;
          auVar255[10] = (byte)((uint)fVar485 >> 0x10) & bVar553;
          auVar255[0xb] = (byte)((uint)fVar485 >> 0x18) & bVar554;
          auVar255[0xc] = SUB41(fVar489,0) & bVar555;
          auVar255[0xd] = (byte)((uint)fVar489 >> 8) & bVar556;
          auVar255[0xe] = (byte)((uint)fVar489 >> 0x10) & bVar557;
          auVar255[0xf] = (byte)((uint)fVar489 >> 0x18) & bVar558;
          fVar271 = (fVar230 * fVar657 + auVar671._0_4_ * fVar533 + fVar560 * fVar310) *
                    (float)_DAT_03cac210 * fVar486;
          fVar368 = (fVar424 * fVar665 + auVar671._4_4_ * fVar736 + fVar562 * fVar310) * fVar532 *
                    fVar270;
          fVar310 = (fVar424 * fVar666 + auVar671._8_4_ * fVar535 + fVar563 * fVar310) *
                    (float)_UNK_03cac218 * fVar272;
          fVar313 = (fVar424 * fVar680 + auVar671._12_4_ * fVar536 + fVar683 * auVar507._0_4_) *
                    (float)((ulong)_UNK_03cac218 >> 0x20) * fVar530;
          auVar300[0] = SUB41(fVar271,0) & bVar541;
          auVar300[1] = (byte)((uint)fVar271 >> 8) & bVar544;
          auVar300[2] = (byte)((uint)fVar271 >> 0x10) & bVar545;
          auVar300[3] = (byte)((uint)fVar271 >> 0x18) & bVar546;
          auVar300[4] = SUB41(fVar368,0) & bVar547;
          auVar300[5] = (byte)((uint)fVar368 >> 8) & bVar548;
          auVar300[6] = (byte)((uint)fVar368 >> 0x10) & bVar549;
          auVar300[7] = (byte)((uint)fVar368 >> 0x18) & bVar550;
          auVar300[8] = SUB41(fVar310,0) & bVar551;
          auVar300[9] = (byte)((uint)fVar310 >> 8) & bVar552;
          auVar300[10] = (byte)((uint)fVar310 >> 0x10) & bVar553;
          auVar300[0xb] = (byte)((uint)fVar310 >> 0x18) & bVar554;
          auVar300[0xc] = SUB41(fVar313,0) & bVar555;
          auVar300[0xd] = (byte)((uint)fVar313 >> 8) & bVar556;
          auVar300[0xe] = (byte)((uint)fVar313 >> 0x10) & bVar557;
          auVar300[0xf] = (byte)((uint)fVar313 >> 0x18) & bVar558;
          fVar271 = (fVar275 * fVar227 + fVar692 * fVar528 + fVar729 * fVar487) * _DAT_03cabc00 *
                    fVar486;
          fVar275 = (fVar229 * fVar228 + fVar276 * fVar529 + fVar266 * fVar487) * _UNK_03cabc04 *
                    fVar270;
          fVar310 = (fVar229 * fVar231 + fVar311 * fVar735 + fVar267 * fVar487) * _UNK_03cabc08 *
                    fVar272;
          fVar530 = (fVar229 * (auVar507._4_4_ * fVar536 - auVar507._0_4_ * fVar269) +
                     (auVar507._0_4_ * fVar488 - fVar424 * auVar507._4_4_) * fVar531 +
                    (fVar424 * fVar269 - fVar536 * fVar488) * auVar507._12_4_) * _UNK_03cabc0c *
                    fVar530;
          auVar354[0] = SUB41(fVar271,0) & bVar541;
          auVar354[1] = (byte)((uint)fVar271 >> 8) & bVar544;
          auVar354[2] = (byte)((uint)fVar271 >> 0x10) & bVar545;
          auVar354[3] = (byte)((uint)fVar271 >> 0x18) & bVar546;
          auVar354[4] = SUB41(fVar275,0) & bVar547;
          auVar354[5] = (byte)((uint)fVar275 >> 8) & bVar548;
          auVar354[6] = (byte)((uint)fVar275 >> 0x10) & bVar549;
          auVar354[7] = (byte)((uint)fVar275 >> 0x18) & bVar550;
          auVar354[8] = SUB41(fVar310,0) & bVar551;
          auVar354[9] = (byte)((uint)fVar310 >> 8) & bVar552;
          auVar354[10] = (byte)((uint)fVar310 >> 0x10) & bVar553;
          auVar354[0xb] = (byte)((uint)fVar310 >> 0x18) & bVar554;
          auVar354[0xc] = SUB41(fVar530,0) & bVar555;
          auVar354[0xd] = (byte)((uint)fVar530 >> 8) & bVar556;
          auVar354[0xe] = (byte)((uint)fVar530 >> 0x10) & bVar557;
          auVar354[0xf] = (byte)((uint)fVar530 >> 0x18) & bVar558;
          fVar486 = (fVar273 * fVar227 + fVar692 * fVar366 + fVar729 * fVar696) *
                    (float)_DAT_03cac210 * fVar486;
          fVar270 = (fVar490 * fVar228 + fVar276 * fVar367 + fVar266 * fVar696) * fVar532 * fVar270;
          fVar272 = (fVar490 * fVar231 + fVar311 * fVar527 + fVar267 * fVar696) *
                    (float)_UNK_03cac218 * fVar272;
          auVar371[0] = SUB41(fVar486,0) & bVar541;
          auVar371[1] = (byte)((uint)fVar486 >> 8) & bVar544;
          auVar371[2] = (byte)((uint)fVar486 >> 0x10) & bVar545;
          auVar371[3] = (byte)((uint)fVar486 >> 0x18) & bVar546;
          auVar371[4] = SUB41(fVar270,0) & bVar547;
          auVar371[5] = (byte)((uint)fVar270 >> 8) & bVar548;
          auVar371[6] = (byte)((uint)fVar270 >> 0x10) & bVar549;
          auVar371[7] = (byte)((uint)fVar270 >> 0x18) & bVar550;
          auVar371[8] = SUB41(fVar272,0) & bVar551;
          auVar371[9] = (byte)((uint)fVar272 >> 8) & bVar552;
          auVar371[10] = (byte)((uint)fVar272 >> 0x10) & bVar553;
          auVar371[0xb] = (byte)((uint)fVar272 >> 0x18) & bVar554;
        }
        fVar227 = auVar255._0_4_ * fVar312 + auVar300._0_4_ * fVar690 + auVar354._0_4_ * fVar274 +
                  auVar371._0_4_;
        fVar228 = auVar255._4_4_ * fVar312 + auVar300._4_4_ * fVar690 + auVar354._4_4_ * fVar274 +
                  auVar371._4_4_;
        fVar231 = auVar255._8_4_ * fVar312 + auVar300._8_4_ * fVar690 + auVar354._8_4_ * fVar274 +
                  auVar371._8_4_;
        fVar271 = auVar255._12_4_ * fVar312 + auVar300._12_4_ * fVar690 + auVar354._12_4_ * fVar274
                  + 0.0;
        auVar118._0_4_ = fVar227 * fVar227 + fVar228 * fVar228;
        auVar118._4_4_ = fVar231 * fVar231 + fVar271 * fVar271;
        auVar118._8_4_ = fVar227 * fVar227 + fVar228 * fVar228;
        auVar118._12_4_ = fVar231 * fVar231 + fVar271 * fVar271;
        auVar606 = NEON_ext(auVar118,auVar118,4,1);
        auVar119._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar119._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar119._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar119._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar606 = NEON_frsqrte(auVar119,4);
        auVar520._0_4_ = auVar119._0_4_ * auVar606._0_4_;
        auVar520._4_4_ = auVar119._4_4_ * auVar606._4_4_;
        auVar520._8_4_ = auVar119._8_4_ * auVar606._8_4_;
        auVar520._12_4_ = auVar119._12_4_ * auVar606._12_4_;
        auVar564 = NEON_frsqrts(auVar606,auVar520,4);
        auVar460._0_4_ = auVar606._0_4_ * auVar564._0_4_;
        auVar460._4_4_ = auVar606._4_4_ * auVar564._4_4_;
        auVar460._8_4_ = auVar606._8_4_ * auVar564._8_4_;
        auVar460._12_4_ = auVar606._12_4_ * auVar564._12_4_;
        auVar521._0_4_ = auVar119._0_4_ * auVar460._0_4_;
        auVar521._4_4_ = auVar119._4_4_ * auVar460._4_4_;
        auVar521._8_4_ = auVar119._8_4_ * auVar460._8_4_;
        auVar521._12_4_ = auVar119._12_4_ * auVar460._12_4_;
        auVar606 = NEON_frsqrts(auVar460,auVar521,4);
        fVar227 = fVar227 * auVar460._0_4_ * auVar606._0_4_;
        fVar228 = fVar228 * auVar460._4_4_ * auVar606._4_4_;
        fVar231 = fVar231 * auVar460._8_4_ * auVar606._8_4_;
        fVar271 = fVar271 * auVar460._12_4_ * auVar606._12_4_;
        iVar721 = -(uint)(auVar119._0_4_ == 0.0);
        iVar726 = -(uint)(auVar119._4_4_ == 0.0);
        iVar727 = -(uint)(auVar119._8_4_ == 0.0);
        iVar728 = -(uint)(auVar119._12_4_ == 0.0);
        fVar274 = (float)CONCAT13((byte)((uint)fVar227 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                  CONCAT12((byte)((uint)fVar227 >> 0x10) &
                                           ~(byte)((uint)iVar721 >> 0x10),
                                           CONCAT11((byte)((uint)fVar227 >> 8) &
                                                    ~(byte)((uint)iVar721 >> 8),
                                                    SUB41(fVar227,0) & ~(byte)iVar721)));
        auVar156._0_8_ =
             CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                      CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                               CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                        CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar274))));
        auVar156[8] = SUB41(fVar231,0) & ~(byte)iVar727;
        auVar156[9] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar727 >> 8);
        auVar156[10] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
        auVar156[0xb] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
        auVar206[0xc] = SUB41(fVar271,0) & ~(byte)iVar728;
        auVar206._0_12_ = auVar156;
        auVar206[0xd] = (byte)((uint)fVar271 >> 8) & ~(byte)((uint)iVar728 >> 8);
        auVar206[0xe] = (byte)((uint)fVar271 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
        auVar206[0xf] = (byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
        fVar227 = local_d0 * auVar255._0_4_ + auVar300._0_4_ * fStack_cc +
                  auVar354._0_4_ * fStack_c8 + auVar371._0_4_;
        fVar228 = local_d0 * auVar255._4_4_ + auVar300._4_4_ * fStack_cc +
                  auVar354._4_4_ * fStack_c8 + auVar371._4_4_;
        fVar231 = local_d0 * auVar255._8_4_ + auVar300._8_4_ * fStack_cc +
                  auVar354._8_4_ * fStack_c8 + auVar371._8_4_;
        fVar271 = local_d0 * auVar255._12_4_ + auVar300._12_4_ * fStack_cc +
                  auVar354._12_4_ * fStack_c8 + 0.0;
        uVar710 = a64_TBL(ZEXT816(0),auVar206,uVar542);
        auVar461._0_8_ = a64_TBL(ZEXT816(0),auVar206,uVar559);
        auVar461._8_8_ = 0;
        uVar317 = a64_TBL(ZEXT816(0),auVar206,uVar566);
        auVar120._0_4_ = fVar227 * fVar227 + fVar228 * fVar228;
        auVar120._4_4_ = fVar231 * fVar231 + fVar271 * fVar271;
        auVar120._8_4_ = fVar227 * fVar227 + fVar228 * fVar228;
        auVar120._12_4_ = fVar231 * fVar231 + fVar271 * fVar271;
        auVar606 = NEON_ext(auVar120,auVar120,4,1);
        auVar121._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar121._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar121._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar121._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar606 = NEON_frsqrte(auVar121,4);
        auVar411._0_4_ = auVar121._0_4_ * auVar606._0_4_;
        auVar411._4_4_ = auVar121._4_4_ * auVar606._4_4_;
        auVar411._8_4_ = auVar121._8_4_ * auVar606._8_4_;
        auVar411._12_4_ = auVar121._12_4_ * auVar606._12_4_;
        auVar564 = NEON_frsqrts(auVar606,auVar411,4);
        auVar385._0_4_ = auVar606._0_4_ * auVar564._0_4_;
        auVar385._4_4_ = auVar606._4_4_ * auVar564._4_4_;
        auVar385._8_4_ = auVar606._8_4_ * auVar564._8_4_;
        auVar385._12_4_ = auVar606._12_4_ * auVar564._12_4_;
        auVar412._0_4_ = auVar121._0_4_ * auVar385._0_4_;
        auVar412._4_4_ = auVar121._4_4_ * auVar385._4_4_;
        auVar412._8_4_ = auVar121._8_4_ * auVar385._8_4_;
        auVar412._12_4_ = auVar121._12_4_ * auVar385._12_4_;
        iVar721 = -(uint)(auVar121._0_4_ == 0.0);
        iVar726 = -(uint)(auVar121._4_4_ == 0.0);
        iVar727 = -(uint)(auVar121._8_4_ == 0.0);
        iVar728 = -(uint)(auVar121._12_4_ == 0.0);
        auVar606 = NEON_frsqrts(auVar385,auVar412,4);
        fVar227 = fVar227 * auVar385._0_4_ * auVar606._0_4_;
        fVar228 = fVar228 * auVar385._4_4_ * auVar606._4_4_;
        fVar231 = fVar231 * auVar385._8_4_ * auVar606._8_4_;
        fVar271 = fVar271 * auVar385._12_4_ * auVar606._12_4_;
        fVar227 = (float)CONCAT13((byte)((uint)fVar227 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                  CONCAT12((byte)((uint)fVar227 >> 0x10) &
                                           ~(byte)((uint)iVar721 >> 0x10),
                                           CONCAT11((byte)((uint)fVar227 >> 8) &
                                                    ~(byte)((uint)iVar721 >> 8),
                                                    SUB41(fVar227,0) & ~(byte)iVar721)));
        auVar233._0_8_ =
             CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                      CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                               CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                        CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar227))));
        auVar233[8] = SUB41(fVar231,0) & ~(byte)iVar727;
        auVar233[9] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar727 >> 8);
        auVar233[10] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
        auVar233[0xb] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
        auVar256[0xc] = SUB41(fVar271,0) & ~(byte)iVar728;
        auVar256._0_12_ = auVar233;
        auVar256[0xd] = (byte)((uint)fVar271 >> 8) & ~(byte)((uint)iVar728 >> 8);
        auVar256[0xe] = (byte)((uint)fVar271 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
        auVar256[0xf] = (byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
        uVar616 = a64_TBL(ZEXT816(0),auVar206,uVar492);
        uVar722 = a64_TBL(ZEXT816(0),auVar256,uVar559);
        uVar730 = a64_TBL(ZEXT816(0),auVar256,uVar566);
        uVar369 = a64_TBL(ZEXT816(0),auVar256,uVar492);
        uVar493 = a64_TBL(ZEXT816(0),auVar256,uVar542);
        fVar274 = fVar274 * fVar227;
        fVar227 = (float)((ulong)auVar156._0_8_ >> 0x20) * (float)((ulong)auVar233._0_8_ >> 0x20);
        fVar228 = auVar156._8_4_ * auVar233._8_4_;
        fVar231 = auVar206._12_4_ * auVar256._12_4_;
        fVar271 = (float)uVar616 * (float)uVar722 - (float)auVar461._0_8_ * (float)uVar369;
        fVar273 = (float)((ulong)uVar616 >> 0x20) * (float)((ulong)uVar722 >> 0x20) -
                  (float)(auVar461._0_8_ >> 0x20) * (float)((ulong)uVar369 >> 0x20);
        fVar275 = (float)uVar710 * (float)uVar730 - (float)uVar317 * (float)uVar493;
        fVar310 = (float)((ulong)uVar710 >> 0x20) * (float)((ulong)uVar730 >> 0x20) -
                  (float)((ulong)uVar317 >> 0x20) * (float)((ulong)uVar493 >> 0x20);
        auVar122._0_4_ = fVar274 + fVar227;
        auVar122._4_4_ = fVar228 + fVar231;
        auVar122._8_4_ = fVar274 + fVar227;
        auVar122._12_4_ = fVar228 + fVar231;
        auVar606 = NEON_ext(auVar122,auVar122,4,1);
        fVar310 = fVar310 * fVar310;
        auVar123._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar123._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar123._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar123._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar124._0_4_ = fVar271 * fVar271 + fVar273 * fVar273;
        auVar124._4_4_ = fVar275 * fVar275 + fVar310;
        auVar124._8_4_ = fVar271 * fVar271 + fVar273 * fVar273;
        auVar124._12_4_ = fVar275 * fVar275 + fVar310;
        auVar606 = NEON_ext(auVar124,auVar124,4,1);
        auVar125._0_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar125._4_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar125._8_4_ = auVar606._0_4_ + auVar606._4_4_;
        auVar125._12_4_ = auVar606._8_4_ + auVar606._12_4_;
        auVar606 = NEON_frsqrte(auVar125,4);
        iVar721 = -(uint)(auVar125._0_4_ == 0.0);
        iVar726 = -(uint)(auVar125._4_4_ == 0.0);
        iVar727 = -(uint)(auVar125._8_4_ == 0.0);
        auVar413._0_4_ = auVar125._0_4_ * auVar606._0_4_;
        auVar413._4_4_ = auVar125._4_4_ * auVar606._4_4_;
        auVar413._8_4_ = auVar125._8_4_ * auVar606._8_4_;
        auVar413._12_4_ = auVar125._12_4_ * auVar606._12_4_;
        auVar564 = NEON_frsqrts(auVar606,auVar413,4);
        auVar386._0_4_ = auVar606._0_4_ * auVar564._0_4_;
        auVar386._4_4_ = auVar606._4_4_ * auVar564._4_4_;
        auVar386._8_4_ = auVar606._8_4_ * auVar564._8_4_;
        auVar386._12_4_ = auVar606._12_4_ * auVar564._12_4_;
        auVar414._0_4_ = auVar125._0_4_ * auVar386._0_4_;
        auVar414._4_4_ = auVar125._4_4_ * auVar386._4_4_;
        auVar414._8_4_ = auVar125._8_4_ * auVar386._8_4_;
        auVar414._12_4_ = auVar125._12_4_ * auVar386._12_4_;
        auVar564 = NEON_frsqrts(auVar386,auVar414,4);
        auVar606 = NEON_fmax(auVar123,auVar326,4);
        auVar606 = NEON_fmin(auVar606,auVar561,4);
        fVar271 = fVar271 * auVar386._0_4_ * auVar564._0_4_;
        fVar273 = fVar273 * auVar386._4_4_ * auVar564._4_4_;
        fVar275 = fVar275 * auVar386._8_4_ * auVar564._8_4_;
        fVar274 = (float)CONCAT13((byte)((uint)fVar271 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                                  CONCAT12((byte)((uint)fVar271 >> 0x10) &
                                           ~(byte)((uint)iVar721 >> 0x10),
                                           CONCAT11((byte)((uint)fVar271 >> 8) &
                                                    ~(byte)((uint)iVar721 >> 8),
                                                    SUB41(fVar271,0) & ~(byte)iVar721)));
        auVar157._0_8_ =
             CONCAT17((byte)((uint)fVar273 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                      CONCAT16((byte)((uint)fVar273 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                               CONCAT15((byte)((uint)fVar273 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                        CONCAT14(SUB41(fVar273,0) & ~(byte)iVar726,fVar274))));
        auVar157[8] = SUB41(fVar275,0) & ~(byte)iVar727;
        auVar157[9] = (byte)((uint)fVar275 >> 8) & ~(byte)((uint)iVar727 >> 8);
        auVar157[10] = (byte)((uint)fVar275 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
        auVar157[0xb] = (byte)((uint)fVar275 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
        auVar210._0_4_ = fVar274 * SQRT(local_120 - (auVar606._0_4_ + local_120) * 0.5);
        fVar274 = (float)((ulong)auVar157._0_8_ >> 0x20) *
                  SQRT(fStack_11c - (auVar606._4_4_ + fStack_11c) * 0.5);
        auVar209._8_4_ = auVar157._8_4_ * SQRT(fStack_118 - (auVar606._8_4_ + fStack_118) * 0.5);
        lVar60 = nn::os::GetCurrentThread();
        do {
          lVar61 = *plVar1;
          lVar63 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar61;
            *(long *)(param_6 + 0x458) = lVar63;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          while ((lVar61 != 0 && (lVar60 != lVar61))) {
            nn::os::WaitLightEvent(pLVar2);
            do {
              lVar61 = *plVar1;
              lVar63 = *(long *)(param_6 + 0x458);
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar61;
                *(long *)(param_6 + 0x458) = lVar63;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            lVar4 = *plVar1;
            if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto LAB_00d158cc;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar61;
              *(long *)(param_6 + 0x454) = lVar63 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
LAB_00d158cc:
          lVar61 = lVar4;
          lVar63 = *(long *)(param_6 + 0x458);
        } while (!bVar57);
        lVar60 = *(long *)(param_6 + 0x248) +
                 (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
        auVar543 = *(undefined1 (*) [12])(lVar60 + 0x10);
        uStack_104 = (undefined4)((ulong)*(undefined8 *)(lVar60 + 0x18) >> 0x20);
        do {
          lVar60 = *plVar1;
          lVar61 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x458) = lVar61;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          lVar63 = *plVar1;
          lVar4 = *(long *)(param_6 + 0x458);
          if (lVar63 != lVar60 || lVar4 != lVar61) {
            bVar57 = false;
            ClearExclusiveLocal();
            goto LAB_00d1592c;
          }
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x454) = lVar61 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar57 = true;
LAB_00d1592c:
        if (!bVar57) {
          do {
            lVar60 = *plVar1;
            lVar61 = *(long *)(param_6 + 0x458);
            if (lVar60 != lVar63 || lVar61 != lVar4) {
              bVar57 = false;
              ClearExclusiveLocal();
              goto joined_r0x00d15afc;
            }
            cVar5 = '\x01';
            bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar57) {
              *plVar1 = lVar63;
              *(long *)(param_6 + 0x454) = lVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar57 = true;
joined_r0x00d15afc:
          if (!bVar57) {
            do {
              lVar63 = *plVar1;
              lVar4 = *(long *)(param_6 + 0x458);
              if (lVar63 != lVar60 || lVar4 != lVar61) {
                bVar57 = false;
                ClearExclusiveLocal();
                lVar60 = lVar63;
                lVar61 = lVar4;
                goto joined_r0x00d15afc;
              }
              cVar5 = '\x01';
              bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar57) {
                *plVar1 = lVar60;
                *(long *)(param_6 + 0x454) = lVar61 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar57 = true;
            lVar60 = lVar63;
            lVar61 = lVar4;
            goto joined_r0x00d15afc;
          }
        }
        nn::os::SignalLightEvent(pLVar2);
        auVar38._12_4_ = uStack_104;
        auVar38._0_12_ = auVar543;
        uVar149 = auVar543._8_4_;
        auVar207._4_4_ = uVar149;
        auVar207._0_4_ = uVar149;
        auVar207._8_4_ = uVar149;
        auVar207._12_4_ = uVar149;
        auVar606 = NEON_ext(auVar207,auVar38,0xc,1);
        uVar149 = auVar543._4_4_;
        auVar208._4_4_ = uVar149;
        auVar208._0_4_ = uVar149;
        auVar208._8_4_ = uVar149;
        auVar208._12_4_ = uVar149;
        NEON_ext(auVar208,auVar606,0xc,1);
        auVar209._4_4_ = auVar209._8_4_;
        auVar209._0_4_ = auVar209._8_4_;
        auVar209._12_4_ = auVar209._8_4_;
        auVar210._4_12_ = auVar209._4_12_;
        auVar212._0_8_ = auVar210._0_8_;
        auVar212._8_4_ = fVar274;
        auVar212._12_4_ = auVar209._8_4_;
        auVar211._8_8_ = auVar212._8_8_;
        auVar211._4_4_ = auVar209._8_4_;
        auVar211._0_4_ = auVar210._0_4_;
        auVar213._0_12_ = auVar211._0_12_;
        auVar213._12_4_ = auVar209._8_4_;
        auVar606 = NEON_ext(auVar213,auVar213,8,1);
        auVar462._4_12_ = auVar461._4_12_;
        auVar462._0_4_ = auVar606._0_4_;
        auVar464._12_4_ = auVar461._12_4_;
        auVar464._0_8_ = auVar462._0_8_;
        auVar464._8_4_ = auVar606._8_4_;
        auVar463._8_8_ = auVar464._8_8_;
        auVar463._4_4_ = auVar210._0_4_;
        auVar463._0_4_ = auVar606._0_4_;
        auVar465._0_12_ = auVar463._0_12_;
        auVar465._12_4_ = fVar274;
        auVar606 = NEON_ext(auVar465,auVar606,8,1);
        NEON_ext(auVar606,auVar606,0xc,1);
        FUN_00d172e8(param_6,param_7);
      }
      uVar491 = uVar491 + 1;
      if (uVar491 == uVar316) break;
      cVar5 = *param_10;
    } while( true );
  }
  if (0.0001 < ABS(param_3._0_4_)) {
    pfVar59 = (float *)FUN_00c4c40c(param_6,param_7);
    fVar274 = *(float *)(param_6 + 0x3e0);
    fVar227 = *(float *)(param_6 + 0x3e4);
    fVar228 = *(float *)(param_6 + 1000);
    fVar315 = *(float *)(param_6 + 0x3ec);
    auVar606 = *(undefined1 (*) [16])(param_6 + 0x3f0);
    auVar564 = *(undefined1 (*) [16])(param_6 + 0x400);
    auVar595 = *(undefined1 (*) [16])(param_6 + 0x410);
    fVar231 = *pfVar59;
    fVar268 = pfVar59[1];
    fVar271 = pfVar59[2];
    fVar273 = pfVar59[3];
    auVar330 = *(undefined1 (*) [16])(pfVar59 + 4);
    fVar275 = auVar606._0_4_;
    fVar310 = auVar606._4_4_;
    fVar312 = auVar606._8_4_;
    fVar368 = auVar606._12_4_;
    fVar690 = auVar564._0_4_;
    fVar696 = auVar564._4_4_;
    fVar487 = auVar564._8_4_;
    fVar692 = auVar564._12_4_;
    fVar276 = auVar595._0_4_;
    fVar311 = auVar595._4_4_;
    fVar313 = auVar595._8_4_;
    fVar314 = auVar595._12_4_;
    auVar473._0_4_ = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
    auVar474._4_4_ = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
    fVar424 = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
    auVar474._12_4_ = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
    fVar231 = auVar330._0_4_;
    fVar268 = auVar330._4_4_;
    fVar271 = auVar330._8_4_;
    fVar273 = auVar330._12_4_;
    fVar488 = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
    auVar525._4_4_ = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
    fVar489 = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
    fVar490 = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
    auVar606 = *(undefined1 (*) [16])(pfVar59 + 8);
    auVar564 = *(undefined1 (*) [16])(pfVar59 + 0xc);
    fVar231 = auVar606._0_4_;
    fVar530 = auVar564._0_4_;
    fVar268 = auVar606._4_4_;
    fVar485 = auVar564._4_4_;
    fVar271 = auVar606._8_4_;
    fVar486 = auVar564._8_4_;
    fVar273 = auVar606._12_4_;
    auVar573._0_4_ = fVar274 * fVar231 + fVar275 * fVar268 + fVar690 * fVar271 + fVar276 * fVar273;
    auVar573._4_4_ = fVar227 * fVar231 + fVar310 * fVar268 + fVar696 * fVar271 + fVar311 * fVar273;
    auVar573._8_4_ = fVar228 * fVar231 + fVar312 * fVar268 + fVar487 * fVar271 + fVar313 * fVar273;
    auVar573._12_4_ = fVar315 * fVar231 + fVar368 * fVar268 + fVar692 * fVar271 + fVar314 * fVar273;
    fVar268 = auVar564._12_4_;
    fVar231 = fVar274 * fVar530 + fVar275 * fVar485 + fVar690 * fVar486 + fVar276 * fVar268;
    fVar274 = fVar227 * fVar530 + fVar310 * fVar485 + fVar696 * fVar486 + fVar311 * fVar268;
    fVar227 = fVar228 * fVar530 + fVar312 * fVar485 + fVar487 * fVar486 + fVar313 * fVar268;
    fVar228 = fVar315 * fVar530 + fVar368 * fVar485 + fVar692 * fVar486 + fVar314 * fVar268;
    bStack_f8 = SUB41(fVar227,0);
    bStack_f7 = (byte)((uint)fVar227 >> 8);
    bStack_f6 = (byte)((uint)fVar227 >> 0x10);
    bStack_f5 = (byte)((uint)fVar227 >> 0x18);
    bStack_f4 = SUB41(fVar228,0);
    bStack_f3 = (byte)((uint)fVar228 >> 8);
    bStack_f2 = (byte)((uint)fVar228 >> 0x10);
    bStack_f1 = (byte)((uint)fVar228 >> 0x18);
    bStack_fc = SUB41(fVar274,0);
    bStack_fb = (byte)((uint)fVar274 >> 8);
    bStack_fa = (byte)((uint)fVar274 >> 0x10);
    bStack_f9 = (byte)((uint)fVar274 >> 0x18);
    auVar606 = auVar573;
    lVar60 = FUN_00c4c40c(param_6,param_9);
    fVar274 = *(float *)(lVar60 + 0x30);
    fVar227 = *(float *)(lVar60 + 0x34);
    fVar228 = *(float *)(lVar60 + 0x38);
    fVar315 = *(float *)(lVar60 + 0x3c);
    uVar492 = CONCAT17(bStack_f9,CONCAT16(bStack_fa,CONCAT15(bStack_fb,CONCAT14(bStack_fc,fVar231)))
                      );
    auVar46[8] = bStack_f8;
    auVar46._0_8_ = uVar492;
    auVar46[9] = bStack_f7;
    auVar46[10] = bStack_f6;
    auVar46[0xb] = bStack_f5;
    auVar45[0xc] = bStack_f4;
    auVar45._0_12_ = auVar46;
    auVar45[0xd] = bStack_f3;
    auVar45[0xe] = bStack_f2;
    auVar45[0xf] = bStack_f1;
    auVar474._0_4_ = auVar473._0_4_;
    fVar268 = *(float *)(param_6 + 0x3e0) * fVar274 + *(float *)(param_6 + 0x3f0) * fVar227 +
              *(float *)(param_6 + 0x400) * fVar228 + *(float *)(param_6 + 0x410) * fVar315;
    fVar271 = *(float *)(param_6 + 0x3e4) * fVar274 + *(float *)(param_6 + 0x3f4) * fVar227 +
              *(float *)(param_6 + 0x404) * fVar228 + *(float *)(param_6 + 0x414) * fVar315;
    fVar315 = *(float *)(param_6 + 1000) * fVar274 + *(float *)(param_6 + 0x3f8) * fVar227 +
              *(float *)(param_6 + 0x408) * fVar228 + *(float *)(param_6 + 0x418) * fVar315;
    fVar274 = (float)((ulong)uVar492 >> 0x20);
    fVar227 = auVar46._8_4_;
    fVar228 = auVar45._12_4_;
    auVar419._4_4_ = fVar488;
    auVar419._0_4_ = fVar488;
    auVar419._8_4_ = fVar488;
    auVar419._12_4_ = fVar488;
    auVar633._4_4_ = fVar489;
    auVar633._0_4_ = fVar489;
    auVar633._8_4_ = fVar489;
    auVar633._12_4_ = fVar489;
    auVar653._4_12_ = auVar648._4_12_;
    auVar653._0_4_ = fVar424;
    auVar655._12_4_ = auVar648._12_4_;
    auVar655._0_8_ = auVar653._0_8_;
    auVar655._8_4_ = auVar573._8_4_;
    auVar654._8_8_ = auVar655._8_8_;
    auVar654._4_4_ = fVar424;
    auVar654._0_4_ = fVar424;
    auVar656._0_12_ = auVar654._0_12_;
    auVar656._12_4_ = auVar573._8_4_;
    auVar474._8_4_ = auVar573._0_4_;
    auVar473._8_8_ = auVar474._8_8_;
    auVar473._4_4_ = auVar473._0_4_;
    auVar475._0_12_ = auVar473._0_12_;
    auVar475._12_4_ = auVar573._0_4_;
    auVar525._0_4_ = auVar525._4_4_;
    auVar525._8_4_ = auVar525._4_4_;
    auVar525._12_4_ = auVar525._4_4_;
    auVar574._4_12_ = auVar606._4_12_;
    auVar574._0_4_ = auVar474._4_4_;
    auVar576._12_4_ = auVar606._12_4_;
    auVar576._0_8_ = auVar574._0_8_;
    auVar576._8_4_ = auVar573._4_4_;
    auVar575._8_8_ = auVar576._8_8_;
    auVar575._4_4_ = auVar474._4_4_;
    auVar575._0_4_ = auVar474._4_4_;
    auVar577._0_12_ = auVar575._0_12_;
    auVar577._12_4_ = auVar573._4_4_;
    if ((fVar228 == 1.0) &&
       (auVar130._0_4_ = auVar474._12_4_ * auVar474._12_4_ + fVar490 * fVar490,
       auVar130._4_4_ = auVar573._12_4_ * auVar573._12_4_ + 0.0,
       auVar130._8_4_ = auVar474._12_4_ * auVar474._12_4_ + fVar490 * fVar490,
       auVar130._12_4_ = auVar573._12_4_ * auVar573._12_4_ + 0.0,
       auVar606 = NEON_ext(auVar130,auVar130,4,1), auVar606._0_4_ + auVar606._4_4_ == 0.0)) {
      auVar638 = NEON_ext(auVar656,auVar633,8,1);
      auVar330 = NEON_ext(auVar577,auVar525,8,1);
      auVar564 = NEON_ext(auVar475,auVar419,8,1);
      fVar312 = (auVar525._4_4_ * auVar638._0_4_ - auVar330._0_4_ * fVar489) * (float)_DAT_03cac270;
      fVar692 = (float)((ulong)_DAT_03cac270 >> 0x20);
      fVar368 = (auVar474._4_4_ * auVar638._4_4_ - auVar330._4_4_ * fVar424) * fVar692;
      fVar690 = (auVar474._4_4_ * auVar638._8_4_ - auVar330._8_4_ * fVar424) * (float)_UNK_03cac278;
      fVar276 = (float)((ulong)_UNK_03cac278 >> 0x20);
      fVar696 = (auVar474._4_4_ * auVar638._12_4_ - auVar330._12_4_ * fVar424) * fVar276;
      fVar228 = auVar473._0_4_ * fVar312;
      fVar273 = fVar488 * fVar368;
      fVar275 = auVar573._0_4_ * fVar690;
      fVar310 = fVar696 * 0.0;
      auVar147._0_4_ = fVar228 + fVar273;
      auVar147._4_4_ = fVar275 + fVar310;
      auVar147._8_4_ = fVar228 + fVar273;
      auVar147._12_4_ = fVar275 + fVar310;
      auVar606 = NEON_ext(auVar147,auVar147,4,1);
      auVar148._0_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar148._4_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar148._8_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar148._12_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar606 = NEON_frecpe(auVar148,4);
      iVar721 = -(uint)(auVar148._0_4_ == 0.0);
      iVar726 = -(uint)(auVar148._4_4_ == 0.0);
      iVar727 = -(uint)(auVar148._8_4_ == 0.0);
      iVar728 = -(uint)(auVar148._12_4_ == 0.0);
      auVar595 = NEON_frecps(auVar606,auVar148,4);
      auVar423._0_4_ = auVar606._0_4_ * auVar595._0_4_;
      auVar423._4_4_ = auVar606._4_4_ * auVar595._4_4_;
      auVar423._8_4_ = auVar606._8_4_ * auVar595._8_4_;
      auVar423._12_4_ = auVar606._12_4_ * auVar595._12_4_;
      bVar541 = ~(byte)iVar721;
      bVar544 = ~(byte)((uint)iVar721 >> 8);
      bVar545 = ~(byte)((uint)iVar721 >> 0x10);
      bVar546 = ~(byte)((uint)iVar721 >> 0x18);
      bVar547 = ~(byte)iVar726;
      bVar548 = ~(byte)((uint)iVar726 >> 8);
      bVar549 = ~(byte)((uint)iVar726 >> 0x10);
      bVar550 = ~(byte)((uint)iVar726 >> 0x18);
      bVar551 = ~(byte)iVar727;
      bVar552 = ~(byte)((uint)iVar727 >> 8);
      bVar553 = ~(byte)((uint)iVar727 >> 0x10);
      bVar554 = ~(byte)((uint)iVar727 >> 0x18);
      bVar555 = ~(byte)iVar728;
      bVar556 = ~(byte)((uint)iVar728 >> 8);
      bVar557 = ~(byte)((uint)iVar728 >> 0x10);
      bVar558 = ~(byte)((uint)iVar728 >> 0x18);
      auVar606 = NEON_frecps(auVar423,auVar148,4);
      fVar228 = auVar423._0_4_ * auVar606._0_4_;
      fVar273 = auVar423._4_4_ * auVar606._4_4_;
      fVar275 = auVar423._8_4_ * auVar606._8_4_;
      fVar310 = auVar423._12_4_ * auVar606._12_4_;
      fVar312 = fVar312 * fVar228;
      fVar368 = fVar368 * fVar273;
      fVar690 = fVar690 * fVar275;
      fVar696 = fVar696 * fVar310;
      fVar312 = (float)CONCAT13((byte)((uint)fVar312 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar312 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar312 >> 8) & bVar544,
                                                  SUB41(fVar312,0) & bVar541)));
      auVar285._0_8_ =
           CONCAT17((byte)((uint)fVar368 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar368 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar368 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar368,0) & bVar547,fVar312))));
      auVar285[8] = SUB41(fVar690,0) & bVar551;
      auVar285[9] = (byte)((uint)fVar690 >> 8) & bVar552;
      auVar285[10] = (byte)((uint)fVar690 >> 0x10) & bVar553;
      auVar285[0xb] = (byte)((uint)fVar690 >> 0x18) & bVar554;
      auVar308[0xc] = SUB41(fVar696,0) & bVar555;
      auVar308._0_12_ = auVar285;
      auVar308[0xd] = (byte)((uint)fVar696 >> 8) & bVar556;
      auVar308[0xe] = (byte)((uint)fVar696 >> 0x10) & bVar557;
      auVar308[0xf] = (byte)((uint)fVar696 >> 0x18) & bVar558;
      fVar368 = (fVar488 * auVar638._0_4_ - auVar564._0_4_ * fVar489) * (float)_DAT_03cab860 *
                fVar228;
      fVar690 = (auVar473._0_4_ * auVar638._4_4_ - auVar564._4_4_ * fVar424) *
                (float)((ulong)_DAT_03cab860 >> 0x20) * fVar273;
      fVar696 = (auVar473._0_4_ * auVar638._8_4_ - auVar564._8_4_ * fVar424) * (float)_UNK_03cab868
                * fVar275;
      fVar487 = (auVar473._0_4_ * auVar638._12_4_ - auVar564._12_4_ * fVar424) *
                (float)((ulong)_UNK_03cab868 >> 0x20) * fVar310;
      fVar368 = (float)CONCAT13((byte)((uint)fVar368 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar368 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar368 >> 8) & bVar544,
                                                  SUB41(fVar368,0) & bVar541)));
      auVar324._0_8_ =
           CONCAT17((byte)((uint)fVar690 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar690 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar690 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar690,0) & bVar547,fVar368))));
      auVar324[8] = SUB41(fVar696,0) & bVar551;
      auVar324[9] = (byte)((uint)fVar696 >> 8) & bVar552;
      auVar324[10] = (byte)((uint)fVar696 >> 0x10) & bVar553;
      auVar324[0xb] = (byte)((uint)fVar696 >> 0x18) & bVar554;
      auVar358[0xc] = SUB41(fVar487,0) & bVar555;
      auVar358._0_12_ = auVar324;
      auVar358[0xd] = (byte)((uint)fVar487 >> 8) & bVar556;
      auVar358[0xe] = (byte)((uint)fVar487 >> 0x10) & bVar557;
      auVar358[0xf] = (byte)((uint)fVar487 >> 0x18) & bVar558;
      fVar228 = (fVar488 * auVar330._0_4_ - auVar564._0_4_ * auVar525._4_4_) * (float)_DAT_03cac270
                * fVar228;
      fVar273 = (auVar473._0_4_ * auVar330._4_4_ - auVar564._4_4_ * auVar474._4_4_) * fVar692 *
                fVar273;
      fVar275 = (auVar473._0_4_ * auVar330._8_4_ - auVar564._8_4_ * auVar474._4_4_) *
                (float)_UNK_03cac278 * fVar275;
      fVar310 = (auVar473._0_4_ * auVar330._12_4_ - auVar564._12_4_ * auVar474._4_4_) * fVar276 *
                fVar310;
      fVar228 = (float)CONCAT13((byte)((uint)fVar228 >> 0x18) & bVar546,
                                CONCAT12((byte)((uint)fVar228 >> 0x10) & bVar545,
                                         CONCAT11((byte)((uint)fVar228 >> 8) & bVar544,
                                                  SUB41(fVar228,0) & bVar541)));
      auVar240._0_8_ =
           CONCAT17((byte)((uint)fVar273 >> 0x18) & bVar550,
                    CONCAT16((byte)((uint)fVar273 >> 0x10) & bVar549,
                             CONCAT15((byte)((uint)fVar273 >> 8) & bVar548,
                                      CONCAT14(SUB41(fVar273,0) & bVar547,fVar228))));
      auVar240[8] = SUB41(fVar275,0) & bVar551;
      auVar240[9] = (byte)((uint)fVar275 >> 8) & bVar552;
      auVar240[10] = (byte)((uint)fVar275 >> 0x10) & bVar553;
      auVar240[0xb] = (byte)((uint)fVar275 >> 0x18) & bVar554;
      auVar264[0xc] = SUB41(fVar310,0) & bVar555;
      auVar264._0_12_ = auVar240;
      auVar264[0xd] = (byte)((uint)fVar310 >> 8) & bVar556;
      auVar264[0xe] = (byte)((uint)fVar310 >> 0x10) & bVar557;
      auVar264[0xf] = (byte)((uint)fVar310 >> 0x18) & bVar558;
      auVar373._0_4_ = -(fVar312 * fVar231 + fVar368 * fVar274 + fVar228 * fVar227);
      auVar373._4_4_ =
           -((float)((ulong)auVar285._0_8_ >> 0x20) * fVar231 +
             (float)((ulong)auVar324._0_8_ >> 0x20) * fVar274 +
            (float)((ulong)auVar240._0_8_ >> 0x20) * fVar227);
      auVar373._8_4_ =
           -(auVar285._8_4_ * fVar231 + auVar324._8_4_ * fVar274 + auVar240._8_4_ * fVar227);
    }
    else {
      auVar564 = NEON_ext(auVar656,auVar633,8,1);
      auVar679._4_4_ = fVar490;
      auVar679._0_4_ = fVar490;
      auVar679._8_4_ = fVar490;
      auVar679._12_4_ = fVar490;
      auVar13._4_4_ = auVar474._12_4_;
      auVar13._0_4_ = auVar474._12_4_;
      auVar13._8_4_ = auVar573._12_4_;
      auVar13._12_4_ = auVar573._12_4_;
      auVar595 = NEON_ext(auVar13,auVar679,8,1);
      auVar606 = NEON_ext(auVar577,auVar525,8,1);
      fVar531 = auVar595._0_4_;
      fVar532 = auVar595._4_4_;
      fVar533 = auVar595._8_4_;
      fVar736 = auVar595._12_4_;
      fVar270 = auVar564._0_4_;
      fVar272 = auVar564._4_4_;
      fVar366 = auVar564._8_4_;
      fVar535 = fVar489 * fVar531 - fVar270 * fVar490;
      fVar536 = fVar424 * fVar532 - fVar272 * auVar474._12_4_;
      fVar657 = fVar424 * fVar533 - fVar366 * auVar474._12_4_;
      fVar665 = fVar424 * fVar736 - auVar564._12_4_ * auVar474._12_4_;
      fVar367 = fVar228 * fVar270 - fVar227 * fVar531;
      fVar527 = fVar228 * fVar272 - fVar227 * fVar532;
      fVar529 = fVar228 * fVar366 - fVar227 * fVar533;
      fVar735 = auVar573._12_4_ * auVar564._12_4_ - auVar573._8_4_ * fVar736;
      fVar666 = fVar227 * fVar490 - fVar489 * fVar228;
      fVar680 = fVar227 * auVar474._12_4_ - fVar424 * fVar228;
      fVar560 = fVar227 * auVar474._12_4_ - fVar424 * fVar228;
      fVar562 = auVar573._8_4_ * auVar474._12_4_ - fVar424 * auVar573._12_4_;
      fVar311 = auVar606._0_4_;
      fVar266 = auVar606._4_4_;
      fVar267 = auVar606._8_4_;
      fVar269 = auVar606._12_4_;
      auVar606 = NEON_ext(auVar475,auVar419,8,1);
      fVar273 = (auVar525._4_4_ * fVar367 + fVar666 * fVar311 + fVar535 * fVar274) * _DAT_03cabc00;
      fVar275 = (auVar474._4_4_ * fVar527 + fVar680 * fVar266 + fVar536 * fVar274) * _UNK_03cabc04;
      fVar310 = (auVar474._4_4_ * fVar529 + fVar560 * fVar267 + fVar657 * fVar274) * _UNK_03cabc08;
      fVar312 = (auVar474._4_4_ * fVar735 + fVar562 * fVar269 + fVar665 * auVar573._4_4_) *
                _UNK_03cabc0c;
      fVar368 = fVar231 * auVar525._4_4_ - fVar488 * fVar274;
      fVar690 = fVar231 * auVar474._4_4_ - auVar473._0_4_ * fVar274;
      fVar696 = fVar231 * auVar474._4_4_ - auVar473._0_4_ * fVar274;
      fVar313 = auVar606._0_4_;
      fVar314 = auVar606._4_4_;
      fVar530 = auVar606._8_4_;
      fVar485 = auVar606._12_4_;
      fVar486 = fVar274 * fVar313 - fVar231 * fVar311;
      fVar729 = fVar274 * fVar314 - fVar231 * fVar266;
      fVar229 = fVar274 * fVar530 - fVar231 * fVar267;
      fVar274 = auVar473._0_4_ * fVar273;
      fVar487 = fVar488 * fVar275;
      fVar692 = auVar573._0_4_ * fVar310;
      fVar276 = fVar231 * fVar312;
      fVar230 = fVar488 * fVar311 - fVar313 * auVar525._4_4_;
      fVar266 = auVar473._0_4_ * fVar266 - fVar314 * auVar474._4_4_;
      fVar267 = auVar473._0_4_ * fVar267 - fVar530 * auVar474._4_4_;
      auVar131._0_4_ = fVar274 + fVar487;
      auVar131._4_4_ = fVar692 + fVar276;
      auVar131._8_4_ = fVar274 + fVar487;
      auVar131._12_4_ = fVar692 + fVar276;
      auVar606 = NEON_ext(auVar131,auVar131,4,1);
      auVar132._0_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar132._4_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar132._8_4_ = auVar606._0_4_ + auVar606._4_4_;
      auVar132._12_4_ = auVar606._8_4_ + auVar606._12_4_;
      auVar606 = NEON_frecpe(auVar132,4);
      auVar564 = NEON_frecps(auVar606,auVar132,4);
      iVar721 = -(uint)(auVar132._0_4_ == 0.0);
      iVar726 = -(uint)(auVar132._4_4_ == 0.0);
      iVar727 = -(uint)(auVar132._8_4_ == 0.0);
      iVar728 = -(uint)(auVar132._12_4_ == 0.0);
      auVar307._0_4_ = auVar606._0_4_ * auVar564._0_4_;
      auVar307._4_4_ = auVar606._4_4_ * auVar564._4_4_;
      auVar307._8_4_ = auVar606._8_4_ * auVar564._8_4_;
      auVar307._12_4_ = auVar606._12_4_ * auVar564._12_4_;
      fVar528 = (float)((ulong)_DAT_03cac210 >> 0x20);
      auVar606 = NEON_frecps(auVar307,auVar132,4);
      bVar541 = ~(byte)iVar721;
      bVar544 = ~(byte)((uint)iVar721 >> 8);
      bVar545 = ~(byte)((uint)iVar721 >> 0x10);
      bVar546 = ~(byte)((uint)iVar721 >> 0x18);
      bVar547 = ~(byte)iVar726;
      bVar548 = ~(byte)((uint)iVar726 >> 8);
      bVar549 = ~(byte)((uint)iVar726 >> 0x10);
      bVar550 = ~(byte)((uint)iVar726 >> 0x18);
      bVar551 = ~(byte)iVar727;
      bVar552 = ~(byte)((uint)iVar727 >> 8);
      bVar553 = ~(byte)((uint)iVar727 >> 0x10);
      bVar554 = ~(byte)((uint)iVar727 >> 0x18);
      bVar555 = ~(byte)iVar728;
      bVar556 = ~(byte)((uint)iVar728 >> 8);
      bVar557 = ~(byte)((uint)iVar728 >> 0x10);
      bVar558 = ~(byte)((uint)iVar728 >> 0x18);
      fVar692 = auVar307._0_4_ * auVar606._0_4_;
      fVar276 = auVar307._4_4_ * auVar606._4_4_;
      fVar311 = auVar307._8_4_ * auVar606._8_4_;
      fVar487 = auVar307._12_4_ * auVar606._12_4_;
      fVar273 = fVar273 * fVar692;
      fVar275 = fVar275 * fVar276;
      fVar310 = fVar310 * fVar311;
      fVar312 = fVar312 * fVar487;
      auVar308[0] = SUB41(fVar273,0) & bVar541;
      auVar308[1] = (byte)((uint)fVar273 >> 8) & bVar544;
      auVar308[2] = (byte)((uint)fVar273 >> 0x10) & bVar545;
      auVar308[3] = (byte)((uint)fVar273 >> 0x18) & bVar546;
      auVar308[4] = SUB41(fVar275,0) & bVar547;
      auVar308[5] = (byte)((uint)fVar275 >> 8) & bVar548;
      auVar308[6] = (byte)((uint)fVar275 >> 0x10) & bVar549;
      auVar308[7] = (byte)((uint)fVar275 >> 0x18) & bVar550;
      auVar308[8] = SUB41(fVar310,0) & bVar551;
      auVar308[9] = (byte)((uint)fVar310 >> 8) & bVar552;
      auVar308[10] = (byte)((uint)fVar310 >> 0x10) & bVar553;
      auVar308[0xb] = (byte)((uint)fVar310 >> 0x18) & bVar554;
      auVar308[0xc] = SUB41(fVar312,0) & bVar555;
      auVar308[0xd] = (byte)((uint)fVar312 >> 8) & bVar556;
      auVar308[0xe] = (byte)((uint)fVar312 >> 0x10) & bVar557;
      auVar308[0xf] = (byte)((uint)fVar312 >> 0x18) & bVar558;
      fVar274 = (fVar488 * fVar367 + fVar666 * fVar313 + fVar535 * fVar231) * (float)_DAT_03cac210 *
                fVar692;
      fVar273 = (auVar473._0_4_ * fVar527 + fVar680 * fVar314 + fVar536 * fVar231) * fVar528 *
                fVar276;
      fVar231 = (auVar473._0_4_ * fVar529 + fVar560 * fVar530 + fVar657 * fVar231) *
                (float)_UNK_03cac218 * fVar311;
      fVar275 = (auVar473._0_4_ * fVar735 + fVar562 * fVar485 + fVar665 * auVar573._0_4_) *
                (float)((ulong)_UNK_03cac218 >> 0x20) * fVar487;
      auVar358[0] = SUB41(fVar274,0) & bVar541;
      auVar358[1] = (byte)((uint)fVar274 >> 8) & bVar544;
      auVar358[2] = (byte)((uint)fVar274 >> 0x10) & bVar545;
      auVar358[3] = (byte)((uint)fVar274 >> 0x18) & bVar546;
      auVar358[4] = SUB41(fVar273,0) & bVar547;
      auVar358[5] = (byte)((uint)fVar273 >> 8) & bVar548;
      auVar358[6] = (byte)((uint)fVar273 >> 0x10) & bVar549;
      auVar358[7] = (byte)((uint)fVar273 >> 0x18) & bVar550;
      auVar358[8] = SUB41(fVar231,0) & bVar551;
      auVar358[9] = (byte)((uint)fVar231 >> 8) & bVar552;
      auVar358[10] = (byte)((uint)fVar231 >> 0x10) & bVar553;
      auVar358[0xb] = (byte)((uint)fVar231 >> 0x18) & bVar554;
      auVar358[0xc] = SUB41(fVar275,0) & bVar555;
      auVar358[0xd] = (byte)((uint)fVar275 >> 8) & bVar556;
      auVar358[0xe] = (byte)((uint)fVar275 >> 0x10) & bVar557;
      auVar358[0xf] = (byte)((uint)fVar275 >> 0x18) & bVar558;
      fVar274 = (fVar490 * fVar486 + fVar368 * fVar531 + fVar230 * fVar228) * _DAT_03cabc00 *
                fVar692;
      fVar231 = (auVar474._12_4_ * fVar729 + fVar690 * fVar532 + fVar266 * fVar228) * _UNK_03cabc04
                * fVar276;
      fVar228 = (auVar474._12_4_ * fVar229 + fVar696 * fVar533 + fVar267 * fVar228) * _UNK_03cabc08
                * fVar311;
      fVar487 = (auVar474._12_4_ * (auVar573._4_4_ * fVar485 - auVar573._0_4_ * fVar269) +
                 (auVar573._0_4_ * auVar474._4_4_ - auVar473._0_4_ * auVar573._4_4_) * fVar736 +
                (auVar473._0_4_ * fVar269 - fVar485 * auVar474._4_4_) * auVar573._12_4_) *
                _UNK_03cabc0c * fVar487;
      auVar264[0] = SUB41(fVar274,0) & bVar541;
      auVar264[1] = (byte)((uint)fVar274 >> 8) & bVar544;
      auVar264[2] = (byte)((uint)fVar274 >> 0x10) & bVar545;
      auVar264[3] = (byte)((uint)fVar274 >> 0x18) & bVar546;
      auVar264[4] = SUB41(fVar231,0) & bVar547;
      auVar264[5] = (byte)((uint)fVar231 >> 8) & bVar548;
      auVar264[6] = (byte)((uint)fVar231 >> 0x10) & bVar549;
      auVar264[7] = (byte)((uint)fVar231 >> 0x18) & bVar550;
      auVar264[8] = SUB41(fVar228,0) & bVar551;
      auVar264[9] = (byte)((uint)fVar228 >> 8) & bVar552;
      auVar264[10] = (byte)((uint)fVar228 >> 0x10) & bVar553;
      auVar264[0xb] = (byte)((uint)fVar228 >> 0x18) & bVar554;
      auVar264[0xc] = SUB41(fVar487,0) & bVar555;
      auVar264[0xd] = (byte)((uint)fVar487 >> 8) & bVar556;
      auVar264[0xe] = (byte)((uint)fVar487 >> 0x10) & bVar557;
      auVar264[0xf] = (byte)((uint)fVar487 >> 0x18) & bVar558;
      fVar692 = (fVar489 * fVar486 + fVar368 * fVar270 + fVar230 * fVar227) * (float)_DAT_03cac210 *
                fVar692;
      fVar276 = (fVar424 * fVar729 + fVar690 * fVar272 + fVar266 * fVar227) * fVar528 * fVar276;
      fVar311 = (fVar424 * fVar229 + fVar696 * fVar366 + fVar267 * fVar227) * (float)_UNK_03cac218 *
                fVar311;
      auVar373[0] = SUB41(fVar692,0) & bVar541;
      auVar373[1] = (byte)((uint)fVar692 >> 8) & bVar544;
      auVar373[2] = (byte)((uint)fVar692 >> 0x10) & bVar545;
      auVar373[3] = (byte)((uint)fVar692 >> 0x18) & bVar546;
      auVar373[4] = SUB41(fVar276,0) & bVar547;
      auVar373[5] = (byte)((uint)fVar276 >> 8) & bVar548;
      auVar373[6] = (byte)((uint)fVar276 >> 0x10) & bVar549;
      auVar373[7] = (byte)((uint)fVar276 >> 0x18) & bVar550;
      auVar373[8] = SUB41(fVar311,0) & bVar551;
      auVar373[9] = (byte)((uint)fVar311 >> 8) & bVar552;
      auVar373[10] = (byte)((uint)fVar311 >> 0x10) & bVar553;
      auVar373[0xb] = (byte)((uint)fVar311 >> 0x18) & bVar554;
    }
    fVar274 = auVar308._0_4_ * fVar268 + auVar358._0_4_ * fVar271 + auVar264._0_4_ * fVar315 +
              auVar373._0_4_;
    fVar228 = auVar308._4_4_ * fVar268 + auVar358._4_4_ * fVar271 + auVar264._4_4_ * fVar315 +
              auVar373._4_4_;
    fVar231 = auVar308._8_4_ * fVar268 + auVar358._8_4_ * fVar271 + auVar264._8_4_ * fVar315 +
              auVar373._8_4_;
    fVar315 = auVar308._12_4_ * fVar268 + auVar358._12_4_ * fVar271 + auVar264._12_4_ * fVar315 +
              0.0;
    auVar133._0_4_ = fVar274 * fVar274 + fVar228 * fVar228;
    auVar133._4_4_ = fVar231 * fVar231 + fVar315 * fVar315;
    auVar133._8_4_ = fVar274 * fVar274 + fVar228 * fVar228;
    auVar133._12_4_ = fVar231 * fVar231 + fVar315 * fVar315;
    auVar606 = NEON_ext(auVar133,auVar133,4,1);
    auVar134._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar134._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar134._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar134._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar606 = NEON_frsqrte(auVar134,4);
    auVar359._0_4_ = auVar134._0_4_ * auVar606._0_4_;
    auVar359._4_4_ = auVar134._4_4_ * auVar606._4_4_;
    auVar359._8_4_ = auVar134._8_4_ * auVar606._8_4_;
    auVar359._12_4_ = auVar134._12_4_ * auVar606._12_4_;
    auVar564 = NEON_frsqrts(auVar606,auVar359,4);
    auVar309._0_4_ = auVar606._0_4_ * auVar564._0_4_;
    auVar309._4_4_ = auVar606._4_4_ * auVar564._4_4_;
    auVar309._8_4_ = auVar606._8_4_ * auVar564._8_4_;
    auVar309._12_4_ = auVar606._12_4_ * auVar564._12_4_;
    auVar360._0_4_ = auVar134._0_4_ * auVar309._0_4_;
    auVar360._4_4_ = auVar134._4_4_ * auVar309._4_4_;
    auVar360._8_4_ = auVar134._8_4_ * auVar309._8_4_;
    auVar360._12_4_ = auVar134._12_4_ * auVar309._12_4_;
    iVar721 = -(uint)(auVar134._0_4_ == 0.0);
    iVar726 = -(uint)(auVar134._4_4_ == 0.0);
    iVar727 = -(uint)(auVar134._8_4_ == 0.0);
    iVar728 = -(uint)(auVar134._12_4_ == 0.0);
    auVar606 = NEON_frsqrts(auVar309,auVar360,4);
    fVar274 = fVar274 * auVar309._0_4_ * auVar606._0_4_;
    fVar228 = fVar228 * auVar309._4_4_ * auVar606._4_4_;
    fVar231 = fVar231 * auVar309._8_4_ * auVar606._8_4_;
    fVar315 = fVar315 * auVar309._12_4_ * auVar606._12_4_;
    fVar227 = param_3._0_4_ * 0.5;
    fVar274 = (float)CONCAT13((byte)((uint)fVar274 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                              CONCAT12((byte)((uint)fVar274 >> 0x10) &
                                       ~(byte)((uint)iVar721 >> 0x10),
                                       CONCAT11((byte)((uint)fVar274 >> 8) &
                                                ~(byte)((uint)iVar721 >> 8),
                                                SUB41(fVar274,0) & ~(byte)iVar721)));
    auVar234._0_8_ =
         CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                  CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                           CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                    CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar274))));
    auVar234[8] = SUB41(fVar231,0) & ~(byte)iVar727;
    auVar234[9] = (byte)((uint)fVar231 >> 8) & ~(byte)((uint)iVar727 >> 8);
    auVar234[10] = (byte)((uint)fVar231 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
    auVar234[0xb] = (byte)((uint)fVar231 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
    auVar265[0xc] = SUB41(fVar315,0) & ~(byte)iVar728;
    auVar265._0_12_ = auVar234;
    auVar265[0xd] = (byte)((uint)fVar315 >> 8) & ~(byte)((uint)iVar728 >> 8);
    auVar265[0xe] = (byte)((uint)fVar315 >> 0x10) & ~(byte)((uint)iVar728 >> 0x10);
    auVar265[0xf] = (byte)((uint)fVar315 >> 0x18) & ~(byte)((uint)iVar728 >> 0x18);
    fVar268 = fVar227 + (float)_DAT_03caa8d0;
    fVar271 = fVar227 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
    fVar273 = fVar227 + (float)_UNK_03caa8d8;
    fVar275 = fVar227 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
    fVar228 = (float)((ulong)auVar234._0_8_ >> 0x20);
    fVar315 = auVar234._8_4_;
    fVar231 = auVar265._12_4_ * auVar265._12_4_;
    auVar135._0_4_ = fVar274 * fVar274 + fVar228 * fVar228;
    auVar135._4_4_ = fVar315 * fVar315 + fVar231;
    auVar135._8_4_ = fVar274 * fVar274 + fVar228 * fVar228;
    auVar135._12_4_ = fVar315 * fVar315 + fVar231;
    auVar606 = NEON_ext(auVar135,auVar135,4,1);
    auVar136._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar136._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar136._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar136._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar391._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar268) & 0x80000000 ^ 0xbf000000) + fVar268 * 0.15915494);
    auVar391._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar271) & 0x80000000 ^ 0xbf000000) + fVar271 * 0.15915494);
    auVar391._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar273) & 0x80000000 ^ 0xbf000000) + fVar273 * 0.15915494);
    auVar391._12_4_ =
         (int)((float)(-(uint)(0.0 <= fVar275) & 0x80000000 ^ 0xbf000000) + fVar275 * 0.15915494);
    auVar606 = NEON_scvtf(auVar391,4);
    fVar268 = fVar268 + auVar606._0_4_ * -6.2831855;
    fVar271 = fVar271 + auVar606._4_4_ * -6.2831855;
    fVar273 = fVar273 + auVar606._8_4_ * -6.2831855;
    fVar275 = fVar275 + auVar606._12_4_ * -6.2831855;
    fVar268 = (float)((uint)fVar268 ^
                     ((uint)fVar268 ^ (uint)(-3.1415927 - fVar268)) & -(uint)(fVar268 < -1.5707964))
    ;
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(-3.1415927 - fVar271)) & -(uint)(fVar271 < -1.5707964))
    ;
    fVar273 = (float)((uint)fVar273 ^
                     ((uint)fVar273 ^ (uint)(-3.1415927 - fVar273)) & -(uint)(fVar273 < -1.5707964))
    ;
    fVar275 = (float)((uint)fVar275 ^
                     ((uint)fVar275 ^ (uint)(-3.1415927 - fVar275)) & -(uint)(fVar275 < -1.5707964))
    ;
    fVar268 = (float)((uint)fVar268 ^
                     ((uint)fVar268 ^ (uint)(3.1415927 - fVar268)) & -(uint)(1.5707964 < fVar268));
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(3.1415927 - fVar271)) & -(uint)(1.5707964 < fVar271));
    fVar273 = (float)((uint)fVar273 ^
                     ((uint)fVar273 ^ (uint)(3.1415927 - fVar273)) & -(uint)(1.5707964 < fVar273));
    fVar275 = (float)((uint)fVar275 ^
                     ((uint)fVar275 ^ (uint)(3.1415927 - fVar275)) & -(uint)(1.5707964 < fVar275));
    fVar231 = fVar268 * fVar268;
    fVar310 = fVar271 * fVar271;
    fVar312 = fVar273 * fVar273;
    fVar368 = fVar275 * fVar275;
    auVar476._0_4_ =
         local_120 +
         fVar231 * (fVar231 * (fVar231 * (fVar231 * (fVar231 * -2.5052108e-08 + 2.7557319e-06) +
                                         -0.0001984127) + 0.008333334) + -0.16666667);
    auVar476._4_4_ =
         fStack_11c +
         fVar310 * (fVar310 * (fVar310 * (fVar310 * (fVar310 * -2.5052108e-08 + 2.7557319e-06) +
                                         -0.0001984127) + 0.008333334) + -0.16666667);
    auVar476._8_4_ =
         fStack_118 +
         fVar312 * (fVar312 * (fVar312 * (fVar312 * (fVar312 * -2.5052108e-08 + 2.7557319e-06) +
                                         -0.0001984127) + 0.008333334) + -0.16666667);
    auVar476._12_4_ =
         fStack_114 +
         fVar368 * (fVar368 * (fVar368 * (fVar368 * (fVar368 * -2.5052108e-08 + 2.7557319e-06) +
                                         -0.0001984127) + 0.008333334) + -0.16666667);
    fVar268 = fVar268 * auVar476._0_4_;
    fVar271 = fVar271 * auVar476._4_4_;
    fVar273 = fVar273 * auVar476._8_4_;
    fVar231 = fVar275 * auVar476._12_4_;
    auVar606 = NEON_frsqrte(auVar136,4);
    auVar392._0_4_ = auVar136._0_4_ * auVar606._0_4_;
    auVar392._4_4_ = auVar136._4_4_ * auVar606._4_4_;
    auVar392._8_4_ = auVar136._8_4_ * auVar606._8_4_;
    auVar392._12_4_ = auVar136._12_4_ * auVar606._12_4_;
    auVar564 = NEON_frsqrts(auVar606,auVar392,4);
    auVar361._0_4_ = auVar606._0_4_ * auVar564._0_4_;
    auVar361._4_4_ = auVar606._4_4_ * auVar564._4_4_;
    auVar361._8_4_ = auVar606._8_4_ * auVar564._8_4_;
    auVar361._12_4_ = auVar606._12_4_ * auVar564._12_4_;
    auVar393._0_4_ = auVar136._0_4_ * auVar361._0_4_;
    auVar393._4_4_ = auVar136._4_4_ * auVar361._4_4_;
    auVar393._8_4_ = auVar136._8_4_ * auVar361._8_4_;
    auVar393._12_4_ = auVar136._12_4_ * auVar361._12_4_;
    auVar606 = NEON_frsqrts(auVar361,auVar393,4);
    fVar274 = fVar274 * auVar361._0_4_ * auVar606._0_4_;
    fVar228 = fVar228 * auVar361._4_4_ * auVar606._4_4_;
    fVar315 = fVar315 * auVar361._8_4_ * auVar606._8_4_;
    iVar721 = -(uint)(auVar136._0_4_ == 0.0);
    iVar726 = -(uint)(auVar136._4_4_ == 0.0);
    iVar727 = -(uint)(auVar136._8_4_ == 0.0);
    fVar274 = (float)CONCAT13((byte)((uint)fVar274 >> 0x18) & ~(byte)((uint)iVar721 >> 0x18),
                              CONCAT12((byte)((uint)fVar274 >> 0x10) &
                                       ~(byte)((uint)iVar721 >> 0x10),
                                       CONCAT11((byte)((uint)fVar274 >> 8) &
                                                ~(byte)((uint)iVar721 >> 8),
                                                SUB41(fVar274,0) & ~(byte)iVar721)));
    auVar235._0_8_ =
         CONCAT17((byte)((uint)fVar228 >> 0x18) & ~(byte)((uint)iVar726 >> 0x18),
                  CONCAT16((byte)((uint)fVar228 >> 0x10) & ~(byte)((uint)iVar726 >> 0x10),
                           CONCAT15((byte)((uint)fVar228 >> 8) & ~(byte)((uint)iVar726 >> 8),
                                    CONCAT14(SUB41(fVar228,0) & ~(byte)iVar726,fVar274))));
    auVar235[8] = SUB41(fVar315,0) & ~(byte)iVar727;
    auVar235[9] = (byte)((uint)fVar315 >> 8) & ~(byte)((uint)iVar727 >> 8);
    auVar235[10] = (byte)((uint)fVar315 >> 0x10) & ~(byte)((uint)iVar727 >> 0x10);
    auVar235[0xb] = (byte)((uint)fVar315 >> 0x18) & ~(byte)((uint)iVar727 >> 0x18);
    fStack_e8 = auVar235._8_4_;
    fStack_ec = (float)((ulong)auVar235._0_8_ >> 0x20);
    lVar60 = nn::os::GetCurrentThread();
    do {
      lVar61 = *plVar1;
      lVar63 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar61;
        *(long *)(param_6 + 0x458) = lVar63;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      while ((lVar61 != 0 && (lVar60 != lVar61))) {
        nn::os::WaitLightEvent(pLVar2);
        do {
          lVar61 = *plVar1;
          lVar63 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar61;
            *(long *)(param_6 + 0x458) = lVar63;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      do {
        lVar4 = *plVar1;
        if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto LAB_00d16c90;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar61;
          *(long *)(param_6 + 0x454) = lVar63 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
LAB_00d16c90:
      lVar61 = lVar4;
      lVar63 = *(long *)(param_6 + 0x458);
    } while (!bVar57);
    iVar721 = -(uint)(ABS(fVar227) == INFINITY);
    iVar726 = -(uint)(ABS(fVar227) == INFINITY);
    iVar727 = -(uint)(ABS(fVar227) == INFINITY);
    iVar728 = -(uint)(ABS(fVar227) == INFINITY);
    auVar52._4_4_ = fVar271;
    auVar52._0_4_ = fVar268;
    auVar52._8_4_ = fVar273;
    auVar52._12_4_ =
         (uint)fVar231 ^ ((uint)fVar231 ^ (uint)fStack_114) & -(uint)(fVar275 == 1.5707964);
    auVar219._8_4_ = 0x7fc00000;
    auVar219._0_8_ = 0x7fc000007fc00000;
    auVar219._12_4_ = 0x7fc00000;
    auVar218[0] = ~(byte)iVar721;
    auVar218[1] = ~(byte)((uint)iVar721 >> 8);
    auVar218[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar218[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar218[4] = ~(byte)iVar726;
    auVar218[5] = ~(byte)((uint)iVar726 >> 8);
    auVar218[6] = ~(byte)((uint)iVar726 >> 0x10);
    auVar218[7] = ~(byte)((uint)iVar726 >> 0x18);
    auVar218[8] = ~(byte)iVar727;
    auVar218[9] = ~(byte)((uint)iVar727 >> 8);
    auVar218[10] = ~(byte)((uint)iVar727 >> 0x10);
    auVar218[0xb] = ~(byte)((uint)iVar727 >> 0x18);
    auVar218[0xc] = ~(byte)iVar728;
    auVar218[0xd] = ~(byte)((uint)iVar728 >> 8);
    auVar218[0xe] = ~(byte)((uint)iVar728 >> 0x10);
    auVar218[0xf] = ~(byte)((uint)iVar728 >> 0x18);
    auVar219 = auVar219 ^ (auVar219 ^ auVar52) & auVar218;
    lVar60 = *(long *)(param_6 + 0x248) +
             (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
    auVar223._0_4_ = auVar219._0_4_ * fVar274;
    fStack_ec = auVar219._4_4_ * fStack_ec;
    auVar222._8_4_ = auVar219._8_4_ * fStack_e8;
    auVar543 = *(undefined1 (*) [12])(lVar60 + 0x10);
    fStack_e4 = (float)((ulong)*(undefined8 *)(lVar60 + 0x18) >> 0x20);
    do {
      lVar60 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x458) = lVar61;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar63 = *plVar1;
      lVar4 = *(long *)(param_6 + 0x458);
      if (lVar63 != lVar60 || lVar4 != lVar61) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d16d2c;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x454) = lVar61 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d16d2c:
    if (!bVar57) {
      do {
        lVar60 = *plVar1;
        lVar61 = *(long *)(param_6 + 0x458);
        if (lVar60 != lVar63 || lVar61 != lVar4) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d16fa0;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar63;
          *(long *)(param_6 + 0x454) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
joined_r0x00d16fa0:
      if (!bVar57) {
        do {
          lVar63 = *plVar1;
          lVar4 = *(long *)(param_6 + 0x458);
          if (lVar63 != lVar60 || lVar4 != lVar61) {
            bVar57 = false;
            ClearExclusiveLocal();
            lVar60 = lVar63;
            lVar61 = lVar4;
            goto joined_r0x00d16fa0;
          }
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x454) = lVar61 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar57 = true;
        lVar60 = lVar63;
        lVar61 = lVar4;
        goto joined_r0x00d16fa0;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    auVar49._12_4_ = fStack_e4;
    auVar49._0_12_ = auVar543;
    uVar149 = auVar543._8_4_;
    auVar220._4_4_ = uVar149;
    auVar220._0_4_ = uVar149;
    auVar220._8_4_ = uVar149;
    auVar220._12_4_ = uVar149;
    auVar606 = NEON_ext(auVar220,auVar49,0xc,1);
    uVar149 = auVar543._4_4_;
    auVar221._4_4_ = uVar149;
    auVar221._0_4_ = uVar149;
    auVar221._8_4_ = uVar149;
    auVar221._12_4_ = uVar149;
    NEON_ext(auVar221,auVar606,0xc,1);
    auVar222._4_4_ = auVar222._8_4_;
    auVar222._0_4_ = auVar222._8_4_;
    auVar222._12_4_ = auVar222._8_4_;
    auVar223._4_12_ = auVar222._4_12_;
    auVar225._0_8_ = auVar223._0_8_;
    auVar225._8_4_ = fStack_ec;
    auVar225._12_4_ = auVar222._8_4_;
    auVar224._8_8_ = auVar225._8_8_;
    auVar224._4_4_ = auVar222._8_4_;
    auVar224._0_4_ = auVar223._0_4_;
    auVar226._0_12_ = auVar224._0_12_;
    auVar226._12_4_ = auVar222._8_4_;
    auVar606 = NEON_ext(auVar226,auVar226,8,1);
    auVar477._4_12_ = auVar476._4_12_;
    auVar477._0_4_ = auVar606._0_4_;
    auVar479._12_4_ = auVar476._12_4_;
    auVar479._0_8_ = auVar477._0_8_;
    auVar479._8_4_ = auVar606._8_4_;
    auVar478._8_8_ = auVar479._8_8_;
    auVar478._4_4_ = auVar223._0_4_;
    auVar478._0_4_ = auVar606._0_4_;
    auVar480._0_12_ = auVar478._0_12_;
    auVar480._12_4_ = fStack_ec;
    auVar606 = NEON_ext(auVar480,auVar606,8,1);
    NEON_ext(auVar606,auVar606,0xc,1);
    FUN_00d172e8(param_6,param_7);
  }
  if (param_4 < 1.0) {
    lVar60 = nn::os::GetCurrentThread();
    do {
      lVar61 = *plVar1;
      lVar63 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar61;
        *(long *)(param_6 + 0x458) = lVar63;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      while ((lVar61 != 0 && (lVar60 != lVar61))) {
        nn::os::WaitLightEvent(pLVar2);
        do {
          lVar61 = *plVar1;
          lVar63 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar61;
            *(long *)(param_6 + 0x458) = lVar63;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      do {
        lVar4 = *plVar1;
        if (lVar4 != lVar61 || *(long *)(param_6 + 0x458) != lVar63) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto LAB_00d15bbc;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar61;
          *(long *)(param_6 + 0x454) = lVar63 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
LAB_00d15bbc:
      lVar61 = lVar4;
      lVar63 = *(long *)(param_6 + 0x458);
    } while (!bVar57);
    lVar60 = *(long *)(param_6 + 0x248) +
             (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar64 * 2) * 0x30;
    uVar492 = *(undefined8 *)(lVar60 + 0x10);
    uVar542 = *(undefined8 *)(lVar60 + 0x18);
    do {
      lVar60 = *plVar1;
      lVar64 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x458) = lVar64;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar61 = *plVar1;
      lVar63 = *(long *)(param_6 + 0x458);
      if (lVar61 != lVar60 || lVar63 != lVar64) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d15c20;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x454) = lVar64 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d15c20:
    if (!bVar57) {
      do {
        lVar60 = *plVar1;
        lVar64 = *(long *)(param_6 + 0x458);
        if (lVar60 != lVar61 || lVar64 != lVar63) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d1679c;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar61;
          *(long *)(param_6 + 0x454) = lVar63 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
joined_r0x00d1679c:
      if (!bVar57) {
        do {
          lVar61 = *plVar1;
          lVar63 = *(long *)(param_6 + 0x458);
          if (lVar61 != lVar60 || lVar63 != lVar64) {
            bVar57 = false;
            ClearExclusiveLocal();
            lVar60 = lVar61;
            lVar64 = lVar63;
            goto joined_r0x00d1679c;
          }
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x454) = lVar64 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar57 = true;
        lVar60 = lVar61;
        lVar64 = lVar63;
        goto joined_r0x00d1679c;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    fVar486 = (float)uVar27;
    fVar488 = (float)((ulong)uVar27 >> 0x20);
    fVar485 = (float)uVar26;
    fVar424 = (float)((ulong)uVar26 >> 0x20);
    fVar268 = (float)uVar542;
    fVar273 = (float)((ulong)uVar542 >> 0x20);
    fVar227 = (float)uVar492;
    fVar315 = (float)((ulong)uVar492 >> 0x20);
    fVar274 = fVar485 * fVar227;
    fVar228 = fVar424 * fVar315;
    fVar231 = fVar486 * fVar268;
    fVar271 = fVar488 * fVar273;
    auVar126._0_4_ = fVar274 + fVar228;
    auVar126._4_4_ = fVar231 + fVar271;
    auVar126._8_4_ = fVar274 + fVar228;
    auVar126._12_4_ = fVar231 + fVar271;
    auVar606 = NEON_ext(auVar126,auVar126,4,1);
    auVar127._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar127._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar127._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar127._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar606 = NEON_fmax(auVar127,auVar326,4);
    auVar564 = NEON_fmin(auVar606,auVar561,4);
    auVar214._0_4_ = -(uint)(auVar564._0_4_ < 0.0);
    auVar214._4_4_ = -(uint)(auVar564._4_4_ < 0.0);
    auVar214._8_4_ = -(uint)(auVar564._8_4_ < 0.0);
    auVar214._12_4_ = -(uint)(auVar564._12_4_ < 0.0);
    auVar606 = auVar561 ^ (auVar561 ^ auVar326) & auVar214;
    fVar274 = auVar564._0_4_ * auVar606._0_4_;
    fVar228 = auVar564._4_4_ * auVar606._4_4_;
    fVar231 = auVar564._8_4_ * auVar606._8_4_;
    fVar271 = auVar564._12_4_ * auVar606._12_4_;
    fVar227 = fVar227 * auVar606._0_4_;
    fVar315 = fVar315 * auVar606._4_4_;
    fVar268 = fVar268 * auVar606._8_4_;
    fVar273 = fVar273 * auVar606._12_4_;
    iVar721 = -(uint)(fVar274 == -INFINITY);
    iVar726 = -(uint)(fVar231 == -INFINITY);
    iVar727 = -(uint)(fVar271 == -INFINITY);
    auVar466[0] = ~(byte)iVar721;
    auVar466[1] = ~(byte)((uint)iVar721 >> 8);
    auVar466[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar466[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar466._4_3_ = 0;
    auVar466[7] = ~(byte)(-(uint)(fVar228 == -INFINITY) >> 0x18);
    auVar466[8] = ~(byte)iVar726;
    auVar466[9] = ~(byte)((uint)iVar726 >> 8);
    auVar466[10] = ~(byte)((uint)iVar726 >> 0x10);
    auVar466[0xb] = ~(byte)((uint)iVar726 >> 0x18);
    auVar466[0xc] = ~(byte)iVar727;
    auVar466[0xd] = ~(byte)((uint)iVar727 >> 8);
    auVar466[0xe] = ~(byte)((uint)iVar727 >> 0x10);
    auVar466[0xf] = ~(byte)((uint)iVar727 >> 0x18);
    fVar275 = SQRT(local_120 - fVar274 * fVar274);
    fVar310 = SQRT(fStack_11c - fVar228 * fVar228);
    fVar312 = SQRT(fStack_118 - fVar231 * fVar231);
    fVar368 = SQRT(fStack_114 - fVar271 * fVar271);
    auVar676._0_4_ = (int)fVar275 >> 0x1f;
    auVar676._4_4_ = (int)fVar310 >> 0x1f;
    auVar676._8_4_ = (int)fVar312 >> 0x1f;
    auVar676._12_4_ = (int)fVar368 >> 0x1f;
    uVar491 = -(uint)(fVar275 == INFINITY);
    iVar534 = -(uint)(fVar312 == INFINITY);
    iVar537 = -(uint)(fVar368 == INFINITY);
    auVar522[0] = ~(byte)uVar491;
    auVar522[1] = ~(byte)(uVar491 >> 8);
    auVar522[2] = ~(byte)(uVar491 >> 0x10);
    auVar522[3] = ~(byte)(uVar491 >> 0x18);
    auVar522._4_3_ = 0;
    bVar555 = (byte)(-(uint)(fVar310 == INFINITY) >> 0x18);
    auVar522[7] = ~bVar555;
    auVar522[8] = ~(byte)iVar534;
    bVar556 = (byte)((uint)iVar534 >> 8);
    auVar522[9] = ~bVar556;
    bVar557 = (byte)((uint)iVar534 >> 0x10);
    auVar522[10] = ~bVar557;
    bVar558 = (byte)((uint)iVar534 >> 0x18);
    auVar522[0xb] = ~bVar558;
    auVar522[0xc] = ~(byte)iVar537;
    bVar538 = (byte)((uint)iVar537 >> 8);
    auVar522[0xd] = ~bVar538;
    bVar539 = (byte)((uint)iVar537 >> 0x10);
    bVar540 = (byte)((uint)iVar537 >> 0x18);
    auVar522[0xe] = ~bVar539;
    auVar522[0xf] = ~bVar540;
    auVar602._0_4_ = -(uint)(0.0 <= fVar275 / fVar274);
    auVar602._4_4_ = -(uint)(0.0 <= fVar310 / fVar228);
    auVar602._8_4_ = -(uint)(0.0 <= fVar312 / fVar231);
    auVar602._12_4_ = -(uint)(0.0 <= fVar368 / fVar271);
    auVar571._0_4_ = ABS(fVar275 / fVar274);
    auVar571._4_4_ = ABS(fVar310 / fVar228);
    auVar571._8_4_ = ABS(fVar312 / fVar231);
    auVar571._12_4_ = ABS(fVar368 / fVar271);
    iVar727 = -(uint)(fVar275 == 0.0);
    iVar728 = -(uint)(fVar312 == 0.0);
    iVar395 = -(uint)(fVar368 == 0.0);
    uVar316 = -(uint)(fVar275 == -0.0);
    iVar721 = -(uint)(fVar312 == -0.0);
    iVar726 = -(uint)(fVar368 == -0.0);
    auVar611._0_4_ = -(uint)(auVar571._0_4_ <= 0.41421354);
    auVar611._4_4_ = -(uint)(auVar571._4_4_ <= 0.41421354);
    auVar611._8_4_ = -(uint)(auVar571._8_4_ <= 0.41421354);
    auVar611._12_4_ = -(uint)(auVar571._12_4_ <= 0.41421354);
    bVar547 = (byte)(uVar316 >> 0x18);
    bVar548 = (byte)(-(uint)(fVar310 == -0.0) >> 0x18);
    bVar549 = (byte)((uint)iVar721 >> 8);
    bVar550 = (byte)((uint)iVar721 >> 0x10);
    bVar551 = (byte)((uint)iVar721 >> 0x18);
    bVar552 = (byte)((uint)iVar726 >> 8);
    bVar553 = (byte)((uint)iVar726 >> 0x10);
    bVar554 = (byte)((uint)iVar726 >> 0x18);
    auVar606 = auVar326 ^ (auVar326 ^ auVar561) & auVar602;
    auVar650._0_4_ = -auVar606._0_4_;
    auVar650._4_4_ = -auVar606._4_4_;
    auVar650._8_4_ = -auVar606._8_4_;
    auVar650._12_4_ = -auVar606._12_4_;
    auVar630._0_4_ = -(uint)(auVar571._0_4_ <= 2.4142137);
    auVar630._4_4_ = -(uint)(auVar571._4_4_ <= 2.4142137);
    auVar630._8_4_ = -(uint)(auVar571._8_4_ <= 2.4142137);
    auVar630._12_4_ = -(uint)(auVar571._12_4_ <= 2.4142137);
    auVar387[0] = ~(byte)iVar727;
    auVar387[1] = ~(byte)((uint)iVar727 >> 8);
    auVar387[2] = ~(byte)((uint)iVar727 >> 0x10);
    auVar387[3] = ~(byte)((uint)iVar727 >> 0x18);
    auVar387._4_3_ = 0;
    auVar387[7] = ~(byte)(-(uint)(fVar310 == 0.0) >> 0x18);
    auVar387[8] = ~(byte)iVar728;
    auVar387[9] = ~(byte)((uint)iVar728 >> 8);
    auVar387[10] = ~(byte)((uint)iVar728 >> 0x10);
    auVar387[0xb] = ~(byte)((uint)iVar728 >> 0x18);
    auVar387[0xc] = ~(byte)iVar395;
    auVar387[0xd] = ~(byte)((uint)iVar395 >> 8);
    auVar387[0xe] = ~(byte)((uint)iVar395 >> 0x10);
    auVar387[0xf] = ~(byte)((uint)iVar395 >> 0x18);
    iVar727 = -(uint)(fVar274 == INFINITY);
    iVar728 = -(uint)(fVar231 == INFINITY);
    iVar395 = -(uint)(fVar271 == INFINITY);
    auVar606 = auVar606 ^ (auVar606 ^ auVar650) & ~auVar630;
    auVar415[0] = ~(byte)iVar727;
    auVar415[1] = ~(byte)((uint)iVar727 >> 8);
    auVar415[2] = ~(byte)((uint)iVar727 >> 0x10);
    auVar415[3] = ~(byte)((uint)iVar727 >> 0x18);
    auVar415._4_3_ = 0;
    auVar415[7] = ~(byte)(-(uint)(fVar228 == INFINITY) >> 0x18);
    auVar415[8] = ~(byte)iVar728;
    auVar415[9] = ~(byte)((uint)iVar728 >> 8);
    auVar415[10] = ~(byte)((uint)iVar728 >> 0x10);
    auVar415[0xb] = ~(byte)((uint)iVar728 >> 0x18);
    auVar415[0xc] = ~(byte)iVar395;
    auVar415[0xd] = ~(byte)((uint)iVar395 >> 8);
    auVar415[0xe] = ~(byte)((uint)iVar395 >> 0x10);
    auVar415[0xf] = ~(byte)((uint)iVar395 >> 0x18);
    auVar651._0_4_ = (auVar571._0_4_ + local_180) / (auVar571._0_4_ + local_120);
    auVar651._4_4_ = (auVar571._4_4_ + fStack_17c) / (auVar571._4_4_ + fStack_11c);
    auVar651._8_4_ = (auVar571._8_4_ + fStack_178) / (auVar571._8_4_ + fStack_118);
    auVar651._12_4_ = (auVar571._12_4_ + fStack_174) / (auVar571._12_4_ + fStack_114);
    auVar564 = NEON_frecpe(auVar571,4);
    auVar595 = NEON_frecps(auVar564,auVar571,4);
    auVar663._0_4_ = auVar564._0_4_ * auVar595._0_4_;
    auVar663._4_4_ = auVar564._4_4_ * auVar595._4_4_;
    auVar663._8_4_ = auVar564._8_4_ * auVar595._8_4_;
    auVar663._12_4_ = auVar564._12_4_ * auVar595._12_4_;
    auVar564 = NEON_frecps(auVar663,auVar571,4);
    auVar664._0_4_ = auVar663._0_4_ * auVar564._0_4_;
    auVar664._4_4_ = auVar663._4_4_ * auVar564._4_4_;
    auVar664._8_4_ = auVar663._8_4_ * auVar564._8_4_;
    auVar664._12_4_ = auVar663._12_4_ * auVar564._12_4_;
    auVar571 = auVar571 ^ (auVar571 ^ auVar651 ^ (auVar651 ^ auVar664) & ~auVar630) & ~auVar611;
    fVar690 = auVar571._0_4_;
    fVar311 = fVar690 * fVar690;
    fVar696 = auVar571._4_4_;
    fVar313 = fVar696 * fVar696;
    fVar487 = auVar571._8_4_;
    fVar314 = fVar487 * fVar487;
    fVar692 = auVar571._12_4_;
    fVar530 = fVar692 * fVar692;
    auVar631._8_4_ = 0xbfc90fdb;
    auVar631._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar631._12_4_ = 0xbfc90fdb;
    auVar652._8_4_ = 0x3f490fdb;
    auVar652._0_8_ = 0x3f490fdb3f490fdb;
    auVar652._12_4_ = 0x3f490fdb;
    auVar631 = auVar631 ^ (auVar631 ^ auVar652) & auVar630;
    fVar276 = (float)CONCAT13(auVar631[3] & ~(byte)((uint)auVar611._0_4_ >> 0x18),
                              CONCAT12(auVar631[2] & ~(byte)((uint)auVar611._0_4_ >> 0x10),
                                       CONCAT11(auVar631[1] & ~(byte)((uint)auVar611._0_4_ >> 8),
                                                auVar631[0] & ~(byte)auVar611._0_4_)));
    auVar605._0_8_ =
         CONCAT17(auVar631[7] & ~(byte)((uint)auVar611._4_4_ >> 0x18),
                  CONCAT16(auVar631[6] & ~(byte)((uint)auVar611._4_4_ >> 0x10),
                           CONCAT15(auVar631[5] & ~(byte)((uint)auVar611._4_4_ >> 8),
                                    CONCAT14(auVar631[4] & ~(byte)auVar611._4_4_,fVar276))));
    auVar605[8] = auVar631[8] & ~(byte)auVar611._8_4_;
    auVar605[9] = auVar631[9] & ~(byte)((uint)auVar611._8_4_ >> 8);
    auVar605[10] = auVar631[10] & ~(byte)((uint)auVar611._8_4_ >> 0x10);
    auVar605[0xb] = auVar631[0xb] & ~(byte)((uint)auVar611._8_4_ >> 0x18);
    auVar612[0xc] = auVar631[0xc] & ~(byte)auVar611._12_4_;
    auVar612._0_12_ = auVar605;
    auVar612[0xd] = auVar631[0xd] & ~(byte)((uint)auVar611._12_4_ >> 8);
    auVar612[0xe] = auVar631[0xe] & ~(byte)((uint)auVar611._12_4_ >> 0x10);
    auVar612[0xf] = auVar631[0xf] & ~(byte)((uint)auVar611._12_4_ >> 0x18);
    auVar20[8] = 0xdb;
    auVar20._0_8_ = 0x40490fdb40490fdb;
    auVar20[9] = 0xf;
    auVar20[10] = 0x49;
    auVar20[0xb] = 0x40;
    auVar20[0xc] = 0xdb;
    auVar20[0xd] = 0xf;
    auVar20[0xe] = 0x49;
    auVar20[0xf] = 0x40;
    auVar24[8] = 0xdb;
    auVar24._0_8_ = 0xc0490fdbc0490fdb;
    auVar24[9] = 0xf;
    auVar24[10] = 0x49;
    auVar24[0xb] = 0xc0;
    auVar24[0xc] = 0xdb;
    auVar24[0xd] = 0xf;
    auVar24[0xe] = 0x49;
    auVar24[0xf] = 0xc0;
    auVar632[8] = 0xdb;
    auVar632._0_8_ = 0x40490fdb40490fdb;
    auVar632[9] = 0xf;
    auVar632[10] = 0x49;
    auVar632[0xb] = 0x40;
    auVar632[0xc] = 0xdb;
    auVar632[0xd] = 0xf;
    auVar632[0xe] = 0x49;
    auVar632[0xf] = 0x40;
    auVar632 = auVar632 ^ (auVar20 ^ auVar24) & auVar676;
    bVar541 = (byte)((int)fVar274 >> 0x1f);
    fVar274 = (float)CONCAT13(auVar632[3] & bVar541,
                              CONCAT12(auVar632[2] & bVar541,
                                       CONCAT11(auVar632[1] & bVar541,auVar632[0] & bVar541)));
    bVar544 = (byte)((int)fVar228 >> 0x1f);
    auVar589._0_8_ =
         CONCAT17(auVar632[7] & bVar544,
                  CONCAT16(auVar632[6] & bVar544,
                           CONCAT15(auVar632[5] & bVar544,CONCAT14(auVar632[4] & bVar544,fVar274))))
    ;
    bVar545 = (byte)((int)fVar231 >> 0x1f);
    auVar589[8] = auVar632[8] & bVar545;
    auVar589[9] = auVar632[9] & bVar545;
    auVar589[10] = auVar632[10] & bVar545;
    auVar589[0xb] = auVar632[0xb] & bVar545;
    bVar546 = (byte)((int)fVar271 >> 0x1f);
    auVar603[0xc] = auVar632[0xc] & bVar546;
    auVar603._0_12_ = auVar589;
    auVar603[0xd] = auVar632[0xd] & bVar546;
    auVar603[0xe] = auVar632[0xe] & bVar546;
    auVar603[0xf] = auVar632[0xf] & bVar546;
    auVar572._0_4_ =
         auVar606._0_4_ *
         (fVar276 +
         (local_120 +
         fVar311 * (fVar311 * (fVar311 * (fVar311 * (fVar311 * (fVar311 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar690) + fVar274;
    auVar572._4_4_ =
         auVar606._4_4_ *
         ((float)((ulong)auVar605._0_8_ >> 0x20) +
         (fStack_11c +
         fVar313 * (fVar313 * (fVar313 * (fVar313 * (fVar313 * (fVar313 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar696) + (float)((ulong)auVar589._0_8_ >> 0x20);
    auVar572._8_4_ =
         auVar606._8_4_ *
         (auVar605._8_4_ +
         (fStack_118 +
         fVar314 * (fVar314 * (fVar314 * (fVar314 * (fVar314 * (fVar314 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar487) + auVar589._8_4_;
    auVar572._12_4_ =
         auVar606._12_4_ *
         (auVar612._12_4_ +
         (fStack_114 +
         fVar530 * (fVar530 * (fVar530 * (fVar530 * (fVar530 * (fVar530 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar692) + auVar603._12_4_;
    uVar587 = CONCAT17(bVar548,(uint7)uVar316) & 0xc0490fdbc0490fdb;
    uVar637 = CONCAT17(bVar555,(uint7)uVar491) & 0x3f490fdb3f490fdb;
    uVar318 = CONCAT17((byte)((int)fVar310 >> 0x1f) & auVar522[7],
                       (uint7)((byte)((int)fVar275 >> 0x1f) & auVar522[3] & 0x80) << 0x18) &
              0x80ffffffffffffff;
    auVar677._8_4_ = 0x4016cbe4;
    auVar677._0_8_ = 0x4016cbe44016cbe4;
    auVar677._12_4_ = 0x4016cbe4;
    auVar613._0_3_ = (undefined3)uVar637;
    auVar613[3] = (byte)(uVar318 >> 0x18) | (byte)(uVar637 >> 0x18);
    auVar613._4_3_ = 0;
    auVar613[7] = (undefined1)(uVar318 >> 0x38);
    auVar613[8] = (byte)iVar534 & 0xdb;
    auVar613[9] = bVar556 & 0xf;
    auVar613[10] = bVar557 & 0x49;
    auVar613[0xb] = (byte)((int)fVar312 >> 0x1f) & auVar522[0xb] & 0x80 | bVar558 & 0x3f;
    auVar613[0xc] = (byte)iVar537 & 0xdb;
    auVar613[0xd] = bVar538 & 0xf;
    auVar613[0xe] = bVar539 & 0x49;
    auVar613[0xf] = (byte)((int)fVar368 >> 0x1f) & auVar522[0xf] & 0x80 | bVar540 & 0x3f;
    uVar318 = CONCAT17(bVar548 & ~bVar544,(uint7)(bVar547 & ~bVar541 & 0x80) << 0x18) &
              0x80ffffffffffffff;
    auVar632 = auVar632 ^ (auVar632 ^ auVar677) & ~auVar522;
    auVar301[0] = (~(byte)uVar316 & 0xdb | (byte)uVar587) & bVar541;
    auVar301[1] = (~(byte)(uVar316 >> 8) & 0xf | (byte)(uVar587 >> 8)) & bVar541;
    auVar301[2] = (~(byte)(uVar316 >> 0x10) & 0x49 | (byte)(uVar587 >> 0x10)) & bVar541;
    auVar301[8] = (~(byte)iVar721 & 0xdb | (byte)iVar721 & 0xdb) & bVar545;
    auVar301[9] = (~bVar549 & 0xf | bVar549 & 0xf) & bVar545;
    auVar301[10] = (~bVar550 & 0x49 | bVar550 & 0x49) & bVar545;
    auVar301[0xc] = (~(byte)iVar726 & 0xdb | (byte)iVar726 & 0xdb) & bVar546;
    auVar301[0xd] = (~bVar552 & 0xf | bVar552 & 0xf) & bVar546;
    auVar301[0xe] = (~bVar553 & 0x49 | bVar553 & 0x49) & bVar546;
    auVar678._8_4_ = 0x3fc90fdb;
    auVar678._0_8_ = 0x3fc90fdb3fc90fdb;
    auVar678._12_4_ = 0x3fc90fdb;
    auVar301[3] = (~bVar547 & 0x40 | (byte)(uVar587 >> 0x18)) & bVar541 | (byte)(uVar318 >> 0x18);
    auVar301._4_3_ = 0;
    auVar301[7] = (byte)(uVar587 >> 0x38) & bVar544 | (byte)(uVar318 >> 0x38);
    auVar301[0xb] = (~bVar551 & 0x40 | bVar551 & 0xc0) & bVar545 | bVar551 & ~bVar545 & 0x80;
    auVar301[0xf] = (~bVar554 & 0x40 | bVar554 & 0xc0) & bVar546 | bVar554 & ~bVar546 & 0x80;
    auVar301 = auVar301 ^
               (auVar301 ^
               auVar613 ^
               (auVar613 ^
               auVar632 ^ (auVar632 ^ auVar678 ^ (auVar678 ^ auVar572) & auVar522) & auVar466) &
               auVar415) & auVar387;
    fVar274 = auVar301._0_4_;
    fVar271 = auVar301._12_4_;
    fVar228 = fVar274 - fVar274 * param_4;
    fVar271 = fVar271 - fVar271 * param_4;
    fVar231 = param_4 * fVar274;
    iVar721 = -(uint)(ABS(fVar228) == INFINITY);
    iVar726 = -(uint)(ABS(fVar231) == INFINITY);
    iVar727 = -(uint)(ABS(fVar274) == INFINITY);
    iVar728 = -(uint)(ABS(fVar271) == INFINITY);
    auVar257[0] = ~(byte)iVar721;
    auVar257[1] = ~(byte)((uint)iVar721 >> 8);
    auVar257[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar257[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar257[4] = ~(byte)iVar726;
    auVar257[5] = ~(byte)((uint)iVar726 >> 8);
    auVar257[6] = ~(byte)((uint)iVar726 >> 0x10);
    auVar257[7] = ~(byte)((uint)iVar726 >> 0x18);
    auVar257[8] = ~(byte)iVar727;
    auVar257[9] = ~(byte)((uint)iVar727 >> 8);
    auVar257[10] = ~(byte)((uint)iVar727 >> 0x10);
    auVar257[0xb] = ~(byte)((uint)iVar727 >> 0x18);
    auVar257[0xc] = ~(byte)iVar728;
    auVar257[0xd] = ~(byte)((uint)iVar728 >> 8);
    auVar257[0xe] = ~(byte)((uint)iVar728 >> 0x10);
    auVar257[0xf] = ~(byte)((uint)iVar728 >> 0x18);
    auVar302._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar228) & 0x80000000 ^ 0xbf000000) + fVar228 * 0.15915494);
    auVar302._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar231) & 0x80000000 ^ 0xbf000000) + fVar231 * 0.15915494);
    auVar302._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar274) & 0x80000000 ^ 0xbf000000) + fVar274 * 0.15915494);
    auVar302._12_4_ =
         (int)((float)(-(uint)(0.0 <= fVar271) & 0x80000000 ^ 0xbf000000) + fVar271 * 0.15915494);
    auVar606 = NEON_scvtf(auVar302,4);
    fVar228 = fVar228 + auVar606._0_4_ * -6.2831855;
    fVar231 = fVar231 + auVar606._4_4_ * -6.2831855;
    fVar274 = fVar274 + auVar606._8_4_ * -6.2831855;
    fVar271 = fVar271 + auVar606._12_4_ * -6.2831855;
    fVar228 = (float)((uint)fVar228 ^
                     ((uint)fVar228 ^ (uint)(-3.1415927 - fVar228)) & -(uint)(fVar228 < -1.5707964))
    ;
    fVar231 = (float)((uint)fVar231 ^
                     ((uint)fVar231 ^ (uint)(-3.1415927 - fVar231)) & -(uint)(fVar231 < -1.5707964))
    ;
    fVar274 = (float)((uint)fVar274 ^
                     ((uint)fVar274 ^ (uint)(-3.1415927 - fVar274)) & -(uint)(fVar274 < -1.5707964))
    ;
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(-3.1415927 - fVar271)) & -(uint)(fVar271 < -1.5707964))
    ;
    fVar228 = (float)((uint)fVar228 ^
                     ((uint)fVar228 ^ (uint)(3.1415927 - fVar228)) & -(uint)(1.5707964 < fVar228));
    fVar231 = (float)((uint)fVar231 ^
                     ((uint)fVar231 ^ (uint)(3.1415927 - fVar231)) & -(uint)(1.5707964 < fVar231));
    fVar274 = (float)((uint)fVar274 ^
                     ((uint)fVar274 ^ (uint)(3.1415927 - fVar274)) & -(uint)(1.5707964 < fVar274));
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(3.1415927 - fVar271)) & -(uint)(1.5707964 < fVar271));
    fVar275 = fVar228 * fVar228;
    fVar310 = fVar231 * fVar231;
    fVar312 = fVar274 * fVar274;
    fVar368 = fVar271 * fVar271;
    auVar258._8_4_ = 0x7fc00000;
    auVar258._0_8_ = 0x7fc000007fc00000;
    auVar258._12_4_ = 0x7fc00000;
    auVar303._0_4_ =
         fVar228 * (local_120 +
                   fVar275 * (fVar275 * (fVar275 * (fVar275 * (fVar275 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar303._4_4_ =
         fVar231 * (fStack_11c +
                   fVar310 * (fVar310 * (fVar310 * (fVar310 * (fVar310 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar303._8_4_ =
         fVar274 * (fStack_118 +
                   fVar312 * (fVar312 * (fVar312 * (fVar312 * (fVar312 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar303._12_4_ =
         fVar271 * (fStack_114 +
                   fVar368 * (fVar368 * (fVar368 * (fVar368 * (fVar368 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar258 = auVar258 ^ (auVar258 ^ auVar303) & auVar257;
    fVar274 = auVar258._0_4_;
    fVar228 = auVar258._4_4_;
    fVar271 = fVar485 + (fVar227 - fVar485) * param_4;
    fVar275 = fVar424 + (fVar315 - fVar424) * param_4;
    fVar310 = fVar486 + (fVar268 - fVar486) * param_4;
    fVar312 = fVar488 + (fVar273 - fVar488) * param_4;
    fVar231 = auVar258._8_4_;
    auVar259._0_4_ = (fVar485 * fVar274 + fVar227 * fVar228) / fVar231;
    auVar259._4_4_ = (fVar424 * fVar274 + fVar315 * fVar228) / fVar231;
    auVar259._8_4_ = (fVar486 * fVar274 + fVar268 * fVar228) / fVar231;
    auVar259._12_4_ = (fVar488 * fVar274 + fVar273 * fVar228) / fVar231;
    iVar721 = -(uint)(fVar231 == 0.0);
    iVar726 = -(uint)(fVar231 == 0.0);
    iVar727 = -(uint)(fVar231 == 0.0);
    iVar728 = -(uint)(fVar231 == 0.0);
    auVar215[0] = ~(byte)iVar721;
    auVar215[1] = ~(byte)((uint)iVar721 >> 8);
    auVar215[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar215[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar215[4] = ~(byte)iVar726;
    auVar215[5] = ~(byte)((uint)iVar726 >> 8);
    auVar215[6] = ~(byte)((uint)iVar726 >> 0x10);
    auVar215[7] = ~(byte)((uint)iVar726 >> 0x18);
    auVar215[8] = ~(byte)iVar727;
    auVar215[9] = ~(byte)((uint)iVar727 >> 8);
    auVar215[10] = ~(byte)((uint)iVar727 >> 0x10);
    auVar215[0xb] = ~(byte)((uint)iVar727 >> 0x18);
    auVar215[0xc] = ~(byte)iVar728;
    auVar215[0xd] = ~(byte)((uint)iVar728 >> 8);
    auVar215[0xe] = ~(byte)((uint)iVar728 >> 0x10);
    auVar215[0xf] = ~(byte)((uint)iVar728 >> 0x18);
    auVar11._4_4_ = fVar275;
    auVar11._0_4_ = fVar271;
    auVar11._8_4_ = fVar310;
    auVar11._12_4_ = fVar312;
    auVar12._4_4_ = fVar275;
    auVar12._0_4_ = fVar271;
    auVar12._8_4_ = fVar310;
    auVar12._12_4_ = fVar312;
    FUN_00d172e8(auVar12 ^ (auVar11 ^ auVar259) & auVar215,param_6,param_7);
    lVar60 = nn::os::GetCurrentThread();
    do {
      lVar64 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar64;
        *(long *)(param_6 + 0x458) = lVar61;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      while ((lVar64 != 0 && (lVar60 != lVar64))) {
        nn::os::WaitLightEvent(pLVar2);
        do {
          lVar64 = *plVar1;
          lVar61 = *(long *)(param_6 + 0x458);
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar64;
            *(long *)(param_6 + 0x458) = lVar61;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      do {
        lVar63 = *plVar1;
        if (lVar63 != lVar64 || *(long *)(param_6 + 0x458) != lVar61) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto LAB_00d15fe0;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar64;
          *(long *)(param_6 + 0x454) = lVar61 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
LAB_00d15fe0:
      lVar64 = lVar63;
      lVar61 = *(long *)(param_6 + 0x458);
    } while (!bVar57);
    lVar60 = *(long *)(param_6 + 0x248) +
             (long)*(short *)(*(long *)(param_6 + 0xa0) + lVar62 * 2) * 0x30;
    uVar26 = *(undefined8 *)(lVar60 + 0x10);
    uVar27 = *(undefined8 *)(lVar60 + 0x18);
    do {
      lVar60 = *plVar1;
      lVar64 = *(long *)(param_6 + 0x458);
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x458) = lVar64;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar62 = *plVar1;
      lVar61 = *(long *)(param_6 + 0x458);
      if (lVar62 != lVar60 || lVar61 != lVar64) {
        bVar57 = false;
        ClearExclusiveLocal();
        goto LAB_00d16048;
      }
      cVar5 = '\x01';
      bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar57) {
        *plVar1 = lVar60;
        *(long *)(param_6 + 0x454) = lVar64 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar57 = true;
LAB_00d16048:
    if (!bVar57) {
      do {
        lVar60 = *plVar1;
        lVar64 = *(long *)(param_6 + 0x458);
        if (lVar60 != lVar62 || lVar64 != lVar61) {
          bVar57 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d167f0;
        }
        cVar5 = '\x01';
        bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar57) {
          *plVar1 = lVar62;
          *(long *)(param_6 + 0x454) = lVar61 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar57 = true;
joined_r0x00d167f0:
      if (!bVar57) {
        do {
          lVar62 = *plVar1;
          lVar61 = *(long *)(param_6 + 0x458);
          if (lVar62 != lVar60 || lVar61 != lVar64) {
            bVar57 = false;
            ClearExclusiveLocal();
            lVar60 = lVar62;
            lVar64 = lVar61;
            goto joined_r0x00d167f0;
          }
          cVar5 = '\x01';
          bVar57 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar57) {
            *plVar1 = lVar60;
            *(long *)(param_6 + 0x454) = lVar64 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar57 = true;
        lVar60 = lVar62;
        lVar64 = lVar61;
        goto joined_r0x00d167f0;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    local_280 = (float)uVar28;
    fStack_27c = (float)((ulong)uVar28 >> 0x20);
    fStack_278 = (float)uVar29;
    fStack_274 = (float)((ulong)uVar29 >> 0x20);
    fVar268 = (float)uVar27;
    fVar273 = (float)((ulong)uVar27 >> 0x20);
    fVar227 = (float)uVar26;
    fVar315 = (float)((ulong)uVar26 >> 0x20);
    fVar274 = local_280 * fVar227;
    fVar228 = fStack_27c * fVar315;
    fVar231 = fStack_278 * fVar268;
    fVar271 = fStack_274 * fVar273;
    auVar33._8_4_ = 0x3f490fdb;
    auVar33._0_8_ = 0x3f490fdb3f490fdb;
    auVar33._12_4_ = 0x3f490fdb;
    auVar524._8_4_ = 0xbfc90fdb;
    auVar524._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar524._12_4_ = 0xbfc90fdb;
    auVar50._8_4_ = 0xc0490fdb;
    auVar50._0_8_ = 0xc0490fdbc0490fdb;
    auVar50._12_4_ = 0xc0490fdb;
    auVar128._0_4_ = fVar274 + fVar228;
    auVar128._4_4_ = fVar231 + fVar271;
    auVar128._8_4_ = fVar274 + fVar228;
    auVar128._12_4_ = fVar231 + fVar271;
    auVar606 = NEON_ext(auVar128,auVar128,4,1);
    auVar129._0_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar129._4_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar129._8_4_ = auVar606._0_4_ + auVar606._4_4_;
    auVar129._12_4_ = auVar606._8_4_ + auVar606._12_4_;
    auVar606 = NEON_fmax(auVar129,auVar326,4);
    auVar564 = NEON_fmin(auVar606,auVar561,4);
    auVar37._8_4_ = 0x3fc90fdb;
    auVar37._0_8_ = 0x3fc90fdb3fc90fdb;
    auVar37._12_4_ = 0x3fc90fdb;
    auVar216._0_4_ = -(uint)(auVar564._0_4_ < 0.0);
    auVar216._4_4_ = -(uint)(auVar564._4_4_ < 0.0);
    auVar216._8_4_ = -(uint)(auVar564._8_4_ < 0.0);
    auVar216._12_4_ = -(uint)(auVar564._12_4_ < 0.0);
    auVar606 = auVar561 ^ (auVar561 ^ auVar326) & auVar216;
    fVar275 = auVar564._0_4_ * auVar606._0_4_;
    fVar310 = auVar564._4_4_ * auVar606._4_4_;
    fVar312 = auVar564._8_4_ * auVar606._8_4_;
    fVar368 = auVar564._12_4_ * auVar606._12_4_;
    fVar227 = fVar227 * auVar606._0_4_;
    fVar315 = fVar315 * auVar606._4_4_;
    fVar268 = fVar268 * auVar606._8_4_;
    fVar273 = fVar273 * auVar606._12_4_;
    fVar274 = SQRT(local_120 - fVar275 * fVar275);
    fVar228 = SQRT(fStack_11c - fVar310 * fVar310);
    fVar231 = SQRT(fStack_118 - fVar312 * fVar312);
    fVar271 = SQRT(fStack_114 - fVar368 * fVar368);
    auVar388._0_4_ = ABS(fVar274 / fVar275);
    auVar388._4_4_ = ABS(fVar228 / fVar310);
    auVar388._8_4_ = ABS(fVar231 / fVar312);
    auVar388._12_4_ = ABS(fVar271 / fVar368);
    auVar355._0_4_ = -(uint)(0.0 <= fVar274 / fVar275);
    auVar355._4_4_ = -(uint)(0.0 <= fVar228 / fVar310);
    auVar355._8_4_ = -(uint)(0.0 <= fVar231 / fVar312);
    auVar355._12_4_ = -(uint)(0.0 <= fVar271 / fVar368);
    auVar326 = auVar326 ^ (auVar326 ^ auVar561) & auVar355;
    auVar30._8_4_ = 0x4016cbe4;
    auVar30._0_8_ = 0x4016cbe44016cbe4;
    auVar30._12_4_ = 0x4016cbe4;
    auVar416._0_4_ = (auVar388._0_4_ + local_180) / (auVar388._0_4_ + local_120);
    auVar416._4_4_ = (auVar388._4_4_ + fStack_17c) / (auVar388._4_4_ + fStack_11c);
    auVar416._8_4_ = (auVar388._8_4_ + fStack_178) / (auVar388._8_4_ + fStack_118);
    auVar416._12_4_ = (auVar388._12_4_ + fStack_174) / (auVar388._12_4_ + fStack_114);
    auVar606 = NEON_frecpe(auVar388,4);
    auVar561 = NEON_frecps(auVar606,auVar388,4);
    auVar467._0_4_ = auVar606._0_4_ * auVar561._0_4_;
    auVar467._4_4_ = auVar606._4_4_ * auVar561._4_4_;
    auVar467._8_4_ = auVar606._8_4_ * auVar561._8_4_;
    auVar467._12_4_ = auVar606._12_4_ * auVar561._12_4_;
    auVar606 = NEON_frecps(auVar467,auVar388,4);
    auVar468._0_4_ = auVar467._0_4_ * auVar606._0_4_;
    auVar468._4_4_ = auVar467._4_4_ * auVar606._4_4_;
    auVar468._8_4_ = auVar467._8_4_ * auVar606._8_4_;
    auVar468._12_4_ = auVar467._12_4_ * auVar606._12_4_;
    auVar523._0_4_ = -(uint)(auVar388._0_4_ <= 2.4142137);
    auVar523._4_4_ = -(uint)(auVar388._4_4_ <= 2.4142137);
    auVar523._8_4_ = -(uint)(auVar388._8_4_ <= 2.4142137);
    auVar523._12_4_ = -(uint)(auVar388._12_4_ <= 2.4142137);
    auVar469._0_4_ = -(uint)(auVar388._0_4_ <= 0.41421354);
    auVar469._4_4_ = -(uint)(auVar388._4_4_ <= 0.41421354);
    auVar469._8_4_ = -(uint)(auVar388._8_4_ <= 0.41421354);
    auVar469._12_4_ = -(uint)(auVar388._12_4_ <= 0.41421354);
    auVar388 = auVar388 ^ (auVar388 ^ auVar416 ^ (auVar416 ^ auVar468) & ~auVar523) & ~auVar469;
    fVar690 = auVar388._0_4_;
    fVar276 = fVar690 * fVar690;
    fVar696 = auVar388._4_4_;
    fVar311 = fVar696 * fVar696;
    fVar487 = auVar388._8_4_;
    fVar313 = fVar487 * fVar487;
    fVar692 = auVar388._12_4_;
    fVar314 = fVar692 * fVar692;
    auVar417._0_4_ = -auVar326._0_4_;
    auVar417._4_4_ = -auVar326._4_4_;
    auVar417._8_4_ = -auVar326._8_4_;
    auVar417._12_4_ = -auVar326._12_4_;
    auVar389._8_4_ = 0x40490fdb;
    auVar389._0_8_ = 0x40490fdb40490fdb;
    auVar389._12_4_ = 0x40490fdb;
    auVar326 = auVar326 ^ (auVar326 ^ auVar417) & ~auVar523;
    auVar418._0_4_ = (int)fVar274 >> 0x1f;
    auVar418._4_4_ = (int)fVar228 >> 0x1f;
    auVar418._8_4_ = (int)fVar231 >> 0x1f;
    auVar418._12_4_ = (int)fVar271 >> 0x1f;
    auVar524 = auVar524 ^ (auVar524 ^ auVar33) & auVar523;
    fVar530 = (float)CONCAT13(auVar524[3] & ~(byte)((uint)auVar469._0_4_ >> 0x18),
                              CONCAT12(auVar524[2] & ~(byte)((uint)auVar469._0_4_ >> 0x10),
                                       CONCAT11(auVar524[1] & ~(byte)((uint)auVar469._0_4_ >> 8),
                                                auVar524[0] & ~(byte)auVar469._0_4_)));
    auVar425._0_8_ =
         CONCAT17(auVar524[7] & ~(byte)((uint)auVar469._4_4_ >> 0x18),
                  CONCAT16(auVar524[6] & ~(byte)((uint)auVar469._4_4_ >> 0x10),
                           CONCAT15(auVar524[5] & ~(byte)((uint)auVar469._4_4_ >> 8),
                                    CONCAT14(auVar524[4] & ~(byte)auVar469._4_4_,fVar530))));
    auVar425[8] = auVar524[8] & ~(byte)auVar469._8_4_;
    auVar425[9] = auVar524[9] & ~(byte)((uint)auVar469._8_4_ >> 8);
    auVar425[10] = auVar524[10] & ~(byte)((uint)auVar469._8_4_ >> 0x10);
    auVar425[0xb] = auVar524[0xb] & ~(byte)((uint)auVar469._8_4_ >> 0x18);
    auVar470[0xc] = auVar524[0xc] & ~(byte)auVar469._12_4_;
    auVar470._0_12_ = auVar425;
    auVar470[0xd] = auVar524[0xd] & ~(byte)((uint)auVar469._12_4_ >> 8);
    auVar470[0xe] = auVar524[0xe] & ~(byte)((uint)auVar469._12_4_ >> 0x10);
    auVar470[0xf] = auVar524[0xf] & ~(byte)((uint)auVar469._12_4_ >> 0x18);
    auVar389 = auVar389 ^ (auVar389 ^ auVar50) & auVar418;
    bVar553 = (byte)((int)fVar275 >> 0x1f);
    fVar485 = (float)CONCAT13(auVar389[3] & bVar553,
                              CONCAT12(auVar389[2] & bVar553,
                                       CONCAT11(auVar389[1] & bVar553,auVar389[0] & bVar553)));
    bVar554 = (byte)((int)fVar310 >> 0x1f);
    auVar426._0_8_ =
         CONCAT17(auVar389[7] & bVar554,
                  CONCAT16(auVar389[6] & bVar554,
                           CONCAT15(auVar389[5] & bVar554,CONCAT14(auVar389[4] & bVar554,fVar485))))
    ;
    bVar555 = (byte)((int)fVar312 >> 0x1f);
    auVar426[8] = auVar389[8] & bVar555;
    auVar426[9] = auVar389[9] & bVar555;
    auVar426[10] = auVar389[10] & bVar555;
    auVar426[0xb] = auVar389[0xb] & bVar555;
    bVar556 = (byte)((int)fVar368 >> 0x1f);
    auVar471[0xc] = auVar389[0xc] & bVar556;
    auVar471._0_12_ = auVar426;
    auVar471[0xd] = auVar389[0xd] & bVar556;
    auVar471[0xe] = auVar389[0xe] & bVar556;
    auVar471[0xf] = auVar389[0xf] & bVar556;
    auVar356._0_4_ =
         auVar326._0_4_ *
         (fVar530 +
         (local_120 +
         fVar276 * (fVar276 * (fVar276 * (fVar276 * (fVar276 * (fVar276 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar690) + fVar485;
    auVar356._4_4_ =
         auVar326._4_4_ *
         ((float)((ulong)auVar425._0_8_ >> 0x20) +
         (fStack_11c +
         fVar311 * (fVar311 * (fVar311 * (fVar311 * (fVar311 * (fVar311 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar696) + (float)((ulong)auVar426._0_8_ >> 0x20);
    auVar356._8_4_ =
         auVar326._8_4_ *
         (auVar425._8_4_ +
         (fStack_118 +
         fVar313 * (fVar313 * (fVar313 * (fVar313 * (fVar313 * (fVar313 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar487) + auVar426._8_4_;
    auVar356._12_4_ =
         auVar326._12_4_ *
         (auVar470._12_4_ +
         (fStack_114 +
         fVar314 * (fVar314 * (fVar314 * (fVar314 * (fVar314 * (fVar314 * 0.07692308 + -0.09090909)
                                                    + 0.11111111) + -0.14285715) + 0.2) +
                   -0.33333334)) * fVar692) + auVar471._12_4_;
    iVar728 = -(uint)(fVar274 == INFINITY);
    iVar395 = -(uint)(fVar231 == INFINITY);
    iVar534 = -(uint)(fVar271 == INFINITY);
    auVar472[0] = ~(byte)iVar728;
    auVar472[1] = ~(byte)((uint)iVar728 >> 8);
    auVar472[2] = ~(byte)((uint)iVar728 >> 0x10);
    bVar541 = (byte)((uint)iVar728 >> 0x18);
    auVar472[3] = ~bVar541;
    auVar472._4_3_ = 0;
    auVar472[7] = ~(byte)(-(uint)(fVar228 == INFINITY) >> 0x18);
    auVar472[8] = ~(byte)iVar395;
    bVar544 = (byte)((uint)iVar395 >> 8);
    auVar472[9] = ~bVar544;
    bVar545 = (byte)((uint)iVar395 >> 0x10);
    auVar472[10] = ~bVar545;
    bVar546 = (byte)((uint)iVar395 >> 0x18);
    auVar472[0xb] = ~bVar546;
    auVar472[0xc] = ~(byte)iVar534;
    bVar547 = (byte)((uint)iVar534 >> 8);
    auVar472[0xd] = ~bVar547;
    bVar548 = (byte)((uint)iVar534 >> 0x10);
    bVar549 = (byte)((uint)iVar534 >> 0x18);
    auVar472[0xe] = ~bVar548;
    auVar472[0xf] = ~bVar549;
    auVar356 = auVar356 ^ (auVar356 ^ auVar37) & ~auVar472;
    iVar721 = -(uint)(fVar275 == -INFINITY);
    iVar726 = -(uint)(fVar312 == -INFINITY);
    iVar727 = -(uint)(fVar368 == -INFINITY);
    auVar604[0] = ~(byte)iVar721;
    auVar604[1] = ~(byte)((uint)iVar721 >> 8);
    auVar604[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar604[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar604._4_3_ = 0;
    auVar604[7] = ~(byte)(-(uint)(fVar310 == -INFINITY) >> 0x18);
    auVar604[8] = ~(byte)iVar726;
    auVar604[9] = ~(byte)((uint)iVar726 >> 8);
    auVar604[10] = ~(byte)((uint)iVar726 >> 0x10);
    auVar604[0xb] = ~(byte)((uint)iVar726 >> 0x18);
    auVar604[0xc] = ~(byte)iVar727;
    auVar604[0xd] = ~(byte)((uint)iVar727 >> 8);
    auVar604[0xe] = ~(byte)((uint)iVar727 >> 0x10);
    auVar604[0xf] = ~(byte)((uint)iVar727 >> 0x18);
    iVar721 = -(uint)(fVar275 == INFINITY);
    iVar726 = -(uint)(fVar312 == INFINITY);
    iVar727 = -(uint)(fVar368 == INFINITY);
    auVar304[0] = ~(byte)iVar721;
    auVar304[1] = ~(byte)((uint)iVar721 >> 8);
    auVar304[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar304[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar304._4_3_ = 0;
    auVar304[7] = ~(byte)(-(uint)(fVar310 == INFINITY) >> 0x18);
    auVar304[8] = ~(byte)iVar726;
    auVar304[9] = ~(byte)((uint)iVar726 >> 8);
    auVar304[10] = ~(byte)((uint)iVar726 >> 0x10);
    auVar304[0xb] = ~(byte)((uint)iVar726 >> 0x18);
    auVar304[0xc] = ~(byte)iVar727;
    auVar304[0xd] = ~(byte)((uint)iVar727 >> 8);
    auVar304[0xe] = ~(byte)((uint)iVar727 >> 0x10);
    auVar304[0xf] = ~(byte)((uint)iVar727 >> 0x18);
    uVar318 = CONCAT17((byte)((int)fVar228 >> 0x1f) & auVar472[7],
                       (uint7)((byte)((int)fVar274 >> 0x1f) & auVar472[3] & 0x80) << 0x18) &
              0x80ffffffffffffff;
    auVar390._0_4_ = CONCAT13((byte)(uVar318 >> 0x18) | bVar541 & 0x3f,(int3)iVar728) & 0xff490fdb;
    auVar390._4_3_ = 0;
    auVar390[7] = (undefined1)(uVar318 >> 0x38);
    auVar390[8] = (byte)iVar395 & 0xdb;
    auVar390[9] = bVar544 & 0xf;
    auVar390[10] = bVar545 & 0x49;
    auVar390[0xb] = (byte)((int)fVar231 >> 0x1f) & auVar472[0xb] & 0x80 | bVar546 & 0x3f;
    auVar390[0xc] = (byte)iVar534 & 0xdb;
    auVar390[0xd] = bVar547 & 0xf;
    auVar390[0xe] = bVar548 & 0x49;
    auVar390[0xf] = (byte)((int)fVar271 >> 0x1f) & auVar472[0xf] & 0x80 | bVar549 & 0x3f;
    iVar728 = -(uint)(fVar274 == -0.0);
    iVar395 = -(uint)(fVar231 == -0.0);
    iVar534 = -(uint)(fVar271 == -0.0);
    bVar541 = (byte)((uint)iVar728 >> 8);
    bVar544 = (byte)((uint)iVar728 >> 0x10);
    bVar545 = (byte)((uint)iVar728 >> 0x18);
    bVar546 = (byte)(-(uint)(fVar228 == -0.0) >> 0x18);
    bVar547 = (byte)((uint)iVar395 >> 8);
    bVar548 = (byte)((uint)iVar395 >> 0x10);
    bVar549 = (byte)((uint)iVar395 >> 0x18);
    bVar550 = (byte)((uint)iVar534 >> 8);
    bVar551 = (byte)((uint)iVar534 >> 0x10);
    bVar552 = (byte)((uint)iVar534 >> 0x18);
    iVar721 = -(uint)(fVar274 == 0.0);
    iVar726 = -(uint)(fVar231 == 0.0);
    iVar727 = -(uint)(fVar271 == 0.0);
    auVar260[0] = ~(byte)iVar721;
    auVar260[1] = ~(byte)((uint)iVar721 >> 8);
    auVar260[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar260[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar260._4_3_ = 0;
    auVar260[7] = ~(byte)(-(uint)(fVar228 == 0.0) >> 0x18);
    auVar260[8] = ~(byte)iVar726;
    auVar260[9] = ~(byte)((uint)iVar726 >> 8);
    auVar260[10] = ~(byte)((uint)iVar726 >> 0x10);
    auVar260[0xb] = ~(byte)((uint)iVar726 >> 0x18);
    auVar260[0xc] = ~(byte)iVar727;
    auVar260[0xd] = ~(byte)((uint)iVar727 >> 8);
    auVar260[0xe] = ~(byte)((uint)iVar727 >> 0x10);
    auVar260[0xf] = ~(byte)((uint)iVar727 >> 0x18);
    uVar318 = CONCAT17(bVar546 & ~bVar554,(uint7)(bVar545 & ~bVar553 & 0x80) << 0x18) &
              0x80ffffffffffffff;
    auVar261[0] = (~(byte)iVar728 & 0xdb | (byte)iVar728 & 0xdb) & bVar553;
    auVar261[1] = (~bVar541 & 0xf | bVar541 & 0xf) & bVar553;
    auVar261[2] = (~bVar544 & 0x49 | bVar544 & 0x49) & bVar553;
    auVar261[8] = (~(byte)iVar395 & 0xdb | (byte)iVar395 & 0xdb) & bVar555;
    auVar261[9] = (~bVar547 & 0xf | bVar547 & 0xf) & bVar555;
    auVar261[10] = (~bVar548 & 0x49 | bVar548 & 0x49) & bVar555;
    auVar261[0xc] = (~(byte)iVar534 & 0xdb | (byte)iVar534 & 0xdb) & bVar556;
    auVar261[0xd] = (~bVar550 & 0xf | bVar550 & 0xf) & bVar556;
    auVar261[0xe] = (~bVar551 & 0x49 | bVar551 & 0x49) & bVar556;
    auVar261[3] = (~bVar545 & 0x40 | bVar545 & 0xc0) & bVar553 | (byte)(uVar318 >> 0x18);
    auVar261._4_3_ = 0;
    auVar261[7] = bVar546 & 0xc0 & bVar554 | (byte)(uVar318 >> 0x38);
    auVar261[0xb] = (~bVar549 & 0x40 | bVar549 & 0xc0) & bVar555 | bVar549 & ~bVar555 & 0x80;
    auVar261[0xf] = (~bVar552 & 0x40 | bVar552 & 0xc0) & bVar556 | bVar552 & ~bVar556 & 0x80;
    auVar261 = auVar261 ^
               (auVar261 ^
               auVar390 ^
               (auVar390 ^
               auVar356 ^ (auVar356 ^ auVar389 ^ (auVar389 ^ auVar30) & ~auVar472) & ~auVar604) &
               auVar304) & auVar260;
    fVar274 = auVar261._0_4_;
    fVar368 = param_4 * fVar274;
    fVar275 = auVar261._12_4_;
    fVar312 = fVar274 - fVar274 * param_4;
    fVar275 = fVar275 - fVar275 * param_4;
    auVar262._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar312) & 0x80000000 ^ 0xbf000000) + fVar312 * 0.15915494);
    auVar262._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar368) & 0x80000000 ^ 0xbf000000) + fVar368 * 0.15915494);
    auVar262._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar274) & 0x80000000 ^ 0xbf000000) + fVar274 * 0.15915494);
    auVar262._12_4_ =
         (int)((float)(-(uint)(0.0 <= fVar275) & 0x80000000 ^ 0xbf000000) + fVar275 * 0.15915494);
    auVar606 = NEON_scvtf(auVar262,4);
    fVar228 = fVar312 + auVar606._0_4_ * -6.2831855;
    fVar231 = fVar368 + auVar606._4_4_ * -6.2831855;
    fVar271 = fVar274 + auVar606._8_4_ * -6.2831855;
    fVar310 = fVar275 + auVar606._12_4_ * -6.2831855;
    fVar228 = (float)((uint)fVar228 ^
                     ((uint)fVar228 ^ (uint)(-3.1415927 - fVar228)) & -(uint)(fVar228 < -1.5707964))
    ;
    fVar231 = (float)((uint)fVar231 ^
                     ((uint)fVar231 ^ (uint)(-3.1415927 - fVar231)) & -(uint)(fVar231 < -1.5707964))
    ;
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(-3.1415927 - fVar271)) & -(uint)(fVar271 < -1.5707964))
    ;
    fVar310 = (float)((uint)fVar310 ^
                     ((uint)fVar310 ^ (uint)(-3.1415927 - fVar310)) & -(uint)(fVar310 < -1.5707964))
    ;
    fVar228 = (float)((uint)fVar228 ^
                     ((uint)fVar228 ^ (uint)(3.1415927 - fVar228)) & -(uint)(1.5707964 < fVar228));
    fVar231 = (float)((uint)fVar231 ^
                     ((uint)fVar231 ^ (uint)(3.1415927 - fVar231)) & -(uint)(1.5707964 < fVar231));
    fVar271 = (float)((uint)fVar271 ^
                     ((uint)fVar271 ^ (uint)(3.1415927 - fVar271)) & -(uint)(1.5707964 < fVar271));
    fVar310 = (float)((uint)fVar310 ^
                     ((uint)fVar310 ^ (uint)(3.1415927 - fVar310)) & -(uint)(1.5707964 < fVar310));
    iVar721 = -(uint)(ABS(fVar312) == INFINITY);
    iVar726 = -(uint)(ABS(fVar368) == INFINITY);
    iVar727 = -(uint)(ABS(fVar274) == INFINITY);
    iVar728 = -(uint)(ABS(fVar275) == INFINITY);
    auVar305[0] = ~(byte)iVar721;
    auVar305[1] = ~(byte)((uint)iVar721 >> 8);
    auVar305[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar305[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar305[4] = ~(byte)iVar726;
    auVar305[5] = ~(byte)((uint)iVar726 >> 8);
    auVar305[6] = ~(byte)((uint)iVar726 >> 0x10);
    auVar305[7] = ~(byte)((uint)iVar726 >> 0x18);
    auVar305[8] = ~(byte)iVar727;
    auVar305[9] = ~(byte)((uint)iVar727 >> 8);
    auVar305[10] = ~(byte)((uint)iVar727 >> 0x10);
    auVar305[0xb] = ~(byte)((uint)iVar727 >> 0x18);
    auVar305[0xc] = ~(byte)iVar728;
    auVar305[0xd] = ~(byte)((uint)iVar728 >> 8);
    auVar305[0xe] = ~(byte)((uint)iVar728 >> 0x10);
    auVar305[0xf] = ~(byte)((uint)iVar728 >> 0x18);
    fVar274 = fVar228 * fVar228;
    fVar275 = fVar231 * fVar231;
    fVar312 = fVar271 * fVar271;
    fVar368 = fVar310 * fVar310;
    auVar357._8_4_ = 0x7fc00000;
    auVar357._0_8_ = 0x7fc000007fc00000;
    auVar357._12_4_ = 0x7fc00000;
    auVar263._0_4_ =
         fVar228 * (local_120 +
                   fVar274 * (fVar274 * (fVar274 * (fVar274 * (fVar274 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar263._4_4_ =
         fVar231 * (fStack_11c +
                   fVar275 * (fVar275 * (fVar275 * (fVar275 * (fVar275 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar263._8_4_ =
         fVar271 * (fStack_118 +
                   fVar312 * (fVar312 * (fVar312 * (fVar312 * (fVar312 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar263._12_4_ =
         fVar310 * (fStack_114 +
                   fVar368 * (fVar368 * (fVar368 * (fVar368 * (fVar368 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar263 = auVar263 ^ (auVar263 ^ auVar357) & ~auVar305;
    fVar274 = auVar263._0_4_;
    fVar228 = auVar263._4_4_;
    fVar231 = auVar263._8_4_;
    auVar306._0_4_ = (local_280 * fVar274 + fVar227 * fVar228) / fVar231;
    auVar306._4_4_ = (fStack_27c * fVar274 + fVar315 * fVar228) / fVar231;
    auVar306._8_4_ = (fStack_278 * fVar274 + fVar268 * fVar228) / fVar231;
    auVar306._12_4_ = (fStack_274 * fVar274 + fVar273 * fVar228) / fVar231;
    auVar614._0_4_ = local_280 + param_4 * (fVar227 - local_280);
    auVar614._4_4_ = fStack_27c + param_4 * (fVar315 - fStack_27c);
    auVar614._8_4_ = fStack_278 + param_4 * (fVar268 - fStack_278);
    auVar614._12_4_ = fStack_274 + param_4 * (fVar273 - fStack_274);
    iVar721 = -(uint)(fVar231 == 0.0);
    iVar726 = -(uint)(fVar231 == 0.0);
    iVar727 = -(uint)(fVar231 == 0.0);
    iVar728 = -(uint)(fVar231 == 0.0);
    auVar217[0] = ~(byte)iVar721;
    auVar217[1] = ~(byte)((uint)iVar721 >> 8);
    auVar217[2] = ~(byte)((uint)iVar721 >> 0x10);
    auVar217[3] = ~(byte)((uint)iVar721 >> 0x18);
    auVar217[4] = ~(byte)iVar726;
    auVar217[5] = ~(byte)((uint)iVar726 >> 8);
    auVar217[6] = ~(byte)((uint)iVar726 >> 0x10);
    auVar217[7] = ~(byte)((uint)iVar726 >> 0x18);
    auVar217[8] = ~(byte)iVar727;
    auVar217[9] = ~(byte)((uint)iVar727 >> 8);
    auVar217[10] = ~(byte)((uint)iVar727 >> 0x10);
    auVar217[0xb] = ~(byte)((uint)iVar727 >> 0x18);
    auVar217[0xc] = ~(byte)iVar728;
    auVar217[0xd] = ~(byte)((uint)iVar728 >> 8);
    auVar217[0xe] = ~(byte)((uint)iVar728 >> 0x10);
    auVar217[0xf] = ~(byte)((uint)iVar728 >> 0x18);
    FUN_00d172e8(auVar614 ^ (auVar614 ^ auVar306) & auVar217,param_6,param_8);
  }
  param_5[1] = param_2._8_8_;
  *param_5 = param_2._0_8_;
  return;
}


