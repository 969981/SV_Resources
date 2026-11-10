/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00867290; name: FUN_00867290
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00867290(undefined1 (*param_1) [16],uint param_2,undefined1 (*param_3) [16],uint param_4,
                 undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7,byte *param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 (*pauVar5) [12];
  undefined4 uVar6;
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
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 (*pauVar29) [16];
  undefined1 *puVar30;
  undefined1 (*pauVar31) [16];
  undefined *puVar32;
  bool bVar33;
  bool bVar34;
  uint uVar35;
  float *pfVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  float *pfVar43;
  undefined8 *puVar44;
  ulong uVar45;
  byte *pbVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 auVar56 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 uVar54;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar57 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar58 [12];
  undefined1 auVar76 [16];
  byte bVar105;
  undefined1 uVar107;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar59 [12];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar106;
  float fVar108;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar55;
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
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
  float fVar109;
  float fVar111;
  float fVar112;
  undefined1 auVar110 [16];
  float fVar113;
  int iVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined1 auVar118 [12];
  byte bVar150;
  byte bVar153;
  byte bVar154;
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
  float fVar147;
  ulong uVar117;
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
  float fVar151;
  undefined1 auVar140 [16];
  int iVar148;
  byte bVar149;
  int iVar152;
  byte bVar155;
  int iVar156;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar157;
  int iVar158;
  undefined1 auVar159 [12];
  int iVar171;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  undefined1 auVar166 [16];
  int iVar177;
  int iVar178;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  ulong uVar179;
  undefined8 uVar180;
  int iVar181;
  float fVar182;
  uint uVar183;
  int iVar196;
  int iVar199;
  undefined1 auVar184 [16];
  float fVar197;
  uint uVar198;
  float fVar200;
  int iVar201;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  float fVar213;
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  float fVar216;
  undefined8 unaff_d12;
  float fVar217;
  float fVar218;
  ulong in_register_00005188;
  float fVar219;
  float fVar220;
  float fVar221;
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar245;
  float fVar246;
  byte bVar247;
  byte bVar248;
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  byte bVar249;
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  float fVar227;
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar250 [12];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  float fVar255;
  float fVar257;
  float fVar266;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float fVar256;
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  float fVar267;
  int iVar268;
  float fVar270;
  int iVar271;
  undefined1 auVar272 [12];
  int iVar289;
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  float fVar269;
  int iVar291;
  int iVar293;
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar273 [12];
  int iVar290;
  int iVar292;
  int iVar294;
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  char cVar295;
  undefined1 auVar296 [12];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar302 [16];
  undefined1 auVar301 [16];
  undefined1 auVar300 [16];
  undefined1 auVar299 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  float fVar320;
  float fVar323;
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  byte bVar358;
  float fVar324;
  byte bVar360;
  byte bVar362;
  byte bVar363;
  float fVar361;
  byte bVar365;
  byte bVar367;
  byte bVar368;
  float fVar366;
  byte bVar370;
  byte bVar371;
  byte bVar372;
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar331 [16];
  undefined1 auVar330 [16];
  undefined1 auVar329 [16];
  undefined1 auVar328 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar337 [16];
  undefined1 auVar336 [16];
  undefined1 auVar335 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar344 [16];
  undefined1 auVar343 [16];
  undefined1 auVar342 [16];
  undefined1 auVar341 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  byte bVar359;
  byte bVar364;
  byte bVar369;
  byte bVar373;
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined8 uVar374;
  undefined8 uVar375;
  undefined8 uVar376;
  float fVar377;
  float fVar378;
  ulong uVar379;
  float fVar397;
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  float fVar395;
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar391 [16];
  undefined1 auVar390 [16];
  undefined1 auVar389 [16];
  undefined1 auVar388 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  float fVar396;
  float fVar398;
  undefined1 auVar394 [16];
  float fVar399;
  float fVar413;
  float fVar415;
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar410 [16];
  undefined1 auVar409 [16];
  undefined1 auVar408 [16];
  undefined1 auVar407 [16];
  float fVar414;
  float fVar416;
  float fVar417;
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  float fVar418;
  float fVar419;
  float fVar424;
  float fVar426;
  undefined1 auVar420 [16];
  int iVar425;
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  float fVar432;
  float local_3c0;
  undefined4 local_390;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined8 local_308;
  float local_2e0;
  float fStack_2dc;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270 [2];
  undefined8 uStack_268;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float afStack_220 [4];
  float local_210 [3];
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  uint local_1a0;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 (*local_168) [16];
  uint local_160;
  undefined1 (*local_158) [16];
  uint local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac [5];
  
  puVar32 = PTR_DAT_047d19b0;
  local_158 = param_1;
  local_150 = param_2;
  local_148 = PTR_DAT_047d1cd0 + 0x10;
  local_168 = param_3;
  local_160 = param_4;
  uVar3 = *(uint *)(param_5[6] + 0xc);
  uVar115 = *(undefined8 *)param_5[5];
  uVar51 = *(undefined8 *)param_5[6];
  auVar110 = *param_5;
  *(undefined4 *)(param_6 + 6) = 0;
  fVar109 = *(float *)*param_5 * *(float *)*param_5;
  fVar111 = *(float *)(*param_5 + 4) * *(float *)(*param_5 + 4);
  fVar112 = *(float *)(*param_5 + 8) * *(float *)(*param_5 + 8);
  fVar157 = fVar109 + fVar111 + fVar112;
  if ((((uVar3 & 1) == 0) && (param_7 == (undefined8 *)0x0)) &&
     (fVar157 < *(float *)(puVar32 + 0x270))) {
    return false;
  }
  auVar63 = *(undefined1 (*) [16])(puVar32 + 0x50);
  uVar116 = NEON_fmax(CONCAT44((float)((ulong)uVar115 >> 0x20) * 0.1,(float)uVar115 * 0.1),
                      0x37a7c5ac37a7c5ac,4);
  uVar115 = auVar63._0_8_;
  uVar51 = NEON_fmax(CONCAT44((float)((ulong)uVar116 >> 0x20) - (float)((ulong)uVar51 >> 0x20),
                              (float)uVar116 - (float)uVar51),uVar115,4);
  fVar17 = auVar110._8_4_;
  fVar320 = (float)uVar51;
  fVar323 = (float)((ulong)uVar51 >> 0x20);
  if (param_7 == (undefined8 *)0x0) {
    local_308 = NEON_fmax(uVar115,CONCAT44((float)((ulong)*(undefined8 *)(param_5[5] + 8) >> 0x20) -
                                           fVar323 / (float)(((int)(fVar109 + fVar111 + fVar112) >>
                                                             1) + 0x1fbb4000),
                                           (float)*(undefined8 *)(param_5[5] + 8) -
                                           fVar320 / (float)(((int)fVar157 >> 1) + 0x1fbb4000)),4);
  }
  else {
    *(undefined4 *)(param_7 + 6) = 0;
    local_308 = uVar115;
  }
  uVar2 = uVar3 & 1;
  uVar3 = uVar3 & 2;
  local_2e0 = auVar110._0_4_;
  fStack_2dc = auVar110._4_4_;
  fVar111 = local_2e0 * (float)local_308;
  fVar109 = (float)((ulong)local_308 >> 0x20);
  fVar112 = fStack_2dc * fVar109;
  auVar427._0_8_ = CONCAT44(fVar112,fVar111);
  auVar427._8_4_ = fVar17 * (float)local_308;
  auVar427._12_4_ = fVar109 * 0.0;
  uStack_2a8 = auVar427._8_8_;
  if (param_8 == (byte *)0x0) {
    uVar37 = 1;
    local_b0 = 1;
    local_ac[0] = 1;
    uStack_268._0_4_ = *(float *)(*param_1 + 8);
    local_270[0] = (float)*(undefined8 *)*param_1;
    local_270[1] = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    uStack_268._4_4_ = 0.5;
    auVar228 = param_5[3];
    auVar258 = param_5[1];
    auVar274 = param_5[2];
    uVar39 = 1;
    auVar184 = NEON_ext(auVar258,auVar258,8,1);
    auVar229 = NEON_ext(auVar274,auVar274,8,1);
    auVar275 = NEON_ext(auVar228,auVar228,8,1);
    fVar109 = (float)*(undefined8 *)*param_3 - *(float *)param_5[4];
    fVar157 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20) - *(float *)(param_5[4] + 4);
    fVar246 = *(float *)(*param_3 + 8) - *(float *)(param_5[4] + 8);
    local_210[2] = (auVar275._0_4_ * fVar246 + auVar228._0_4_ * fVar109 + auVar228._4_4_ * fVar157)
                   - auVar427._8_4_;
    fStack_204 = 0.5;
    local_210[0] = (auVar184._0_4_ * fVar246 + auVar258._0_4_ * fVar109 + auVar258._4_4_ * fVar157)
                   - fVar111;
    local_210[1] = (auVar229._0_4_ * fVar246 + auVar274._0_4_ * fVar109 + auVar274._4_4_ * fVar157)
                   - fVar112;
  }
  else {
    bVar247 = param_8[4];
    uVar39 = (uint)(bVar247 >> 6);
    pfVar43 = local_270;
    uVar48 = bVar247 & 3;
    uVar37 = (ulong)uVar48;
    local_b0 = uVar48;
    local_ac[0] = (uint)(bVar247 >> 6);
    pbVar46 = param_8;
    uVar183 = uVar39;
    do {
      bVar248 = *pbVar46;
      uVar51 = *(undefined8 *)(*param_1 + (ulong)bVar248 * 0xc);
      uVar6 = *(undefined4 *)((long)(*param_1 + (ulong)bVar248 * 0xc) + 8);
      uVar183 = uVar183 - 1;
      *(ulong *)(pfVar43 + 2) = CONCAT44(uVar6,uVar6);
      *(undefined8 *)pfVar43 = uVar51;
      pfVar43[3] = (float)(bVar248 | 0x3f000000);
      pfVar43 = pfVar43 + 4;
      pbVar46 = pbVar46 + 1;
    } while (uVar183 != 0);
    puVar44 = &local_140;
    pbVar46 = param_8 + (param_8[4] >> 6);
    uVar183 = uVar48;
    do {
      bVar248 = *pbVar46;
      uVar51 = *(undefined8 *)(*param_3 + (ulong)bVar248 * 0xc);
      uVar6 = *(undefined4 *)((long)(*param_3 + (ulong)bVar248 * 0xc) + 8);
      uVar183 = uVar183 - 1;
      puVar44[1] = CONCAT44(uVar6,uVar6);
      *puVar44 = uVar51;
      *(uint *)((long)puVar44 + 0xc) = bVar248 | 0x3f000000;
      puVar44 = puVar44 + 2;
      pbVar46 = pbVar46 + 1;
    } while (uVar183 != 0);
    if ((bVar247 & 3) != 0) {
      auVar228 = param_5[1];
      auVar258 = param_5[2];
      fVar109 = auVar228._0_4_;
      fVar224 = auVar258._0_4_;
      fVar246 = auVar228._4_4_;
      fVar216 = auVar258._4_4_;
      auVar274 = param_5[3];
      fVar106 = auVar274._4_4_;
      auVar228 = NEON_ext(auVar228,auVar228,8,1);
      auVar258 = NEON_ext(auVar258,auVar258,8,1);
      fVar226 = auVar274._0_4_;
      auVar274 = NEON_ext(auVar274,auVar274,8,1);
      fVar157 = auVar228._0_4_;
      fVar245 = auVar258._0_4_;
      fVar217 = (float)*(undefined8 *)param_5[4];
      local_140._0_4_ = (float)local_140 - fVar217;
      fVar227 = (float)((ulong)*(undefined8 *)param_5[4] >> 0x20);
      local_140._4_4_ = local_140._4_4_ - fVar227;
      fVar220 = (float)*(undefined8 *)(param_5[4] + 8);
      uStack_138._0_4_ = (float)uStack_138 - fVar220;
      fVar147 = auVar274._0_4_;
      local_210[2] = (fVar147 * (float)uStack_138 +
                     fVar226 * (float)local_140 + fVar106 * local_140._4_4_) - auVar427._8_4_;
      fStack_204 = uStack_138._4_4_;
      local_210[0] = (fVar157 * (float)uStack_138 +
                     fVar109 * (float)local_140 + fVar246 * local_140._4_4_) - fVar111;
      local_210[1] = (fVar245 * (float)uStack_138 +
                     fVar224 * (float)local_140 + fVar216 * local_140._4_4_) - fVar112;
      if (uVar48 != 1) {
        local_130._0_4_ = (float)local_130 - fVar217;
        local_130._4_4_ = local_130._4_4_ - fVar227;
        uStack_128._0_4_ = (float)uStack_128 - fVar220;
        fStack_1f4 = (float)uStack_128._4_4_;
        fStack_1f8 = (fVar147 * (float)uStack_128 +
                     fVar226 * (float)local_130 + fVar106 * local_130._4_4_) - auVar427._8_4_;
        fStack_1fc = (fVar245 * (float)uStack_128 +
                     fVar224 * (float)local_130 + fVar216 * local_130._4_4_) - fVar112;
        local_200 = (fVar157 * (float)uStack_128 +
                    fVar109 * (float)local_130 + fVar246 * local_130._4_4_) - fVar111;
        if (uVar48 != 2) {
          local_120._0_4_ = (float)local_120 - fVar217;
          local_120._4_4_ = local_120._4_4_ - fVar227;
          uStack_118._0_4_ = (float)uStack_118 - fVar220;
          fStack_1e8 = (fVar147 * (float)uStack_118 +
                       fVar226 * (float)local_120 + fVar106 * local_120._4_4_) - auVar427._8_4_;
          fStack_1e4 = uStack_118._4_4_;
          local_1f0 = (fVar157 * (float)uStack_118 +
                      fVar109 * (float)local_120 + fVar246 * local_120._4_4_) - fVar111;
          fStack_1ec = (fVar245 * (float)uStack_118 +
                       fVar224 * (float)local_120 + fVar216 * local_120._4_4_) - fVar112;
        }
      }
    }
  }
  uVar51 = *(undefined8 *)(puVar32 + 0x2d0);
  uVar116 = *(undefined8 *)(puVar32 + 0x2d8);
  auVar274 = NEON_ext(auVar63,auVar63,8,1);
  uVar18 = *(undefined8 *)(puVar32 + 0x290);
  uVar180 = *(undefined8 *)(puVar32 + 0x68);
  uVar179 = *(ulong *)(puVar32 + 0x60);
  auVar258 = *(undefined1 (*) [16])(puVar32 + 0x240);
  auVar228 = *(undefined1 (*) [16])(puVar32 + 0x250);
  auVar63 = NEON_ext(auVar274,auVar63,8,1);
  fVar111 = (float)uVar179;
  uVar52 = CONCAT44((int)*(undefined8 *)(puVar32 + 0x30),(int)*(undefined8 *)(puVar32 + 0x30));
  iVar268 = -(uint)(local_2e0 == 0.0);
  iVar289 = -(uint)(fStack_2dc == 0.0);
  iVar291 = -(uint)(fVar17 == 0.0);
  iVar293 = -(uint)(fVar111 == 0.0);
  local_b8 = 0x3727c5ac3727c5ac;
  fVar112 = 0.0 - local_2e0;
  fVar157 = 0.0 - fStack_2dc;
  fVar246 = 0.0 - fVar17;
  uVar376 = *(undefined8 *)(PTR_DAT_047d19c8 + 0x48);
  uVar375 = *(undefined8 *)(PTR_DAT_047d19c8 + 0x40);
  pauVar5 = (undefined1 (*) [12])(PTR_DAT_047d19c8 + 0x50);
  auVar28 = *pauVar5;
  auVar27 = *pauVar5;
  auVar26 = *pauVar5;
  auVar25 = *pauVar5;
  auVar24 = *pauVar5;
  auVar23 = *pauVar5;
  auVar22 = *pauVar5;
  auVar21 = *pauVar5;
  iStack_298 = (int)*(undefined8 *)(PTR_DAT_047d19c8 + 0x58);
  iStack_294 = (int)((ulong)*(undefined8 *)(PTR_DAT_047d19c8 + 0x58) >> 0x20);
  local_2a0 = (int)*(undefined8 *)*pauVar5;
  iStack_29c = (int)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
  uVar53 = NEON_fmax(*(undefined8 *)param_5[5],CONCAT44(fVar323 + 1e-06,fVar320 + 1e-06),4);
  iVar181 = -(uint)(fVar112 == 0.0);
  iVar196 = -(uint)(fVar157 == 0.0);
  iVar199 = -(uint)(fVar246 == 0.0);
  iVar201 = -(uint)(fVar111 == 0.0);
  bVar247 = (byte)(uVar179 >> 8);
  bVar248 = (byte)(uVar179 >> 0x10);
  bVar249 = (byte)(uVar179 >> 0x18);
  auVar274 = NEON_ext(auVar228,auVar228,8,1);
  auVar274 = NEON_ext(auVar274,auVar228,8,1);
  fVar109 = (float)CONCAT13(auVar110[3] & ~(byte)((uint)iVar268 >> 0x18),
                            CONCAT12(auVar110[2] & ~(byte)((uint)iVar268 >> 0x10),
                                     CONCAT11(auVar110[1] & ~(byte)((uint)iVar268 >> 8),
                                              auVar110[0] & ~(byte)iVar268)));
  auVar56._0_8_ =
       CONCAT17(auVar110[7] & ~(byte)((uint)iVar289 >> 0x18),
                CONCAT16(auVar110[6] & ~(byte)((uint)iVar289 >> 0x10),
                         CONCAT15(auVar110[5] & ~(byte)((uint)iVar289 >> 8),
                                  CONCAT14(auVar110[4] & ~(byte)iVar289,fVar109))));
  auVar56[8] = auVar110[8] & ~(byte)iVar291;
  auVar56[9] = auVar110[9] & ~(byte)((uint)iVar291 >> 8);
  auVar56[10] = auVar110[10] & ~(byte)((uint)iVar291 >> 0x10);
  auVar56[0xb] = auVar110[0xb] & ~(byte)((uint)iVar291 >> 0x18);
  auVar110[0xc] = (byte)uVar179 & ~(byte)iVar293;
  auVar110._0_12_ = auVar56;
  auVar110[0xd] = bVar247 & ~(byte)((uint)iVar293 >> 8);
  auVar110[0xe] = bVar248 & ~(byte)((uint)iVar293 >> 0x10);
  auVar110[0xf] = bVar249 & ~(byte)((uint)iVar293 >> 0x18);
  fStack_328 = auVar56._8_4_;
  fStack_324 = auVar110._12_4_;
  fStack_32c = (float)((ulong)auVar56._0_8_ >> 0x20);
  bVar34 = uVar2 != 0;
  iVar268 = 0;
  pauVar1 = param_5 + 1;
  uVar45 = uVar37;
  auVar184._0_8_ = unaff_d12;
  local_2b0 = auVar427._0_8_;
  uVar48 = uVar39;
LAB_00867710:
  uVar55 = uStack_1a8;
  uVar54 = local_1b0;
  fVar219 = fStack_1d4;
  fVar218 = fStack_1dc;
  fVar108 = fStack_1e0;
  fVar106 = fStack_244;
  fVar147 = fStack_24c;
  fVar226 = local_250;
  fVar220 = uStack_268._4_4_;
  fVar227 = (float)uStack_268;
  fVar217 = local_270[1];
  fVar216 = local_270[0];
  uVar183 = (uint)uVar37 | uVar39 << 3;
  fVar113 = (float)(uVar179 >> 0x20);
  fVar256 = (float)uVar180;
  fVar151 = (float)((ulong)uVar180 >> 0x20);
  uVar49 = local_ac[0];
  uVar198 = local_b0;
  fVar224 = local_210[1];
  fVar245 = fStack_204;
  pauVar31 = local_168;
  pauVar42 = local_158;
  if (0x18 < uVar183 - 9) {
switchD_00867738_caseD_16:
                    /* WARNING: This code block may not be properly labeled as switch case */
    bVar33 = true;
    goto code_r0x00868590;
  }
  bVar105 = (byte)_DAT_03cab270;
  bVar149 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  bVar358 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  bVar359 = (byte)_UNK_03cab278;
  bVar360 = (byte)((ulong)_UNK_03cab278 >> 8);
  bVar362 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  bVar363 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  bVar364 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  bVar365 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  bVar367 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  bVar368 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  pfVar36 = local_270;
  pfVar43 = local_210;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar183) {
  case 0x12:
switchD_00867738_caseD_12:
    auVar184._0_8_ = CONCAT44(local_270[1] - local_210[1],local_270[0] - local_210[0]);
    in_register_00005188 = CONCAT44(uStack_268._4_4_ - fStack_204,(float)uStack_268 - local_210[2]);
    break;
  case 0x13:
    goto switchD_00867738_caseD_13;
  case 0x14:
switchD_00867738_caseD_14:
    fVar226 = fStack_1e4;
    fVar220 = fStack_1ec;
    fVar227 = local_1f0;
    fVar217 = fStack_204;
    fVar216 = local_210[2];
    fVar245 = local_210[1];
    fVar224 = local_210[0];
    auVar313._0_4_ = local_1f0 - local_200;
    auVar313._4_4_ = fStack_1ec - fStack_1fc;
    auVar313._8_4_ = fStack_1e8 - fStack_1f8;
    auVar313._12_4_ = fStack_1e4 - fStack_1f4;
    auVar349._0_4_ = local_210[0] - local_1f0;
    auVar349._4_4_ = local_210[1] - fStack_1ec;
    auVar349._8_4_ = local_210[2] - fStack_1e8;
    auVar349._12_4_ = fStack_204 - fStack_1e4;
    auVar208._0_4_ = local_270[0] - local_200;
    auVar208._4_4_ = local_270[1] - fStack_1fc;
    auVar208._8_4_ = (float)uStack_268 - fStack_1f8;
    auVar208._12_4_ = uStack_268._4_4_ - fStack_1f4;
    auVar229 = NEON_ext(auVar349,auVar349,4,1);
    auVar212._0_4_ = local_270[0] - local_1f0;
    auVar212._4_4_ = local_270[1] - fStack_1ec;
    auVar212._8_4_ = (float)uStack_268 - fStack_1e8;
    auVar212._12_4_ = uStack_268._4_4_ - fStack_1e4;
    auVar427 = NEON_ext(auVar313,auVar313,4,1);
    auVar110 = NEON_ext(auVar208,auVar208,4,1);
    auVar392._0_4_ = local_200 - local_210[0];
    auVar392._4_4_ = fStack_1fc - local_210[1];
    auVar392._8_4_ = fStack_1f8 - local_210[2];
    auVar392._12_4_ = fStack_1f4 - fStack_204;
    auVar314._0_4_ = auVar208._0_4_ * auVar427._0_4_ - auVar313._0_4_ * auVar110._0_4_;
    auVar314._4_4_ = auVar208._4_4_ * auVar427._4_4_ - auVar313._4_4_ * auVar110._4_4_;
    auVar314._8_4_ = auVar208._8_4_ * auVar313._0_4_ - auVar313._8_4_ * auVar208._0_4_;
    auVar314._12_4_ = auVar208._12_4_ * auVar313._4_4_ - auVar313._12_4_ * auVar208._4_4_;
    auVar275 = NEON_ext(auVar314,auVar314,4,1);
    auVar307._0_4_ = auVar313._0_4_ * auVar229._0_4_ - auVar349._0_4_ * auVar427._0_4_;
    auVar307._4_4_ = auVar313._4_4_ * auVar229._4_4_ - auVar349._4_4_ * auVar427._4_4_;
    auVar307._8_4_ = auVar313._8_4_ * auVar349._0_4_ - auVar349._8_4_ * auVar313._0_4_;
    auVar307._12_4_ = auVar313._12_4_ * auVar349._4_4_ - auVar349._12_4_ * auVar313._4_4_;
    auVar184 = NEON_ext(auVar307,auVar307,4,1);
    auVar284._0_4_ = local_270[0] - local_210[0];
    auVar284._4_4_ = local_270[1] - local_210[1];
    auVar284._8_4_ = (float)uStack_268 - local_210[2];
    auVar284._12_4_ = uStack_268._4_4_ - fStack_204;
    in_register_00005188 = (ulong)(uint)auVar307._0_4_;
    auVar427 = NEON_ext(auVar212,auVar212,4,1);
    auVar110 = NEON_ext(auVar392,auVar392,4,1);
    auVar315._0_4_ = auVar212._0_4_ * auVar229._0_4_ - auVar349._0_4_ * auVar427._0_4_;
    auVar315._4_4_ = auVar212._4_4_ * auVar229._4_4_ - auVar349._4_4_ * auVar427._4_4_;
    auVar315._8_4_ = auVar212._8_4_ * auVar349._0_4_ - auVar349._8_4_ * auVar212._0_4_;
    auVar315._12_4_ = auVar212._12_4_ * auVar349._4_4_ - auVar349._12_4_ * auVar212._4_4_;
    auVar229 = NEON_ext(auVar315,auVar315,4,1);
    fVar221 = auVar184._4_4_;
    auVar427 = NEON_ext(auVar284,auVar284,4,1);
    fVar147 = auVar184._0_4_;
    fVar106 = fVar147 * auVar229._0_4_;
    auVar393._0_4_ = auVar284._0_4_ * auVar110._0_4_ - auVar392._0_4_ * auVar427._0_4_;
    auVar393._4_4_ = auVar284._4_4_ * auVar110._4_4_ - auVar392._4_4_ * auVar427._4_4_;
    auVar393._8_4_ = auVar284._8_4_ * auVar392._0_4_ - auVar392._8_4_ * auVar284._0_4_;
    auVar393._12_4_ = auVar284._12_4_ * auVar392._4_4_ - auVar392._12_4_ * auVar284._4_4_;
    auVar406._0_4_ = fVar147 * auVar275._0_4_;
    auVar406._4_4_ = fVar221 * auVar275._4_4_;
    auVar406._8_4_ = auVar307._0_4_ * auVar314._0_4_;
    auVar406._12_4_ = auVar314._4_4_ * 0.0;
    auVar110 = NEON_ext(auVar393,auVar393,4,1);
    auVar407._4_12_ = auVar406._4_12_;
    auVar407._0_4_ = auVar406._0_4_;
    auVar409._0_8_ = auVar407._0_8_;
    auVar409._8_4_ = auVar406._8_4_;
    auVar409._12_4_ = auVar406._12_4_;
    auVar408._8_8_ = auVar409._8_8_;
    auVar408._4_4_ = fVar106;
    auVar408._0_4_ = auVar406._0_4_;
    auVar410._0_12_ = auVar408._0_12_;
    auVar410._12_4_ = auVar307._0_4_ * auVar315._0_4_;
    fVar219 = fVar147 * auVar110._0_4_;
    fVar255 = fVar221 * auVar110._4_4_;
    auVar110 = NEON_ext(auVar410,auVar410,8,1);
    fVar108 = auVar110._0_4_ + fVar221 * auVar275._4_4_ + auVar406._0_4_;
    fVar218 = auVar110._4_4_ + fVar221 * auVar229._4_4_ + fVar106;
    auVar316._0_8_ = CONCAT44(fVar218,fVar108);
    fVar106 = fVar219 + fVar255 + auVar307._0_4_ * auVar393._0_4_;
    uStack_1a8 = CONCAT44(fVar219 + fVar255 + auVar307._0_4_ * auVar393._0_4_,fVar106);
    auVar316._8_8_ = uStack_1a8;
    uVar39 = (-(uint)(fVar218 < 0.0) & 2) + (uint)(fVar108 < 0.0) | -(uint)(fVar106 < 0.0) & 4;
    if (uVar39 != 7) {
      local_b0 = 2;
      bVar105 = PTR_DAT_047d1a28[uVar39];
      local_1b0 = auVar316._0_8_;
      if ((char)bVar105 < '\0') {
        if (-6 < (char)bVar105) goto LAB_00868d48;
        lVar40 = (long)((char)bVar105 + 8);
        local_210[lVar40 * 4 + 2] = fStack_1e8;
        local_210[lVar40 * 4 + 3] = fVar226;
        afStack_220[lVar40 * 4 + 4] = fVar227;
        afStack_220[lVar40 * 4 + 5] = fVar220;
      }
      else {
        uVar37 = (ulong)bVar105;
        cVar4 = PTR_DAT_047d1a30[uVar37];
        lVar40 = (long)cVar4;
        cVar295 = PTR_DAT_047d1a30[(long)(int)(char)bVar105 + 2];
        lVar38 = (long)cVar295;
        fVar224 = afStack_220[uVar37 * 4 + 4];
        fVar245 = afStack_220[uVar37 * 4 + 5];
        fVar216 = local_210[uVar37 * 4 + 2];
        fVar217 = local_210[uVar37 * 4 + 3];
        auVar263._0_4_ = (local_270[0] - fVar224) * (afStack_220[lVar40 * 4 + 4] - fVar224);
        auVar263._4_4_ = (local_270[1] - fVar245) * (afStack_220[lVar40 * 4 + 5] - fVar245);
        auVar263._8_4_ = ((float)uStack_268 - fVar216) * (local_210[lVar40 * 4 + 2] - fVar216);
        auVar263._12_4_ = (uStack_268._4_4_ - fVar217) * (local_210[lVar40 * 4 + 3] - fVar217);
        auVar110 = NEON_ext(auVar263,auVar263,8,1);
        if (auVar263._0_4_ + auVar263._4_4_ + auVar110._0_4_ < 0.0) {
          fVar147 = afStack_220[lVar38 * 4 + 4];
          fVar106 = afStack_220[lVar38 * 4 + 5];
          fVar108 = local_210[lVar38 * 4 + 2];
          fVar218 = local_210[lVar38 * 4 + 3];
          local_210[lVar40 * 4 + 2] = fStack_1e8;
          local_210[lVar40 * 4 + 3] = fVar226;
          afStack_220[lVar40 * 4 + 4] = fVar227;
          afStack_220[lVar40 * 4 + 5] = fVar220;
          auVar184._0_8_ = _local_200;
          auVar194._0_4_ = (local_270[0] - fVar224) * (fVar147 - fVar224);
          auVar194._4_4_ = (local_270[1] - fVar245) * (fVar106 - fVar245);
          auVar194._8_4_ = ((float)uStack_268 - fVar216) * (fVar108 - fVar216);
          auVar194._12_4_ = (uStack_268._4_4_ - fVar217) * (fVar218 - fVar217);
          auVar110 = NEON_ext(auVar194,auVar194,8,1);
          if (auVar194._0_4_ + auVar194._4_4_ + auVar110._0_4_ < 0.0) {
            if (cVar295 != '\x02') {
              cVar4 = cVar295;
            }
            local_b0 = 1;
            *(undefined8 *)(local_210 + (long)cVar4 * 4 + 2) = _fStack_1f8;
            *(undefined8 *)(afStack_220 + (long)cVar4 * 4 + 4) = auVar184._0_8_;
            goto switchD_00867738_caseD_12;
          }
        }
        else {
          local_210[lVar38 * 4 + 2] = fStack_1e8;
          local_210[lVar38 * 4 + 3] = fVar226;
          afStack_220[lVar38 * 4 + 4] = fVar227;
          afStack_220[lVar38 * 4 + 5] = fVar220;
        }
      }
      goto switchD_00867738_caseD_13;
    }
    auVar191._0_4_ = auVar284._0_4_ * fVar147;
    auVar191._4_4_ = auVar284._4_4_ * fVar221;
    auVar191._8_4_ = auVar284._8_4_ * auVar307._0_4_;
    auVar191._12_4_ = auVar284._12_4_ * 0.0;
    auVar110 = NEON_ext(auVar191,auVar191,8,1);
    if (auVar110._0_4_ + auVar191._0_4_ + auVar191._4_4_ < 0.0) {
      auVar184._0_8_ = CONCAT44(-fVar221,-fVar147);
      in_register_00005188 = CONCAT44(0x80000000,-auVar307._0_4_);
      auVar192._8_8_ = _UNK_03caa978;
      auVar192._0_8_ = _DAT_03caa970;
      local_210[2] = fStack_1f8;
      fStack_204 = fStack_1f4;
      local_210[0] = local_200;
      local_210[1] = fStack_1fc;
      fStack_1f4 = fVar217;
      fStack_1f8 = fVar216;
      fStack_1fc = fVar245;
      local_200 = fVar224;
      auVar316 = a64_TBL(ZEXT816(0),auVar316,auVar192);
    }
    uStack_1a8 = auVar316._8_8_;
    local_1b0 = auVar316._0_8_;
    break;
  case 0x15:
    auVar223._0_4_ = fStack_1e0 - local_1f0;
    auVar223._4_4_ = fStack_1dc - fStack_1ec;
    auVar223._8_4_ = fStack_1d8 - fStack_1e8;
    auVar223._12_4_ = fStack_1d4 - fStack_1e4;
    auVar261._0_4_ = local_1f0 - local_200;
    auVar261._4_4_ = fStack_1ec - fStack_1fc;
    auVar261._8_4_ = fStack_1e8 - fStack_1f8;
    auVar261._12_4_ = fStack_1e4 - fStack_1f4;
    auVar110 = NEON_ext(auVar261,auVar261,4,1);
    auVar251._0_4_ = fStack_1e0 - local_200;
    auVar251._4_4_ = fStack_1dc - fStack_1fc;
    auVar251._8_4_ = fStack_1d8 - fStack_1f8;
    auVar251._12_4_ = fStack_1d4 - fStack_1f4;
    auVar427 = NEON_ext(auVar251,auVar251,4,1);
    fVar415 = local_210[0] - local_1f0;
    fVar432 = local_210[1] - fStack_1ec;
    fVar225 = local_210[2] - fStack_1e8;
    fVar213 = fStack_204 - fStack_1e4;
    auVar210._0_4_ = local_200 - local_210[0];
    auVar210._4_4_ = fStack_1fc - local_210[1];
    auVar210._8_4_ = fStack_1f8 - local_210[2];
    auVar210._12_4_ = fStack_1f4 - fStack_204;
    auVar430._0_4_ = fStack_1e0 - local_210[0];
    auVar430._4_4_ = fStack_1dc - local_210[1];
    auVar430._8_4_ = fStack_1d8 - local_210[2];
    auVar430._12_4_ = fStack_1d4 - fStack_204;
    auVar229 = NEON_ext(auVar430,auVar430,4,1);
    fVar377 = fVar111 * (local_270[0] - fStack_1e0);
    fVar200 = fVar113 * (local_270[1] - fStack_1dc);
    fVar269 = fVar111 * ((float)uStack_268 - fStack_1d8);
    auVar79._0_4_ = auVar261._0_4_ * auVar427._0_4_ - auVar251._0_4_ * auVar110._0_4_;
    auVar79._4_4_ = auVar261._4_4_ * auVar427._4_4_ - auVar251._4_4_ * auVar110._4_4_;
    auVar79._8_4_ = auVar261._8_4_ * auVar251._0_4_ - auVar251._8_4_ * auVar261._0_4_;
    auVar79._12_4_ = auVar261._12_4_ * auVar251._4_4_ - auVar251._12_4_ * auVar261._4_4_;
    auVar427 = NEON_ext(auVar223,auVar223,4,1);
    auVar275 = NEON_ext(auVar79,auVar79,4,1);
    fVar266 = auVar275._4_4_;
    auVar15._4_4_ = fVar432;
    auVar15._0_4_ = fVar415;
    auVar15._8_4_ = fVar225;
    auVar15._12_4_ = fVar213;
    auVar16._4_4_ = fVar432;
    auVar16._0_4_ = fVar415;
    auVar16._8_4_ = fVar225;
    auVar16._12_4_ = fVar213;
    auVar110 = NEON_ext(auVar15,auVar16,4,1);
    fVar395 = auVar275._0_4_;
    auVar80._0_4_ = fVar415 * auVar427._0_4_ - auVar223._0_4_ * auVar110._0_4_;
    auVar80._4_4_ = fVar432 * auVar427._4_4_ - auVar223._4_4_ * auVar110._4_4_;
    auVar80._8_4_ = fVar225 * auVar223._0_4_ - auVar223._8_4_ * fVar415;
    auVar80._12_4_ = fVar213 * auVar223._4_4_ - auVar223._12_4_ * fVar432;
    auVar427 = NEON_ext(auVar80,auVar80,4,1);
    auVar110 = NEON_ext(auVar210,auVar210,4,1);
    fVar221 = auVar427._0_4_;
    fVar255 = auVar427._4_4_;
    auVar81._0_4_ = auVar210._0_4_ * auVar229._0_4_ - auVar430._0_4_ * auVar110._0_4_;
    auVar81._4_4_ = auVar210._4_4_ * auVar229._4_4_ - auVar430._4_4_ * auVar110._4_4_;
    auVar81._8_4_ = auVar210._8_4_ * auVar430._0_4_ - auVar430._8_4_ * auVar210._0_4_;
    auVar81._12_4_ = auVar210._12_4_ * auVar430._4_4_ - auVar430._12_4_ * auVar210._4_4_;
    auVar110 = NEON_ext(auVar81,auVar81,4,1);
    fVar418 = auVar110._0_4_;
    fVar424 = auVar110._4_4_;
    auVar232._4_4_ = fVar377 * fVar221;
    auVar232._0_4_ = fVar377 * fVar395;
    auVar232._8_4_ = fVar269 * auVar79._0_4_;
    auVar232._12_4_ = fVar269 * auVar80._0_4_;
    auVar110 = NEON_ext(auVar232,auVar232,8,1);
    fVar182 = auVar110._0_4_ + fVar200 * fVar266 + fVar377 * fVar395;
    fVar197 = auVar110._4_4_ + fVar200 * fVar255 + fVar377 * fVar221;
    fVar366 = fVar377 * fVar418 + fVar200 * fVar424 + fVar269 * auVar81._0_4_;
    fVar200 = fVar377 * fVar418 + fVar200 * fVar424 + fVar269 * auVar81._0_4_;
    auVar129._4_4_ = fVar221 * fVar221;
    auVar129._0_4_ = fVar395 * fVar395;
    auVar129._8_4_ = auVar79._0_4_ * auVar79._0_4_;
    auVar129._12_4_ = auVar80._0_4_ * auVar80._0_4_;
    auVar110 = NEON_ext(auVar129,auVar129,8,1);
    fVar266 = auVar110._0_4_ + fVar266 * fVar266 + fVar395 * fVar395;
    fVar377 = auVar110._4_4_ + fVar255 * fVar255 + fVar221 * fVar221;
    fVar221 = fVar418 * fVar418 + fVar424 * fVar424 + auVar81._0_4_ * auVar81._0_4_;
    fVar255 = fVar418 * fVar418 + fVar424 * fVar424 + auVar81._0_4_ * auVar81._0_4_;
    iVar289 = -(uint)(fVar266 == 0.0);
    iVar291 = -(uint)(fVar377 == 0.0);
    iVar293 = -(uint)(fVar221 == 0.0);
    iVar425 = -(uint)(fVar255 == 0.0);
    auVar280[0] = ~(byte)iVar289;
    auVar280[1] = ~(byte)((uint)iVar289 >> 8);
    auVar280[2] = ~(byte)((uint)iVar289 >> 0x10);
    auVar280[3] = ~(byte)((uint)iVar289 >> 0x18);
    auVar280[4] = ~(byte)iVar291;
    auVar280[5] = ~(byte)((uint)iVar291 >> 8);
    auVar280[6] = ~(byte)((uint)iVar291 >> 0x10);
    auVar280[7] = ~(byte)((uint)iVar291 >> 0x18);
    auVar280[8] = ~(byte)iVar293;
    auVar280[9] = ~(byte)((uint)iVar293 >> 8);
    auVar280[10] = ~(byte)((uint)iVar293 >> 0x10);
    auVar280[0xb] = ~(byte)((uint)iVar293 >> 0x18);
    auVar280[0xc] = ~(byte)iVar425;
    auVar280[0xd] = ~(byte)((uint)iVar425 >> 8);
    auVar280[0xe] = ~(byte)((uint)iVar425 >> 0x10);
    auVar280[0xf] = ~(byte)((uint)iVar425 >> 0x18);
    auVar130._0_4_ = (fVar111 / fVar266) * fVar182 * ABS(fVar182);
    auVar130._4_4_ = (fVar113 / fVar377) * fVar197 * ABS(fVar197);
    auVar130._8_4_ = (fVar256 / fVar221) * fVar366 * ABS(fVar366);
    auVar130._12_4_ = (fVar151 / fVar255) * fVar200 * ABS(fVar200);
    auVar110 = auVar258 ^ (auVar258 ^ auVar130) & auVar280;
    auVar272._0_8_ = auVar110._0_8_;
    uVar54 = NEON_fmaxp(auVar272._0_8_,auVar272._0_8_,4);
    fVar221 = auVar110._8_4_;
    uVar54 = NEON_fmax(CONCAT44(fVar221,fVar221),uVar54,4);
    fVar255 = (float)uVar54;
    if (9.9999994e-11 <= fVar255) {
      auVar281._0_4_ = auVar110._0_4_;
      cVar4 = PTR_DAT_047d1a18
              [(-(uint)((float)((ulong)uVar54 >> 0x20) <= auVar110._4_4_) & 2) +
               (uint)(fVar255 <= auVar281._0_4_) | -(uint)(fVar255 <= fVar221) & 4];
      if (cVar4 == '\x03') {
        auVar272 = auVar110._0_12_;
      }
      else {
        local_390 = (undefined4)uVar18;
        if (cVar4 == '\x02') {
          auVar272._8_4_ = local_390;
        }
        else if (cVar4 == '\x01') {
          auVar281._8_8_ = auVar110._8_8_;
          auVar281._4_4_ = local_390;
          auVar272 = auVar281._0_12_;
        }
        else {
          auVar282._4_12_ = auVar110._4_12_;
          auVar282._0_4_ = local_390;
          auVar272 = auVar282._0_12_;
        }
      }
      uVar54 = NEON_fmaxp(auVar272._0_8_,auVar272._0_8_,4);
      uVar54 = NEON_fmax(CONCAT44(auVar272._8_4_,auVar272._8_4_),uVar54,4);
      if (fVar255 <= (float)uVar54 * 1.1) {
        iVar289 = -(uint)(0.0 <= fVar366);
        iVar291 = -(uint)(0.0 <= fVar200);
        uVar183 = (uint)(-(0.0 <= fVar182) & bVar105);
        auVar59._0_8_ =
             CONCAT17((byte)(-(uint)(0.0 <= fVar197) >> 0x18) & bVar358,
                      (uint7)CONCAT14((byte)-(uint)(0.0 <= fVar197) & bVar149,uVar183));
        auVar59[8] = (byte)iVar289 & bVar359;
        auVar59[9] = (byte)((uint)iVar289 >> 8) & bVar360;
        auVar59[10] = (byte)((uint)iVar289 >> 0x10) & bVar362;
        auVar59[0xb] = (byte)((uint)iVar289 >> 0x18) & bVar363;
        auVar82[0xc] = (byte)iVar291 & bVar364;
        auVar82._0_12_ = auVar59;
        auVar82[0xd] = (byte)((uint)iVar291 >> 8) & bVar365;
        auVar82[0xe] = (byte)((uint)iVar291 >> 0x10) & bVar367;
        auVar82[0xf] = (byte)((uint)iVar291 >> 0x18) & bVar368;
        uVar183 = uVar183 + (int)((ulong)auVar59._0_8_ >> 0x20) + auVar59._8_4_ + auVar82._12_4_;
        if ((~uVar183 & 3) == 0) {
          auVar160._0_4_ = (local_270[0] - local_1f0) * fVar415;
          auVar160._4_4_ = (local_270[1] - fStack_1ec) * fVar432;
          auVar160._8_4_ = ((float)uStack_268 - fStack_1e8) * fVar225;
          auVar160._12_4_ = (uStack_268._4_4_ - fStack_1e4) * fVar213;
          auVar110 = NEON_ext(auVar160,auVar160,8,1);
          auVar131._0_4_ = (local_270[0] - local_1f0) * (local_200 - local_1f0);
          auVar131._4_4_ = (local_270[1] - fStack_1ec) * (fStack_1fc - fStack_1ec);
          auVar131._8_4_ = ((float)uStack_268 - fStack_1e8) * (fStack_1f8 - fStack_1e8);
          auVar131._12_4_ = (uStack_268._4_4_ - fStack_1e4) * (fStack_1f4 - fStack_1e4);
          auVar83._0_4_ = (local_200 - local_1f0) * auVar223._0_4_;
          auVar83._4_4_ = (fStack_1fc - fStack_1ec) * auVar223._4_4_;
          auVar83._8_4_ = (fStack_1f8 - fStack_1e8) * auVar223._8_4_;
          auVar83._12_4_ = (fStack_1f4 - fStack_1e4) * auVar223._12_4_;
          auVar427 = NEON_ext(auVar131,auVar131,8,1);
          auVar237._0_4_ = fVar415 * auVar223._0_4_;
          auVar237._4_4_ = fVar432 * auVar223._4_4_;
          auVar237._8_4_ = fVar225 * auVar223._8_4_;
          auVar237._12_4_ = fVar213 * auVar223._12_4_;
          auVar229 = NEON_ext(auVar237,auVar237,8,1);
          auVar275 = NEON_ext(auVar83,auVar83,8,1);
          uVar47 = 0xfffffffd;
          if ((auVar427._0_4_ + auVar131._0_4_ + auVar131._4_4_) *
              (auVar229._0_4_ + auVar237._0_4_ + auVar237._4_4_) <=
              (auVar110._0_4_ + auVar160._0_4_ + auVar160._4_4_) *
              (auVar275._0_4_ + auVar83._0_4_ + auVar83._4_4_)) {
            uVar47 = 0xfffffffe;
          }
          uVar183 = uVar47 & uVar183;
        }
        if ((~uVar183 & 6) == 0) {
          auVar162._0_4_ = (local_270[0] - local_210[0]) * auVar210._0_4_;
          auVar162._4_4_ = (local_270[1] - local_210[1]) * auVar210._4_4_;
          auVar162._8_4_ = ((float)uStack_268 - local_210[2]) * auVar210._8_4_;
          auVar162._12_4_ = (uStack_268._4_4_ - fStack_204) * auVar210._12_4_;
          auVar110 = NEON_ext(auVar162,auVar162,8,1);
          auVar133._0_4_ = (local_270[0] - local_210[0]) * (local_1f0 - local_210[0]);
          auVar133._4_4_ = (local_270[1] - local_210[1]) * (fStack_1ec - local_210[1]);
          auVar133._8_4_ = ((float)uStack_268 - local_210[2]) * (fStack_1e8 - local_210[2]);
          auVar133._12_4_ = (uStack_268._4_4_ - fStack_204) * (fStack_1e4 - fStack_204);
          auVar85._0_4_ = (local_1f0 - local_210[0]) * auVar430._0_4_;
          auVar85._4_4_ = (fStack_1ec - local_210[1]) * auVar430._4_4_;
          auVar85._8_4_ = (fStack_1e8 - local_210[2]) * auVar430._8_4_;
          auVar85._12_4_ = (fStack_1e4 - fStack_204) * auVar430._12_4_;
          auVar427 = NEON_ext(auVar133,auVar133,8,1);
          auVar239._0_4_ = auVar210._0_4_ * auVar430._0_4_;
          auVar239._4_4_ = auVar210._4_4_ * auVar430._4_4_;
          auVar239._8_4_ = auVar210._8_4_ * auVar430._8_4_;
          auVar239._12_4_ = auVar210._12_4_ * auVar430._12_4_;
          auVar229 = NEON_ext(auVar239,auVar239,8,1);
          auVar275 = NEON_ext(auVar85,auVar85,8,1);
          uVar47 = 0xfffffffb;
          if ((auVar427._0_4_ + auVar133._0_4_ + auVar133._4_4_) *
              (auVar229._0_4_ + auVar239._0_4_ + auVar239._4_4_) <=
              (auVar110._0_4_ + auVar162._0_4_ + auVar162._4_4_) *
              (auVar275._0_4_ + auVar85._0_4_ + auVar85._4_4_)) {
            uVar47 = 0xfffffffd;
          }
          uVar183 = uVar47 & uVar183;
        }
        if (((uVar183 ^ 0xffffffff) & 5) == 0) {
          auVar161._0_4_ = auVar261._0_4_ * (local_270[0] - local_200);
          auVar161._4_4_ = auVar261._4_4_ * (local_270[1] - fStack_1fc);
          auVar161._8_4_ = auVar261._8_4_ * ((float)uStack_268 - fStack_1f8);
          auVar161._12_4_ = auVar261._12_4_ * (uStack_268._4_4_ - fStack_1f4);
          auVar110 = NEON_ext(auVar161,auVar161,8,1);
          auVar132._0_4_ = (local_270[0] - local_200) * (local_210[0] - local_200);
          auVar132._4_4_ = (local_270[1] - fStack_1fc) * (local_210[1] - fStack_1fc);
          auVar132._8_4_ = ((float)uStack_268 - fStack_1f8) * (local_210[2] - fStack_1f8);
          auVar132._12_4_ = (uStack_268._4_4_ - fStack_1f4) * (fStack_204 - fStack_1f4);
          auVar84._0_4_ = (local_210[0] - local_200) * auVar251._0_4_;
          auVar84._4_4_ = (local_210[1] - fStack_1fc) * auVar251._4_4_;
          auVar84._8_4_ = (local_210[2] - fStack_1f8) * auVar251._8_4_;
          auVar84._12_4_ = (fStack_204 - fStack_1f4) * auVar251._12_4_;
          auVar427 = NEON_ext(auVar132,auVar132,8,1);
          auVar238._0_4_ = auVar261._0_4_ * auVar251._0_4_;
          auVar238._4_4_ = auVar261._4_4_ * auVar251._4_4_;
          auVar238._8_4_ = auVar261._8_4_ * auVar251._8_4_;
          auVar238._12_4_ = auVar261._12_4_ * auVar251._12_4_;
          auVar229 = NEON_ext(auVar84,auVar84,8,1);
          auVar275 = NEON_ext(auVar238,auVar238,8,1);
          uVar47 = 0xfffffffe;
          if ((auVar427._0_4_ + auVar132._0_4_ + auVar132._4_4_) *
              (auVar275._0_4_ + auVar238._0_4_ + auVar238._4_4_) <=
              (auVar110._0_4_ + auVar161._0_4_ + auVar161._4_4_) *
              (auVar229._0_4_ + auVar84._0_4_ + auVar84._4_4_)) {
            uVar47 = 0xfffffffb;
          }
          uVar183 = uVar47 & uVar183;
        }
        cVar4 = PTR_DAT_047d1a20[(ulong)uVar183 & 7];
      }
      if (cVar4 < 0) goto switchD_00867738_caseD_16;
      uVar37 = (ulong)(uint)(int)cVar4;
      local_210[uVar37 * 4 + 2] = fStack_1d8;
      local_210[uVar37 * 4 + 3] = fVar219;
      local_210[uVar37 * 4] = fVar108;
      afStack_220[uVar37 * 4 + 5] = fVar218;
      if (uVar39 == 4) {
        local_ac[0] = 3;
        goto switchD_00867738_caseD_22;
      }
      local_b0 = 3;
      goto switchD_00867738_caseD_14;
    }
    goto LAB_00868588;
  default:
    goto switchD_00867738_caseD_16;
  case 0x1a:
    goto switchD_00867738_caseD_1a;
  case 0x1b:
    goto switchD_00867738_caseD_1b;
  case 0x1c:
    pfVar43 = local_270;
    pfVar36 = local_210;
  case 0x23:
                    /* WARNING: This code block may not be properly labeled as switch case */
    local_290 = auVar63._0_4_;
    fStack_28c = auVar63._4_4_;
    fStack_288 = auVar63._8_4_;
    if (local_1a0 == 2) {
      fVar216 = pfVar36[4];
      fVar217 = pfVar36[5];
      fVar227 = pfVar36[6];
      fVar220 = pfVar36[7];
      fVar226 = pfVar36[8];
      fVar147 = pfVar36[9];
      fVar106 = pfVar36[10];
      fVar108 = pfVar36[0xb];
      auVar275._0_4_ = fVar216 - fVar226;
      auVar275._4_4_ = fVar217 - fVar147;
      auVar275._8_4_ = fVar227 - fVar106;
      auVar275._12_4_ = fVar220 - fVar108;
      fVar218 = *pfVar36;
      fVar219 = pfVar36[1];
      fVar221 = pfVar36[2];
      fVar255 = pfVar36[3];
      auVar346._0_4_ = fVar218 - fVar226;
      auVar346._4_4_ = fVar219 - fVar147;
      auVar346._8_4_ = fVar221 - fVar106;
      auVar346._12_4_ = fVar255 - fVar108;
      auVar427 = NEON_ext(auVar346,auVar346,4,1);
      auVar110 = NEON_ext(auVar275,auVar275,4,1);
      fVar267 = auVar427._0_4_;
      fVar270 = auVar427._4_4_;
      fVar395 = auVar110._0_4_;
      fVar257 = auVar110._4_4_;
      auVar229._0_4_ = auVar275._0_4_ * fVar267 - auVar346._0_4_ * fVar395;
      auVar229._4_4_ = auVar275._4_4_ * fVar270 - auVar346._4_4_ * fVar257;
      auVar229._8_4_ = auVar275._8_4_ * auVar346._0_4_ - auVar346._8_4_ * auVar275._0_4_;
      auVar229._12_4_ = auVar275._12_4_ * auVar346._4_4_ - auVar346._12_4_ * auVar275._4_4_;
      auVar110 = NEON_ext(auVar229,auVar229,4,1);
      fVar415 = *pfVar43;
      fVar432 = pfVar43[1];
      fVar225 = pfVar43[2];
      fVar213 = pfVar43[3];
      fVar266 = pfVar43[4];
      fVar377 = pfVar43[5];
      fVar418 = pfVar43[6];
      fVar424 = pfVar43[7];
      fVar182 = (fVar415 - fVar218) * auVar110._0_4_;
      fVar197 = (fVar432 - fVar219) * auVar110._4_4_;
      fVar200 = (fVar225 - fVar221) * auVar229._0_4_;
      fVar324 = (fVar266 - fVar218) * auVar110._0_4_;
      fVar361 = (fVar377 - fVar219) * auVar110._4_4_;
      fVar366 = (fVar418 - fVar221) * auVar229._0_4_;
      fVar269 = fVar182 + fVar197 + fVar200;
      fVar200 = fVar182 + fVar197 + fVar200;
      fVar182 = fVar324 + fVar361 + fVar366;
      fVar366 = fVar324 + fVar361 + fVar366;
      if (fVar269 * fVar182 < 0.0) {
        auVar326._0_4_ = fVar266 - fVar415;
        auVar326._4_4_ = fVar377 - fVar432;
        auVar326._8_4_ = fVar418 - fVar225;
        auVar326._12_4_ = fVar424 - fVar213;
        fVar269 = fVar269 / (fVar269 - fVar182);
        fVar200 = fVar200 / (fVar200 - fVar366);
        auVar222._0_4_ = fVar216 - fVar218;
        auVar222._4_4_ = fVar217 - fVar219;
        auVar222._8_4_ = fVar227 - fVar221;
        auVar222._12_4_ = fVar220 - fVar255;
        auVar402._0_4_ = fVar226 - fVar218;
        auVar402._4_4_ = fVar147 - fVar219;
        auVar402._8_4_ = fVar106 - fVar221;
        auVar402._12_4_ = fVar108 - fVar255;
        auVar110 = NEON_ext(auVar222,auVar222,4,1);
        auVar427 = NEON_ext(auVar402,auVar402,4,1);
        auVar386._8_8_ = _UNK_03cabbd8;
        auVar386._0_8_ = _DAT_03cabbd0;
        auVar401._8_8_ = _UNK_03cabbc8;
        auVar401._0_8_ = _DAT_03cabbc0;
        auVar333._0_4_ = auVar222._0_4_ * auVar427._0_4_ - auVar402._0_4_ * auVar110._0_4_;
        auVar333._4_4_ = auVar222._4_4_ * auVar427._4_4_ - auVar402._4_4_ * auVar110._4_4_;
        auVar333._8_4_ = auVar222._8_4_ * auVar402._0_4_ - auVar402._8_4_ * auVar222._0_4_;
        auVar333._12_4_ = auVar222._12_4_ * auVar402._4_4_ - auVar402._12_4_ * auVar222._4_4_;
        auVar110 = NEON_ext(auVar333,auVar333,4,1);
        fVar266 = fVar415 + auVar326._0_4_ * fVar269;
        fVar377 = fVar432 + auVar326._4_4_ * fVar200;
        fVar418 = fVar225 + auVar326._8_4_ * fVar269;
        fVar424 = fVar213 + auVar326._12_4_ * fVar200;
        auVar332._0_8_ = auVar110._0_8_;
        auVar332._8_4_ = auVar333._0_4_;
        auVar332._12_4_ = 0;
        auVar277._0_4_ = fVar218 - fVar266;
        auVar277._4_4_ = fVar219 - fVar377;
        auVar277._8_4_ = fVar221 - fVar418;
        auVar277._12_4_ = fVar255 - fVar424;
        auVar380._0_4_ = fVar216 - fVar266;
        auVar380._4_4_ = fVar217 - fVar377;
        auVar380._8_4_ = fVar227 - fVar418;
        auVar380._12_4_ = fVar220 - fVar424;
        auVar428._0_4_ = fVar226 - fVar266;
        auVar428._4_4_ = fVar147 - fVar377;
        auVar428._8_4_ = fVar106 - fVar418;
        auVar428._12_4_ = fVar108 - fVar424;
        auVar427 = a64_TBL(ZEXT816(0),auVar380,auVar386);
        auVar222 = a64_TBL(ZEXT816(0),auVar277,auVar386);
        auVar420 = a64_TBL(ZEXT816(0),auVar332,auVar401);
        auVar229 = a64_TBL(ZEXT816(0),auVar428,auVar386);
        auVar333 = a64_TBL(ZEXT816(0),auVar332,auVar386);
        auVar110 = a64_TBL(ZEXT816(0),auVar380,auVar401);
        fVar218 = auVar420._0_4_;
        fVar219 = auVar420._4_4_;
        fVar221 = auVar420._8_4_;
        auVar386 = a64_TBL(ZEXT816(0),auVar428,auVar401);
        auVar402 = a64_TBL(ZEXT816(0),auVar277,auVar401);
        fVar216 = auVar333._0_4_;
        fVar217 = auVar333._4_4_;
        fVar227 = auVar333._8_4_;
        auVar334._0_4_ = fVar218 * auVar222._0_4_ - fVar216 * auVar402._0_4_;
        auVar334._4_4_ = fVar219 * auVar222._4_4_ - fVar217 * auVar402._4_4_;
        auVar334._8_4_ = fVar221 * auVar222._8_4_ - fVar227 * auVar402._8_4_;
        auVar334._12_4_ = auVar420._12_4_ * auVar222._12_4_ - auVar333._12_4_ * auVar402._12_4_;
        fVar220 = auVar380._0_4_ * (fVar218 * auVar229._0_4_ - fVar216 * auVar386._0_4_);
        auVar335._4_12_ = auVar334._4_12_;
        auVar335._0_4_ = fVar220;
        auVar337._0_8_ = auVar335._0_8_;
        auVar337._8_4_ = auVar380._8_4_ * (fVar221 * auVar229._8_4_ - fVar227 * auVar386._8_4_);
        auVar337._12_4_ = auVar334._12_4_;
        auVar336._8_8_ = auVar337._8_8_;
        auVar336._4_4_ = auVar428._0_4_ * auVar334._0_4_;
        auVar336._0_4_ = fVar220;
        auVar420._0_12_ = auVar336._0_12_;
        auVar420._12_4_ = auVar428._8_4_ * auVar334._8_4_;
        auVar222 = NEON_ext(auVar420,auVar420,8,1);
        if (fStack_288 <
            auVar277._0_4_ * (fVar218 * auVar427._0_4_ - fVar216 * auVar110._0_4_) +
            auVar277._4_4_ * (fVar219 * auVar427._4_4_ - fVar217 * auVar110._4_4_) +
            auVar277._8_4_ * (fVar221 * auVar427._8_4_ - fVar227 * auVar110._8_4_) &&
            (local_290 <
             auVar222._0_4_ +
             auVar380._4_4_ * (fVar219 * auVar229._4_4_ - fVar217 * auVar386._4_4_) + fVar220 &&
            fStack_28c <
            auVar222._4_4_ + auVar428._4_4_ * auVar334._4_4_ + auVar428._0_4_ * auVar334._0_4_))
        goto LAB_00868588;
LAB_00867a20:
        auVar110 = NEON_ext(auVar326,auVar326,4,1);
        fVar219 = auVar326._0_4_;
        fVar221 = auVar326._4_4_;
        fVar216 = auVar326._8_4_;
        fVar217 = auVar326._12_4_;
        fVar227 = fVar226 - fVar415;
        fVar220 = fVar147 - fVar432;
        fVar218 = fVar106 - fVar225;
        fVar213 = fVar108 - fVar213;
        fVar377 = auVar275._0_4_ * auVar110._0_4_ - fVar395 * fVar219;
        auVar381._0_8_ = CONCAT44(auVar275._4_4_ * auVar110._4_4_ - fVar257 * fVar221,fVar377);
        auVar381._8_4_ = auVar275._8_4_ * fVar219 - auVar275._0_4_ * fVar216;
        auVar381._12_4_ = auVar275._12_4_ * fVar221 - auVar275._4_4_ * fVar217;
        auVar427 = NEON_ext(auVar381,auVar381,4,1);
        fVar255 = auVar427._0_4_;
        fVar266 = auVar427._4_4_;
        fVar418 = fVar255 * fVar255 + fVar266 * fVar266 + fVar377 * fVar377;
        fVar424 = fVar255 * fVar255 + fVar266 * fVar266 + fVar377 * fVar377;
        fVar224 = 0.0;
        fVar245 = 0.0;
        if (fVar418 != 0.0) {
          fVar224 = fVar111 / fVar418;
          fVar245 = fVar113 / fVar424;
        }
        auVar184._0_8_ = NEON_ext(auVar427._0_8_,auVar381._0_8_,4,1);
        iVar293 = -(uint)(fVar418 == 0.0);
        iVar425 = -(uint)(fVar424 == 0.0);
        auVar203._0_4_ = auVar275._0_4_ * auVar275._0_4_;
        auVar203._4_4_ = auVar275._4_4_ * auVar275._4_4_;
        auVar203._8_4_ = auVar275._8_4_ * auVar275._8_4_;
        auVar203._12_4_ = auVar275._12_4_ * auVar275._12_4_;
        auVar215._0_4_ = auVar275._0_4_ * fVar227;
        auVar215._4_4_ = auVar275._4_4_ * fVar220;
        auVar215._8_4_ = auVar275._8_4_ * fVar218;
        auVar215._12_4_ = auVar275._12_4_ * fVar213;
        auVar259._0_4_ = fVar395 * fVar255 - auVar275._0_4_ * (float)auVar184._0_8_;
        auVar259._4_4_ = fVar257 * fVar266 - auVar275._4_4_ * (float)((ulong)auVar184._0_8_ >> 0x20)
        ;
        auVar259._8_4_ = auVar275._0_4_ * fVar377 - auVar275._8_4_ * fVar255;
        auVar259._12_4_ = auVar275._4_4_ * 0.0 - auVar275._12_4_ * fVar266;
        auVar427 = NEON_ext(auVar259,auVar259,4,1);
        fVar255 = fVar227 * auVar427._0_4_;
        fVar266 = fVar220 * auVar427._4_4_;
        fVar224 = fVar224 * (fVar255 + fVar266 + fVar218 * auVar259._0_4_);
        fVar245 = fVar245 * (fVar255 + fVar266 + fVar218 * auVar259._0_4_);
        auVar231._0_4_ = fVar219 * fVar219;
        auVar231._4_4_ = fVar221 * fVar221;
        auVar231._8_4_ = fVar216 * fVar216;
        auVar231._12_4_ = fVar217 * fVar217;
        uVar379 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar245,fVar224)) &
                                              CONCAT44(-(uint)(fVar245 < fVar113),
                                                       -(uint)(fVar224 < fVar111)),4);
        auVar260._0_4_ = fVar227 * fVar219;
        auVar260._4_4_ = fVar220 * fVar221;
        auVar260._8_4_ = fVar218 * fVar216;
        auVar260._12_4_ = fVar213 * fVar217;
        fVar424 = auVar275._8_4_ * fVar216 + auVar275._0_4_ * fVar219 + auVar275._4_4_ * fVar221;
        fVar182 = auVar275._8_4_ * fVar216 + auVar275._0_4_ * fVar219 + auVar275._4_4_ * fVar221;
        auVar229 = NEON_ext(auVar231,auVar231,8,1);
        auVar326 = NEON_ext(auVar260,auVar260,8,1);
        auVar427 = NEON_ext(auVar203,auVar203,8,1);
        auVar184 = NEON_ext(auVar215,auVar215,8,1);
        fVar377 = auVar229._0_4_ + auVar231._0_4_ + auVar231._4_4_;
        fVar418 = auVar326._0_4_ + auVar260._0_4_ + auVar260._4_4_;
        fVar255 = auVar427._0_4_ + auVar203._0_4_ + auVar203._4_4_;
        fVar266 = auVar184._0_4_ + auVar215._0_4_ + auVar215._4_4_;
        iVar289 = -(uint)(fVar377 == 0.0);
        iVar291 = -(uint)(fVar255 == 0.0);
        fVar224 = fVar111 / fVar377;
        fVar255 = fVar256 / fVar255;
        fVar245 = (float)CONCAT13((byte)((uint)fVar224 >> 0x18) & ~(byte)((uint)iVar289 >> 0x18),
                                  CONCAT12((byte)((uint)fVar224 >> 0x10) &
                                           ~(byte)((uint)iVar289 >> 0x10),
                                           CONCAT11((byte)((uint)fVar224 >> 8) &
                                                    ~(byte)((uint)iVar289 >> 8),
                                                    SUB41(fVar224,0) & ~(byte)iVar289)));
        fVar224 = (float)CONCAT13((byte)((uint)fVar255 >> 0x18) & ~(byte)((uint)iVar291 >> 0x18),
                                  CONCAT12((byte)((uint)fVar255 >> 0x10) &
                                           ~(byte)((uint)iVar291 >> 0x10),
                                           CONCAT11((byte)((uint)fVar255 >> 8) &
                                                    ~(byte)((uint)iVar291 >> 8),
                                                    SUB41(fVar255,0) & ~(byte)iVar291)));
        fVar197 = ((float)uVar379 * fVar424 - fVar266) * fVar224;
        fVar224 = ((float)(uVar379 >> 0x20) * fVar182 - fVar266) * fVar224;
        auVar184._0_8_ =
             NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar224,fVar197)) &
                                         CONCAT44(-(uint)(fVar224 < fVar113),
                                                  -(uint)(fVar197 < fVar111)),4);
        fVar255 = (float)auVar184._0_8_;
        fVar266 = (float)((ulong)auVar184._0_8_ >> 0x20);
        fVar424 = (fVar418 + fVar255 * fVar424) * fVar245;
        fVar245 = (fVar418 + fVar266 * fVar182) * fVar245;
        iVar289 = -(uint)(fVar255 == fVar197);
        iVar291 = -(uint)(fVar266 == fVar224);
        uVar37 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar245,fVar424)) &
                                             CONCAT44(-(uint)(fVar245 < fVar113),
                                                      -(uint)(fVar424 < fVar111)),4);
        uVar379 = uVar379 ^ (uVar379 ^ uVar37) &
                            CONCAT17(~(byte)((uint)iVar291 >> 0x18) | (byte)((uint)iVar425 >> 0x18),
                                     CONCAT16(~(byte)((uint)iVar291 >> 0x10) |
                                              (byte)((uint)iVar425 >> 0x10),
                                              CONCAT15(~(byte)((uint)iVar291 >> 8) |
                                                       (byte)((uint)iVar425 >> 8),
                                                       CONCAT14(~(byte)iVar291 | (byte)iVar425,
                                                                CONCAT13(~(byte)((uint)iVar289 >>
                                                                                0x18) |
                                                                         (byte)((uint)iVar293 >>
                                                                               0x18),
                                                                         CONCAT12(~(byte)((uint)
                                                  iVar289 >> 0x10) | (byte)((uint)iVar293 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar289 >> 8) |
                                                           (byte)((uint)iVar293 >> 8),
                                                           ~(byte)iVar289 | (byte)iVar293)))))));
        fVar224 = (float)uVar379;
        fVar424 = (fVar415 + fVar219 * fVar224) - (fVar226 + auVar275._0_4_ * fVar255);
        fVar266 = (fVar432 + fVar221 * (float)(uVar379 >> 0x20)) -
                  (fVar147 + auVar275._4_4_ * fVar266);
        fVar182 = (fVar225 + fVar216 * fVar224) - (fVar106 + auVar275._8_4_ * fVar255);
        fVar424 = fVar424 * fVar424;
        fVar266 = fVar266 * fVar266;
        fVar182 = fVar182 * fVar182;
        fVar197 = auVar346._0_4_ * auVar110._0_4_ - fVar267 * fVar219;
        auVar382._0_8_ = CONCAT44(auVar346._4_4_ * auVar110._4_4_ - fVar270 * fVar221,fVar197);
        auVar382._8_4_ = auVar346._8_4_ * fVar219 - auVar346._0_4_ * fVar216;
        auVar382._12_4_ = auVar346._12_4_ * fVar221 - auVar346._4_4_ * fVar217;
        auVar110 = NEON_ext(auVar382,auVar382,4,1);
        fVar217 = auVar110._0_4_;
        fVar255 = auVar110._4_4_;
        fVar366 = fVar217 * fVar217 + fVar255 * fVar255 + fVar197 * fVar197;
        fVar200 = fVar217 * fVar217 + fVar255 * fVar255 + fVar197 * fVar197;
        fVar224 = 0.0;
        fVar245 = 0.0;
        if (fVar366 != 0.0) {
          fVar224 = fVar111 / fVar366;
          fVar245 = fVar113 / fVar200;
        }
        auVar184._0_8_ = NEON_ext(auVar110._0_8_,auVar382._0_8_,4,1);
        auVar403._0_4_ = auVar346._0_4_ * fVar227;
        auVar403._4_4_ = auVar346._4_4_ * fVar220;
        auVar403._8_4_ = auVar346._8_4_ * fVar218;
        auVar403._12_4_ = auVar346._12_4_ * fVar213;
        auVar338._0_4_ = fVar267 * fVar217 - auVar346._0_4_ * (float)auVar184._0_8_;
        auVar338._4_4_ = fVar270 * fVar255 - auVar346._4_4_ * (float)((ulong)auVar184._0_8_ >> 0x20)
        ;
        auVar338._8_4_ = auVar346._0_4_ * fVar197 - auVar346._8_4_ * fVar217;
        auVar338._12_4_ = auVar346._4_4_ * 0.0 - auVar346._12_4_ * fVar255;
        auVar184 = NEON_ext(auVar338,auVar338,4,1);
        auVar383._0_4_ = auVar346._0_4_ * auVar346._0_4_;
        auVar383._4_4_ = auVar346._4_4_ * auVar346._4_4_;
        auVar383._8_4_ = auVar346._8_4_ * auVar346._8_4_;
        auVar383._12_4_ = auVar346._12_4_ * auVar346._12_4_;
        auVar110 = NEON_ext(auVar383,auVar383,8,1);
        auVar427 = NEON_ext(auVar403,auVar403,8,1);
        fVar269 = auVar110._0_4_ + auVar383._0_4_ + auVar383._4_4_;
        fVar395 = auVar427._0_4_ + auVar403._0_4_ + auVar403._4_4_;
        fVar213 = auVar346._8_4_ * fVar216 + auVar346._0_4_ * fVar219 + auVar346._4_4_ * fVar221;
        fVar197 = auVar346._8_4_ * fVar216 + auVar346._0_4_ * fVar219 + auVar346._4_4_ * fVar221;
        iVar293 = -(uint)(fVar366 == 0.0);
        iVar425 = -(uint)(fVar200 == 0.0);
        fVar227 = fVar227 * auVar184._0_4_;
        fVar220 = fVar220 * auVar184._4_4_;
        fVar217 = fVar111 / fVar377;
        fVar255 = fVar256 / fVar269;
        iVar289 = -(uint)(fVar377 == 0.0);
        iVar291 = -(uint)(fVar269 == 0.0);
        fVar224 = fVar224 * (fVar227 + fVar220 + fVar218 * auVar338._0_4_);
        fVar245 = fVar245 * (fVar227 + fVar220 + fVar218 * auVar338._0_4_);
        uVar37 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar245,fVar224)) &
                                             CONCAT44(-(uint)(fVar245 < fVar113),
                                                      -(uint)(fVar224 < fVar111)),4);
        fVar245 = (float)CONCAT13((byte)((uint)fVar217 >> 0x18) & ~(byte)((uint)iVar289 >> 0x18),
                                  CONCAT12((byte)((uint)fVar217 >> 0x10) &
                                           ~(byte)((uint)iVar289 >> 0x10),
                                           CONCAT11((byte)((uint)fVar217 >> 8) &
                                                    ~(byte)((uint)iVar289 >> 8),
                                                    SUB41(fVar217,0) & ~(byte)iVar289)));
        fVar224 = (float)CONCAT13((byte)((uint)fVar255 >> 0x18) & ~(byte)((uint)iVar291 >> 0x18),
                                  CONCAT12((byte)((uint)fVar255 >> 0x10) &
                                           ~(byte)((uint)iVar291 >> 0x10),
                                           CONCAT11((byte)((uint)fVar255 >> 8) &
                                                    ~(byte)((uint)iVar291 >> 8),
                                                    SUB41(fVar255,0) & ~(byte)iVar291)));
        fVar217 = ((float)uVar37 * fVar213 - fVar395) * fVar224;
        fVar224 = ((float)(uVar37 >> 0x20) * fVar197 - fVar395) * fVar224;
        auVar184._0_8_ =
             NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar224,fVar217)) &
                                         CONCAT44(-(uint)(fVar224 < fVar113),
                                                  -(uint)(fVar217 < fVar111)),4);
        fVar227 = (float)auVar184._0_8_;
        fVar220 = (float)((ulong)auVar184._0_8_ >> 0x20);
        iVar289 = -(uint)(fVar227 == fVar217);
        iVar291 = -(uint)(fVar220 == fVar224);
        fVar224 = (fVar418 + fVar227 * fVar213) * fVar245;
        fVar245 = (fVar418 + fVar220 * fVar197) * fVar245;
        uVar379 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar245,fVar224)) &
                                              CONCAT44(-(uint)(fVar245 < fVar113),
                                                       -(uint)(fVar224 < fVar111)),4);
        uVar37 = uVar37 ^ (uVar37 ^ uVar379) &
                          CONCAT17(~(byte)((uint)iVar291 >> 0x18) | (byte)((uint)iVar425 >> 0x18),
                                   CONCAT16(~(byte)((uint)iVar291 >> 0x10) |
                                            (byte)((uint)iVar425 >> 0x10),
                                            CONCAT15(~(byte)((uint)iVar291 >> 8) |
                                                     (byte)((uint)iVar425 >> 8),
                                                     CONCAT14(~(byte)iVar291 | (byte)iVar425,
                                                              CONCAT13(~(byte)((uint)iVar289 >> 0x18
                                                                              ) |
                                                                       (byte)((uint)iVar293 >> 0x18)
                                                                       ,CONCAT12(~(byte)((uint)
                                                  iVar289 >> 0x10) | (byte)((uint)iVar293 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar289 >> 8) |
                                                           (byte)((uint)iVar293 >> 8),
                                                           ~(byte)iVar289 | (byte)iVar293)))))));
        fVar217 = (float)uVar37;
        fVar224 = (fVar415 + fVar219 * fVar217) - (fVar226 + auVar346._0_4_ * fVar227);
        fVar245 = (fVar432 + fVar221 * (float)(uVar37 >> 0x20)) -
                  (fVar147 + auVar346._4_4_ * fVar220);
        fVar216 = (fVar225 + fVar216 * fVar217) - (fVar106 + auVar346._8_4_ * fVar227);
        fVar224 = fVar224 * fVar224;
        fVar245 = fVar245 * fVar245;
        fVar216 = fVar216 * fVar216;
        uVar37 = CONCAT44(-(uint)(fVar224 + fVar245 + fVar216 < fVar424 + fVar266 + fVar182),
                          -(uint)(fVar224 + fVar245 + fVar216 < fVar424 + fVar266 + fVar182));
        *(ulong *)(pfVar36 + 2) =
             *(ulong *)(pfVar36 + 6) ^ (*(ulong *)(pfVar36 + 6) ^ *(ulong *)(pfVar36 + 2)) & uVar37;
        *(ulong *)pfVar36 =
             *(ulong *)(pfVar36 + 4) ^ (*(ulong *)(pfVar36 + 4) ^ *(ulong *)pfVar36) & uVar37;
        pfVar36[6] = fVar106;
        pfVar36[7] = fVar108;
        pfVar36[4] = fVar226;
        pfVar36[5] = fVar147;
        goto switchD_00867ef0_caseD_3;
      }
      uVar183 = -(uint)(fVar269 * fVar269 < fVar182 * fVar182);
      uVar198 = -(uint)(fVar200 * fVar200 < fVar366 * fVar366);
      auVar325._0_4_ = fVar226 - fVar216;
      auVar325._4_4_ = fVar147 - fVar217;
      auVar325._8_4_ = fVar106 - fVar227;
      auVar325._12_4_ = fVar108 - fVar220;
      auVar184 = NEON_ext(auVar325,auVar325,4,1);
      fVar245 = (float)((uint)fVar266 ^ ((uint)fVar266 ^ (uint)fVar415) & uVar183);
      fVar182 = (float)((uint)fVar377 ^ ((uint)fVar377 ^ (uint)fVar432) & uVar198);
      fVar197 = (float)((uint)fVar418 ^ ((uint)fVar418 ^ (uint)fVar225) & uVar183);
      fVar366 = (float)((uint)fVar424 ^ ((uint)fVar424 ^ (uint)fVar213) & uVar198);
      auVar202._0_4_ = fVar245 - fVar216;
      auVar202._4_4_ = fVar182 - fVar217;
      auVar202._8_4_ = fVar197 - fVar227;
      auVar202._12_4_ = fVar366 - fVar220;
      auVar110 = NEON_ext(auVar202,auVar202,4,1);
      auVar214._0_4_ = fVar245 - fVar226;
      auVar214._4_4_ = fVar182 - fVar147;
      auVar214._8_4_ = fVar197 - fVar106;
      auVar214._12_4_ = fVar366 - fVar108;
      auVar64._0_4_ = auVar184._0_4_ * auVar202._0_4_ - auVar325._0_4_ * auVar110._0_4_;
      auVar64._4_4_ = auVar184._4_4_ * auVar202._4_4_ - auVar325._4_4_ * auVar110._4_4_;
      auVar64._8_4_ = auVar325._0_4_ * auVar202._8_4_ - auVar325._8_4_ * auVar202._0_4_;
      auVar64._12_4_ = auVar325._4_4_ * auVar202._12_4_ - auVar325._12_4_ * auVar202._4_4_;
      auVar326 = NEON_ext(auVar64,auVar64,4,1);
      auVar400._0_4_ = fVar216 - fVar218;
      auVar400._4_4_ = fVar217 - fVar219;
      auVar400._8_4_ = fVar227 - fVar221;
      auVar400._12_4_ = fVar220 - fVar255;
      auVar427 = NEON_ext(auVar400,auVar400,4,1);
      auVar276._0_4_ = auVar325._0_4_ * fVar267 - auVar346._0_4_ * auVar184._0_4_;
      auVar276._4_4_ = auVar325._4_4_ * fVar270 - auVar346._4_4_ * auVar184._4_4_;
      auVar276._8_4_ = auVar325._8_4_ * auVar346._0_4_ - auVar346._8_4_ * auVar325._0_4_;
      auVar276._12_4_ = auVar325._12_4_ * auVar346._4_4_ - auVar346._12_4_ * auVar325._4_4_;
      auVar184 = NEON_ext(auVar276,auVar276,4,1);
      auVar110 = NEON_ext(auVar214,auVar214,4,1);
      fVar224 = fVar245 - fVar218;
      fVar200 = fVar182 - fVar219;
      fVar269 = fVar197 - fVar221;
      fVar324 = fVar366 - fVar255;
      in_register_00005188 = (ulong)(uint)auVar276._0_4_;
      auVar65._0_4_ = fVar267 * auVar214._0_4_ - auVar346._0_4_ * auVar110._0_4_;
      auVar65._4_4_ = fVar270 * auVar214._4_4_ - auVar346._4_4_ * auVar110._4_4_;
      auVar65._8_4_ = auVar346._0_4_ * auVar214._8_4_ - auVar346._8_4_ * auVar214._0_4_;
      auVar65._12_4_ = auVar346._4_4_ * auVar214._12_4_ - auVar346._12_4_ * auVar214._4_4_;
      auVar229 = NEON_ext(auVar65,auVar65,4,1);
      auVar11._4_4_ = fVar200;
      auVar11._0_4_ = fVar224;
      auVar11._8_4_ = fVar269;
      auVar11._12_4_ = fVar324;
      auVar12._4_4_ = fVar200;
      auVar12._0_4_ = fVar224;
      auVar12._8_4_ = fVar269;
      auVar12._12_4_ = fVar324;
      auVar110 = NEON_ext(auVar11,auVar12,4,1);
      fVar378 = auVar184._4_4_;
      auVar66._0_4_ = auVar427._0_4_ * fVar224 - auVar400._0_4_ * auVar110._0_4_;
      auVar66._4_4_ = auVar427._4_4_ * fVar200 - auVar400._4_4_ * auVar110._4_4_;
      auVar66._8_4_ = auVar400._0_4_ * fVar269 - auVar400._8_4_ * fVar224;
      auVar66._12_4_ = auVar400._4_4_ * fVar324 - auVar400._12_4_ * fVar200;
      fVar200 = auVar184._0_4_;
      auVar327._0_4_ = fVar200 * auVar326._0_4_;
      auVar327._4_4_ = fVar378 * auVar326._4_4_;
      auVar327._8_4_ = auVar276._0_4_ * auVar64._0_4_;
      auVar327._12_4_ = auVar64._4_4_ * 0.0;
      auVar110 = NEON_ext(auVar66,auVar66,4,1);
      fVar224 = fVar200 * auVar229._0_4_;
      auVar328._4_12_ = auVar327._4_12_;
      auVar328._0_4_ = auVar327._0_4_;
      auVar330._0_8_ = auVar328._0_8_;
      auVar330._8_4_ = auVar327._8_4_;
      auVar330._12_4_ = auVar327._12_4_;
      auVar329._8_8_ = auVar330._8_8_;
      auVar329._4_4_ = fVar224;
      auVar329._0_4_ = auVar327._0_4_;
      auVar331._0_12_ = auVar329._0_12_;
      auVar331._12_4_ = auVar276._0_4_ * auVar65._0_4_;
      fVar269 = fVar200 * auVar110._0_4_;
      fVar324 = fVar378 * auVar110._4_4_;
      auVar110 = NEON_ext(auVar331,auVar331,8,1);
      fVar361 = auVar110._0_4_ + fVar378 * auVar326._4_4_ + auVar327._0_4_;
      fVar413 = auVar110._4_4_ + fVar378 * auVar229._4_4_ + fVar224;
      auVar405._0_8_ = CONCAT44(fVar413,fVar361);
      fVar224 = auVar276._0_4_ * auVar66._0_4_ + fVar269 + fVar324;
      uStack_1a8 = CONCAT44(auVar276._0_4_ * auVar66._0_4_ + fVar269 + fVar324,fVar224);
      auVar405._8_8_ = uStack_1a8;
      if ((byte)((-(fVar413 < 0.0) & 2U) + (fVar361 < 0.0) | -(fVar224 < 0.0) & 4U) != 7) {
        auVar326._0_4_ = fVar266 - fVar415;
        auVar326._4_4_ = fVar377 - fVar432;
        auVar326._8_4_ = fVar418 - fVar225;
        auVar326._12_4_ = fVar424 - fVar213;
        local_1b0 = auVar405._0_8_;
        goto LAB_00867a20;
      }
      auVar77._0_4_ = fVar200 * (local_270[0] - local_210[0]);
      auVar77._4_4_ = fVar378 * (local_270[1] - local_210[1]);
      auVar77._8_4_ = auVar276._0_4_ * ((float)uStack_268 - local_210[2]);
      auVar77._12_4_ = (uStack_268._4_4_ - fStack_204) * 0.0;
      auVar110 = NEON_ext(auVar77,auVar77,8,1);
      if (auVar77._0_4_ + auVar77._4_4_ + auVar110._0_4_ < 0.0) {
        pfVar36[2] = fVar227;
        pfVar36[3] = fVar220;
        *pfVar36 = fVar216;
        pfVar36[1] = fVar217;
        pfVar36[6] = fVar221;
        pfVar36[7] = fVar255;
        pfVar36[4] = fVar218;
        pfVar36[5] = fVar219;
        auVar78._8_8_ = _UNK_03caa978;
        auVar78._0_8_ = _DAT_03caa970;
        auVar184._0_8_ = CONCAT44(-fVar378,-fVar200);
        in_register_00005188 = CONCAT44(0x80000000,-auVar276._0_4_);
        auVar405 = a64_TBL(ZEXT816(0),auVar405,auVar78);
      }
      uStack_1a8 = auVar405._8_8_;
      local_1b0 = auVar405._0_8_;
      pfVar43[2] = fVar197;
      pfVar43[3] = fVar366;
      *pfVar43 = fVar245;
      pfVar43[1] = fVar182;
      uVar183 = 1;
      if (uVar39 == 2) goto LAB_008683a8;
      goto LAB_00868798;
    }
    fVar216 = *pfVar43;
    fVar217 = pfVar43[1];
    fVar227 = pfVar43[2];
    fVar220 = pfVar43[4];
    fVar226 = pfVar43[5];
    fVar147 = pfVar43[6];
    fVar106 = pfVar43[7];
    fVar108 = *pfVar36;
    fVar218 = pfVar36[1];
    fVar219 = pfVar36[2];
    fVar221 = pfVar36[3];
    auVar297._0_4_ = fVar220 - fVar108;
    auVar297._4_4_ = fVar226 - fVar218;
    auVar297._8_4_ = fVar147 - fVar219;
    auVar297._12_4_ = fVar106 - fVar221;
    auVar20._8_8_ = uStack_1a8;
    auVar20._0_8_ = local_1b0;
    fVar424 = auVar297._0_4_ * (float)auVar184._0_8_;
    fVar377 = (float)((ulong)auVar184._0_8_ >> 0x20);
    fVar415 = auVar297._4_4_ * fVar377;
    fVar432 = auVar297._8_4_ * (float)in_register_00005188;
    fVar255 = (fVar216 - fVar108) * (float)auVar184._0_8_;
    fVar377 = (fVar217 - fVar218) * fVar377;
    fVar418 = (fVar227 - fVar219) * (float)in_register_00005188;
    fVar266 = fVar255 + fVar377 + fVar418;
    fVar418 = fVar255 + fVar377 + fVar418;
    fVar255 = fVar424 + fVar415 + fVar432;
    if (fVar266 * fVar255 < 0.0) {
      fVar266 = fVar266 / (fVar266 - fVar255);
      fVar418 = fVar418 / (fVar418 - (fVar424 + fVar415 + fVar432));
      auVar404._8_8_ = _UNK_03cabbc8;
      auVar404._0_8_ = _DAT_03cabbc0;
      auVar204._8_8_ = _UNK_03cabbd8;
      auVar204._0_8_ = _DAT_03cabbd0;
      auVar110 = *(undefined1 (*) [16])(pfVar36 + 4);
      fVar255 = pfVar36[8];
      fVar377 = pfVar36[9];
      fVar424 = pfVar36[10];
      fVar415 = pfVar36[0xb];
      auVar119._0_4_ = fVar255 - fVar108;
      auVar119._4_4_ = fVar377 - fVar218;
      auVar119._8_4_ = fVar424 - fVar219;
      auVar119._12_4_ = fVar415 - fVar221;
      auVar275 = NEON_ext(auVar119,auVar119,4,1);
      fVar216 = fVar216 + (fVar220 - fVar216) * fVar266;
      fVar217 = fVar217 + (fVar226 - fVar217) * fVar418;
      fVar227 = fVar227 + (fVar147 - fVar227) * fVar266;
      fVar266 = pfVar43[3] + (fVar106 - pfVar43[3]) * fVar418;
      fVar418 = auVar110._0_4_ - fVar108;
      fVar432 = auVar110._4_4_ - fVar218;
      auVar230._0_8_ = CONCAT44(fVar432,fVar418);
      auVar230._8_4_ = auVar110._8_4_ - fVar219;
      auVar230._12_4_ = auVar110._12_4_ - fVar221;
      auVar427 = NEON_ext(auVar230,auVar230,4,1);
      auVar310._0_8_ = auVar427._0_8_;
      auVar310._8_8_ = auVar230._0_8_;
      auVar384._0_4_ = auVar110._0_4_ - fVar216;
      auVar384._4_4_ = auVar110._4_4_ - fVar217;
      auVar384._8_4_ = auVar110._8_4_ - fVar227;
      auVar384._12_4_ = auVar110._12_4_ - fVar266;
      auVar229 = a64_TBL(ZEXT816(0),auVar384,auVar204);
      auVar120._0_4_ = fVar418 * auVar275._0_4_ - auVar119._0_4_ * auVar427._0_4_;
      auVar120._4_4_ = fVar432 * auVar275._4_4_ - auVar119._4_4_ * auVar427._4_4_;
      auVar120._8_4_ = auVar230._8_4_ * auVar119._0_4_ - auVar119._8_4_ * fVar418;
      auVar120._12_4_ = auVar230._12_4_ * auVar119._4_4_ - auVar119._12_4_ * fVar432;
      auVar427 = NEON_ext(auVar120,auVar120,4,1);
      auVar339._0_8_ = auVar427._0_8_;
      auVar339._8_4_ = auVar120._0_4_;
      auVar339._12_4_ = 0;
      auVar121._0_4_ = fVar108 - fVar216;
      auVar121._4_4_ = fVar218 - fVar217;
      auVar121._8_4_ = fVar219 - fVar227;
      auVar121._12_4_ = fVar221 - fVar266;
      auVar67._0_4_ = fVar255 - fVar216;
      auVar67._4_4_ = fVar377 - fVar217;
      auVar67._8_4_ = fVar424 - fVar227;
      auVar67._12_4_ = fVar415 - fVar266;
      auVar275 = a64_TBL(ZEXT816(0),auVar67,auVar204);
      auVar428 = a64_TBL(ZEXT816(0),auVar339,auVar404);
      auVar346 = a64_TBL(ZEXT816(0),auVar121,auVar204);
      auVar386 = a64_TBL(ZEXT816(0),auVar339,auVar204);
      auVar427 = a64_TBL(ZEXT816(0),auVar384,auVar404);
      fVar418 = auVar428._0_4_;
      fVar432 = auVar428._4_4_;
      fVar225 = auVar428._8_4_;
      auVar326 = a64_TBL(ZEXT816(0),auVar67,auVar404);
      auVar222 = a64_TBL(ZEXT816(0),auVar121,auVar404);
      fVar216 = auVar386._0_4_;
      fVar217 = auVar386._4_4_;
      fVar227 = auVar386._8_4_;
      auVar340._0_4_ = fVar418 * auVar346._0_4_ - fVar216 * auVar222._0_4_;
      auVar340._4_4_ = fVar432 * auVar346._4_4_ - fVar217 * auVar222._4_4_;
      auVar340._8_4_ = fVar225 * auVar346._8_4_ - fVar227 * auVar222._8_4_;
      auVar340._12_4_ = auVar428._12_4_ * auVar346._12_4_ - auVar386._12_4_ * auVar222._12_4_;
      fVar266 = auVar384._0_4_ * (fVar418 * auVar275._0_4_ - fVar216 * auVar326._0_4_);
      auVar341._4_12_ = auVar340._4_12_;
      auVar341._0_4_ = fVar266;
      auVar343._0_8_ = auVar341._0_8_;
      auVar343._8_4_ = auVar384._8_4_ * (fVar225 * auVar275._8_4_ - fVar227 * auVar326._8_4_);
      auVar343._12_4_ = auVar340._12_4_;
      auVar342._8_8_ = auVar343._8_8_;
      auVar342._4_4_ = auVar67._0_4_ * auVar340._0_4_;
      auVar342._0_4_ = fVar266;
      auVar344._0_12_ = auVar342._0_12_;
      auVar344._12_4_ = auVar67._8_4_ * auVar340._8_4_;
      auVar346 = NEON_ext(auVar344,auVar344,8,1);
      if (auVar121._0_4_ * (fVar418 * auVar229._0_4_ - fVar216 * auVar427._0_4_) +
          auVar121._4_4_ * (fVar432 * auVar229._4_4_ - fVar217 * auVar427._4_4_) +
          auVar121._8_4_ * (fVar225 * auVar229._8_4_ - fVar227 * auVar427._8_4_) <= fStack_288 ||
          (auVar346._0_4_ +
           auVar384._4_4_ * (fVar432 * auVar275._4_4_ - fVar217 * auVar326._4_4_) + fVar266 <=
           local_290 ||
          auVar346._4_4_ + auVar67._4_4_ * auVar340._4_4_ + auVar67._0_4_ * auVar340._0_4_ <=
          fStack_28c)) goto LAB_00867de4;
LAB_00868588:
      bVar33 = true;
      goto code_r0x00868590;
    }
    auVar110 = *(undefined1 (*) [16])(pfVar36 + 4);
    fVar255 = pfVar36[8];
    fVar377 = pfVar36[9];
    fVar424 = pfVar36[10];
    fVar415 = pfVar36[0xb];
    auVar230._0_8_ = CONCAT44(auVar110._4_4_ - fVar218,auVar110._0_4_ - fVar108);
    auVar230._8_4_ = auVar110._8_4_ - fVar219;
    auVar230._12_4_ = auVar110._12_4_ - fVar221;
    auVar427 = NEON_ext(auVar230,auVar230,4,1);
    auVar310._0_8_ = auVar427._0_8_;
    auVar310._8_8_ = auVar230._0_8_;
LAB_00867de4:
    auVar68._0_4_ = fVar255 - auVar110._0_4_;
    auVar68._4_4_ = fVar377 - auVar110._4_4_;
    auVar68._8_4_ = fVar424 - auVar110._8_4_;
    auVar68._12_4_ = fVar415 - auVar110._12_4_;
    auVar427 = NEON_ext(auVar68,auVar68,4,1);
    auVar122._0_4_ = fVar108 - fVar255;
    auVar122._4_4_ = fVar218 - fVar377;
    auVar122._8_4_ = fVar219 - fVar424;
    auVar122._12_4_ = fVar221 - fVar415;
    auVar275 = NEON_ext(auVar122,auVar122,4,1);
    auVar421._0_4_ = fVar220 - auVar110._0_4_;
    auVar421._4_4_ = fVar226 - auVar110._4_4_;
    auVar421._8_4_ = fVar147 - auVar110._8_4_;
    auVar421._12_4_ = fVar106 - auVar110._12_4_;
    auVar110 = NEON_ext(auVar421,auVar421,4,1);
    auVar205._0_4_ = fVar220 - fVar255;
    auVar205._4_4_ = fVar226 - fVar377;
    auVar205._8_4_ = fVar147 - fVar424;
    auVar205._12_4_ = fVar106 - fVar415;
    auVar69._0_4_ = auVar421._0_4_ * auVar427._0_4_ - auVar68._0_4_ * auVar110._0_4_;
    auVar69._4_4_ = auVar421._4_4_ * auVar427._4_4_ - auVar68._4_4_ * auVar110._4_4_;
    auVar69._8_4_ = auVar421._8_4_ * auVar68._0_4_ - auVar68._8_4_ * auVar421._0_4_;
    auVar69._12_4_ = auVar421._12_4_ * auVar68._4_4_ - auVar68._12_4_ * auVar421._4_4_;
    auVar229 = NEON_ext(auVar69,auVar69,4,1);
    auVar278._0_4_ = auVar68._0_4_ * auVar275._0_4_ - auVar122._0_4_ * auVar427._0_4_;
    auVar278._4_4_ = auVar68._4_4_ * auVar275._4_4_ - auVar122._4_4_ * auVar427._4_4_;
    auVar278._8_4_ = auVar68._8_4_ * auVar122._0_4_ - auVar122._8_4_ * auVar68._0_4_;
    auVar278._12_4_ = auVar68._12_4_ * auVar122._4_4_ - auVar122._12_4_ * auVar68._4_4_;
    auVar346 = NEON_ext(auVar278,auVar278,4,1);
    auVar110 = NEON_ext(auVar205,auVar205,4,1);
    auVar70._0_4_ = auVar205._0_4_ * auVar275._0_4_ - auVar122._0_4_ * auVar110._0_4_;
    auVar70._4_4_ = auVar205._4_4_ * auVar275._4_4_ - auVar122._4_4_ * auVar110._4_4_;
    auVar70._8_4_ = auVar205._8_4_ * auVar122._0_4_ - auVar122._8_4_ * auVar205._0_4_;
    auVar70._12_4_ = auVar205._12_4_ * auVar122._4_4_ - auVar122._12_4_ * auVar205._4_4_;
    auVar427 = NEON_ext(auVar70,auVar70,4,1);
    fVar217 = auVar346._4_4_;
    auVar110 = NEON_ext(auVar297,auVar297,4,1);
    auVar71._0_4_ = auVar297._0_4_ * auVar310._0_4_ - auVar110._0_4_ * auVar230._0_4_;
    auVar71._4_4_ = auVar297._4_4_ * auVar310._4_4_ - auVar110._4_4_ * auVar230._4_4_;
    auVar71._8_4_ = auVar297._8_4_ * auVar310._8_4_ - auVar297._0_4_ * auVar230._8_4_;
    auVar71._12_4_ = auVar297._12_4_ * auVar310._12_4_ - auVar297._4_4_ * auVar230._12_4_;
    auVar110 = NEON_ext(auVar71,auVar71,4,1);
    fVar245 = auVar346._0_4_;
    auVar298._0_4_ = fVar245 * auVar229._0_4_;
    auVar298._4_4_ = fVar217 * auVar229._4_4_;
    auVar298._8_4_ = auVar278._0_4_ * auVar69._0_4_;
    auVar298._12_4_ = auVar69._4_4_ * 0.0;
    fVar224 = auVar427._0_4_ * fVar245;
    auVar299._4_12_ = auVar298._4_12_;
    auVar299._0_4_ = auVar298._0_4_;
    auVar301._0_8_ = auVar299._0_8_;
    auVar301._8_4_ = auVar298._8_4_;
    auVar301._12_4_ = auVar298._12_4_;
    auVar300._8_8_ = auVar301._8_8_;
    auVar300._4_4_ = fVar224;
    auVar300._0_4_ = auVar298._0_4_;
    auVar302._0_12_ = auVar300._0_12_;
    auVar302._12_4_ = auVar70._0_4_ * auVar278._0_4_;
    fVar245 = auVar110._0_4_ * fVar245;
    fVar216 = auVar110._4_4_ * fVar217;
    auVar110 = NEON_ext(auVar302,auVar302,8,1);
    fVar218 = auVar110._0_4_ + fVar217 * auVar229._4_4_ + auVar298._0_4_;
    fVar219 = auVar110._4_4_ + auVar427._4_4_ * fVar217 + fVar224;
    fVar224 = fVar245 + fVar216 + auVar71._0_4_ * auVar278._0_4_;
    fVar245 = fVar245 + fVar216 + auVar71._0_4_ * auVar278._0_4_;
    uStack_1a8 = CONCAT44(fVar245,fVar224);
    local_1b0 = CONCAT44(fVar219,fVar218);
    fVar217 = (float)((ulong)uVar54 >> 0x20);
    fVar227 = (float)uVar55;
    fVar108 = (float)((ulong)uVar55 >> 0x20);
    fVar216 = (float)uVar54;
    switch((-(fVar219 < 0.0) & 2U) + (fVar218 < 0.0) | -(fVar224 < 0.0) & 4U) {
    case 1:
      auVar123._0_4_ = fVar218 - fVar216;
      auVar123._4_4_ = fVar219 - fVar217;
      auVar123._8_4_ = fVar224 - fVar227;
      auVar123._12_4_ = fVar245 - fVar108;
      auVar110 = NEON_ext(auVar20,auVar20,8,1);
      auVar427 = NEON_ext(auVar123,auVar123,8,1);
      if (auVar110._0_4_ * auVar123._4_4_ <= auVar427._0_4_ * fVar217)
      goto switchD_00867ef0_caseD_5;
      break;
    case 2:
      auVar124._0_4_ = fVar218 - fVar216;
      auVar124._4_4_ = fVar219 - fVar217;
      auVar124._8_4_ = fVar224 - fVar227;
      auVar124._12_4_ = fVar245 - fVar108;
      auVar110 = NEON_ext(auVar20,auVar20,8,1);
      auVar427 = NEON_ext(auVar124,auVar124,8,1);
      if (auVar110._0_4_ * auVar124._0_4_ < fVar216 * auVar427._0_4_) goto switchD_00867ef0_caseD_6;
      break;
    case 3:
      break;
    case 4:
      if ((fVar218 - fVar216) * fVar217 <= fVar216 * (fVar219 - fVar217))
      goto switchD_00867ef0_caseD_6;
    case 5:
switchD_00867ef0_caseD_5:
      pfVar36[6] = fVar424;
      pfVar36[7] = fVar415;
      pfVar36[4] = fVar255;
      pfVar36[5] = fVar377;
      break;
    default:
switchD_00867ef0_caseD_6:
      pfVar36[2] = fVar424;
      pfVar36[3] = fVar415;
      *pfVar36 = fVar255;
      pfVar36[1] = fVar377;
      break;
    case 7:
      pfVar43[2] = fVar147;
      pfVar43[3] = fVar106;
      *pfVar43 = fVar220;
      pfVar43[1] = fVar226;
      uVar183 = 1;
      if (uVar39 != 2) goto LAB_00868798;
LAB_008683a8:
      local_ac[0] = 1;
      goto LAB_00868de8;
    }
switchD_00867ef0_caseD_3:
    uVar37 = 2;
    uVar39 = 2;
    local_b0 = 2;
    local_ac[0] = 2;
switchD_00867738_caseD_1b:
    auVar429._0_4_ = local_260 - local_270[0];
    auVar429._4_4_ = fStack_25c - local_270[1];
    auVar429._8_4_ = fStack_258 - (float)uStack_268;
    auVar429._12_4_ = fStack_254 - uStack_268._4_4_;
    auVar275 = NEON_ext(auVar429,auVar429,4,1);
    auVar311._0_4_ = local_200 - local_210[0];
    auVar311._4_4_ = fStack_1fc - local_210[1];
    auVar311._8_4_ = fStack_1f8 - local_210[2];
    auVar311._12_4_ = fStack_1f4 - fStack_204;
    auVar110 = NEON_ext(auVar311,auVar311,4,1);
    fVar216 = auVar311._0_4_ * auVar275._0_4_;
    fVar218 = auVar311._4_4_ * auVar275._4_4_;
    fVar147 = auVar110._0_4_;
    fVar106 = auVar110._4_4_;
    fVar220 = auVar429._0_4_ * auVar429._0_4_;
    fVar226 = auVar429._4_4_ * auVar429._4_4_;
    auVar206._0_4_ = auVar311._0_4_ * auVar311._0_4_;
    auVar206._4_4_ = auVar311._4_4_ * auVar311._4_4_;
    auVar206._8_4_ = auVar311._8_4_ * auVar311._8_4_;
    auVar206._12_4_ = auVar311._12_4_ * auVar311._12_4_;
    fVar108 = auVar429._0_4_ * fVar147 - fVar216;
    auVar345._0_8_ = CONCAT44(auVar429._4_4_ * fVar106 - fVar218,fVar108);
    auVar345._8_4_ = auVar429._8_4_ * auVar311._0_4_ - auVar311._8_4_ * auVar429._0_4_;
    auVar345._12_4_ = auVar429._12_4_ * auVar311._4_4_ - auVar311._12_4_ * auVar429._4_4_;
    auVar13._4_4_ = fVar226;
    auVar13._0_4_ = fVar220;
    auVar13._8_4_ = auVar429._8_4_ * auVar429._8_4_;
    auVar13._12_4_ = auVar429._12_4_ * auVar429._12_4_;
    auVar14._4_4_ = fVar226;
    auVar14._0_4_ = fVar220;
    auVar14._8_4_ = auVar429._8_4_ * auVar429._8_4_;
    auVar14._12_4_ = auVar429._12_4_ * auVar429._12_4_;
    auVar110 = NEON_ext(auVar13,auVar14,8,1);
    auVar427 = NEON_ext(auVar206,auVar206,8,1);
    auVar229 = NEON_ext(auVar345,auVar345,4,1);
    fVar217 = (auVar110._0_4_ + fVar220 + fVar226) *
              (auVar206._0_4_ + auVar206._4_4_ + auVar427._0_4_);
    in_register_00005188 = (ulong)(uint)fVar108;
    fVar224 = auVar229._0_4_;
    fVar245 = auVar229._4_4_;
    auVar184._0_8_ = auVar229._0_8_;
    fVar227 = fVar224 * fVar224 + fVar245 * fVar245 + fVar108 * fVar108;
    bVar150 = (byte)((uint)fVar108 >> 0x18);
    bVar369 = (byte)((ulong)_DAT_03cab270 >> 8);
    bVar370 = (byte)((ulong)_DAT_03cab270 >> 0x10);
    bVar371 = (byte)((ulong)_DAT_03cab270 >> 0x18);
    bVar372 = (byte)((ulong)_DAT_03cab270 >> 0x28);
    bVar373 = (byte)((ulong)_DAT_03cab270 >> 0x30);
    if (fVar217 * 0.0025000002 <= fVar227) {
      uVar54 = NEON_ext(auVar184._0_8_,auVar345._0_8_,4,1);
      fVar219 = (float)((ulong)uVar54 >> 0x20);
      fVar418 = local_270[0] - local_210[0];
      fVar424 = local_270[1] - local_210[1];
      fVar415 = (float)uStack_268 - local_210[2];
      auVar125._0_4_ = auVar275._0_4_ * fVar224 - auVar429._0_4_ * (float)uVar54;
      auVar125._4_4_ = auVar275._4_4_ * fVar245 - auVar429._4_4_ * fVar219;
      auVar125._8_4_ = auVar429._0_4_ * fVar108 - auVar429._8_4_ * fVar224;
      auVar125._12_4_ = auVar429._4_4_ * 0.0 - auVar429._12_4_ * fVar245;
      auVar346 = NEON_ext(auVar125,auVar125,4,1);
      auVar72._0_4_ = fVar147 * fVar224 - auVar311._0_4_ * (float)uVar54;
      auVar72._4_4_ = fVar106 * fVar245 - auVar311._4_4_ * fVar219;
      auVar72._8_4_ = auVar311._0_4_ * fVar108 - auVar311._8_4_ * fVar224;
      auVar72._12_4_ = auVar311._4_4_ * 0.0 - auVar311._12_4_ * fVar245;
      auVar275 = NEON_ext(auVar72,auVar72,4,1);
      fVar219 = auVar275._0_4_;
      fVar221 = auVar275._4_4_;
      fVar432 = (float)(((int)(auVar72._0_4_ * auVar72._0_4_ + fVar219 * fVar219 + fVar221 * fVar221
                              ) >> 1) + 0x1fbb4000);
      fVar255 = auVar346._0_4_;
      fVar266 = auVar346._4_4_;
      auVar321._0_4_ = fVar418 * fVar219;
      auVar321._4_4_ = fVar424 * fVar221;
      auVar321._8_4_ = fVar415 * auVar72._0_4_;
      auVar321._12_4_ = (uStack_268._4_4_ - fStack_204) * 0.0;
      auVar126._0_4_ = (local_210[0] - local_260) * fVar219;
      auVar126._4_4_ = (local_210[1] - fStack_25c) * fVar221;
      auVar126._8_4_ = (local_210[2] - fStack_258) * auVar72._0_4_;
      auVar126._12_4_ = (fStack_204 - fStack_254) * 0.0;
      auVar385._0_4_ = fVar418 * fVar255;
      auVar385._4_4_ = fVar424 * fVar266;
      auVar385._8_4_ = fVar415 * auVar125._0_4_;
      auVar385._12_4_ = (uStack_268._4_4_ - fStack_204) * 0.0;
      auVar73._0_4_ = (local_200 - local_270[0]) * fVar255;
      auVar73._4_4_ = (fStack_1fc - local_270[1]) * fVar266;
      auVar73._8_4_ = (fStack_1f8 - (float)uStack_268) * auVar125._0_4_;
      auVar73._12_4_ = (fStack_1f4 - uStack_268._4_4_) * 0.0;
      fVar377 = (float)(((int)(auVar125._0_4_ * auVar125._0_4_ +
                              fVar255 * fVar255 + fVar266 * fVar266) >> 1) + 0x1fbb4000);
      auVar326 = NEON_ext(auVar321,auVar321,8,1);
      auVar346 = NEON_ext(auVar126,auVar126,8,1);
      auVar386 = NEON_ext(auVar385,auVar385,8,1);
      auVar275 = NEON_ext(auVar73,auVar73,8,1);
      fVar255 = auVar326._0_4_ + auVar321._0_4_ + auVar321._4_4_;
      fVar266 = auVar346._0_4_ + auVar126._0_4_ + auVar126._4_4_;
      fVar219 = auVar386._0_4_ + auVar385._0_4_ + auVar385._4_4_;
      fVar221 = auVar275._0_4_ + auVar73._0_4_ + auVar73._4_4_;
      if (fVar377 * 1e-05 < fVar221 &&
          (fVar377 * 1e-05 < fVar219 && (fVar432 * 1e-05 < fVar255 && fVar432 * 1e-05 < fVar266))) {
        fVar216 = fVar255 / (fVar255 + fVar266);
        fVar255 = fVar255 / (fVar255 + fVar266);
        bVar105 = (byte)(-(uint)(fVar415 * fVar108 + fVar418 * fVar224 + fVar424 * fVar245 < 0.0) >>
                        0x18);
        uVar107 = (undefined1)
                  (-(uint)(fVar415 * fVar108 + fVar418 * fVar224 + fVar424 * fVar245 < 0.0) >> 0x18)
        ;
        uVar37 = CONCAT17(uVar107,(uint7)(bVar105 & 0x80) << 0x18) & 0x80ffffffffffffff;
        auVar184._0_8_ =
             CONCAT17((byte)(uVar37 >> 0x38) ^ auVar229[7],
                      CONCAT16(auVar229[6],
                               CONCAT15(auVar229[5],
                                        CONCAT14(auVar229[4],
                                                 CONCAT13((byte)(uVar37 >> 0x18) ^ auVar229[3],
                                                          auVar229._0_3_)))));
        in_register_00005188 =
             CONCAT17(uVar107,(uint7)CONCAT13(bVar105 & 0x80 ^ bVar150,SUB43(fVar108,0))) &
             0x8000ffffffffffff;
        fStack_178 = (float)uStack_268 + auVar429._8_4_ * fVar216;
        fStack_174 = uStack_268._4_4_ + auVar429._12_4_ * fVar255;
        local_180 = local_270[0] + auVar429._0_4_ * fVar216;
        fStack_17c = local_270[1] + auVar429._4_4_ * fVar255;
      }
      else {
        iVar289 = -(uint)(0.0 < fVar255);
        iVar291 = -(uint)(0.0 < fVar266);
        iVar293 = -(uint)(0.0 < fVar219);
        iVar425 = -(uint)(0.0 < fVar221);
        iVar289 = CONCAT13((byte)((uint)iVar289 >> 0x18) & bVar371,
                           CONCAT12((byte)((uint)iVar289 >> 0x10) & bVar370,
                                    CONCAT11((byte)((uint)iVar289 >> 8) & bVar369,
                                             (byte)iVar289 & bVar105)));
        auVar57._0_8_ =
             CONCAT17((byte)((uint)iVar291 >> 0x18) & bVar358,
                      CONCAT16((byte)((uint)iVar291 >> 0x10) & bVar373,
                               CONCAT15((byte)((uint)iVar291 >> 8) & bVar372,
                                        CONCAT14((byte)iVar291 & bVar149,iVar289))));
        auVar57[8] = (byte)iVar293 & bVar359;
        auVar57[9] = (byte)((uint)iVar293 >> 8) & bVar360;
        auVar57[10] = (byte)((uint)iVar293 >> 0x10) & bVar362;
        auVar57[0xb] = (byte)((uint)iVar293 >> 0x18) & bVar363;
        auVar74[0xc] = (byte)iVar425 & bVar364;
        auVar74._0_12_ = auVar57;
        auVar74[0xd] = (byte)((uint)iVar425 >> 8) & bVar365;
        auVar74[0xe] = (byte)((uint)iVar425 >> 0x10) & bVar367;
        auVar74[0xf] = (byte)((uint)iVar425 >> 0x18) & bVar368;
        switch(iVar289 + (int)((ulong)auVar57._0_8_ >> 0x20) + auVar57._8_4_ + auVar74._12_4_) {
        case 7:
          local_210[2] = fStack_1f8;
          fStack_204 = fStack_1f4;
          local_210[0] = local_200;
          local_210[1] = fStack_1fc;
        case 0xb:
          local_b0 = 1;
switchD_00867738_caseD_1a:
          auVar185._0_4_ = local_260 - local_270[0];
          auVar185._4_4_ = fStack_25c - local_270[1];
          auVar185._8_4_ = fStack_258 - (float)uStack_268;
          auVar185._12_4_ = fStack_254 - uStack_268._4_4_;
          fVar224 = auVar185._0_4_ * (local_260 - local_210[0]);
          fVar245 = auVar185._4_4_ * (fStack_25c - local_210[1]);
          fVar217 = auVar185._8_4_ * (fStack_258 - local_210[2]);
          fVar220 = auVar185._0_4_ * (local_270[0] - local_210[0]);
          fVar226 = auVar185._4_4_ * (local_270[1] - local_210[1]);
          fVar216 = auVar185._8_4_ * ((float)uStack_268 - local_210[2]);
          fVar227 = fVar224 + fVar245 + fVar217;
          fVar217 = fVar224 + fVar245 + fVar217;
          fVar224 = fVar220 + fVar226 + fVar216;
          fVar216 = fVar220 + fVar226 + fVar216;
          if (fVar227 * fVar224 < 0.0) {
            local_ac[0] = 2;
            auVar233._0_4_ =
                 (local_270[0] - local_210[0]) * fVar227 - (local_260 - local_210[0]) * fVar224;
            auVar233._4_4_ =
                 (local_270[1] - local_210[1]) * fVar217 - (fStack_25c - local_210[1]) * fVar216;
            auVar233._8_4_ =
                 ((float)uStack_268 - local_210[2]) * fVar227 -
                 (fStack_258 - local_210[2]) * fVar224;
            auVar233._12_4_ =
                 (uStack_268._4_4_ - fStack_204) * fVar217 - (fStack_254 - fStack_204) * fVar216;
            auVar110 = NEON_ext(auVar185,auVar185,4,1);
            auVar427 = NEON_ext(auVar233,auVar233,4,1);
            fVar216 = auVar185._0_4_ * auVar427._0_4_ - auVar110._0_4_ * auVar233._0_4_;
            auVar234._0_8_ =
                 CONCAT44(auVar185._4_4_ * auVar427._4_4_ - auVar110._4_4_ * auVar233._4_4_,fVar216)
            ;
            auVar234._8_4_ = auVar185._8_4_ * auVar233._0_4_ - auVar185._0_4_ * auVar233._8_4_;
            auVar234._12_4_ = auVar185._12_4_ * auVar233._4_4_ - auVar185._4_4_ * auVar233._12_4_;
            auVar427 = NEON_ext(auVar234,auVar234,4,1);
            auVar184._0_8_ = NEON_ext(auVar427._0_8_,auVar234._0_8_,4,1);
            fVar224 = (float)(0x7ef504f3 -
                             (int)(auVar185._8_4_ * auVar185._8_4_ +
                                  auVar185._0_4_ * auVar185._0_4_ + auVar185._4_4_ * auVar185._4_4_)
                             );
            fVar245 = (float)(0x7ef504f3 -
                             (int)(auVar185._8_4_ * auVar185._8_4_ +
                                  auVar185._0_4_ * auVar185._0_4_ + auVar185._4_4_ * auVar185._4_4_)
                             );
            auVar186._0_4_ =
                 auVar110._0_4_ * auVar427._0_4_ - auVar185._0_4_ * (float)auVar184._0_8_;
            auVar186._4_4_ =
                 auVar110._4_4_ * auVar427._4_4_ -
                 auVar185._4_4_ * (float)((ulong)auVar184._0_8_ >> 0x20);
            auVar186._8_4_ = auVar185._0_4_ * fVar216 - auVar185._8_4_ * auVar427._0_4_;
            auVar186._12_4_ = auVar185._4_4_ * 0.0 - auVar185._12_4_ * auVar427._4_4_;
            auVar110 = NEON_ext(auVar186,auVar186,4,1);
            fVar224 = fVar224 * fVar224;
            fVar245 = fVar245 * fVar245;
            auVar184._0_8_ = CONCAT44(auVar110._4_4_ * fVar245,auVar110._0_4_ * fVar224);
            in_register_00005188 = CONCAT44(fVar245 * 0.0,auVar186._0_4_ * fVar224);
          }
          else {
            local_270[0] = (float)((uint)local_270[0] ^
                                  ((uint)local_270[0] ^ (uint)local_260) & -(uint)(fVar227 <= 0.0));
            local_270[1] = (float)((uint)local_270[1] ^
                                  ((uint)local_270[1] ^ (uint)fStack_25c) & -(uint)(fVar217 <= 0.0))
            ;
            uStack_268._0_4_ =
                 (float)((uint)(float)uStack_268 ^
                        ((uint)(float)uStack_268 ^ (uint)fStack_258) & -(uint)(fVar227 <= 0.0));
            uStack_268._4_4_ =
                 (float)((uint)uStack_268._4_4_ ^
                        ((uint)uStack_268._4_4_ ^ (uint)fStack_254) & -(uint)(fVar217 <= 0.0));
            auVar184._0_8_ = CONCAT44(local_270[1] - local_210[1],local_270[0] - local_210[0]);
            in_register_00005188 =
                 CONCAT44(uStack_268._4_4_ - fStack_204,(float)uStack_268 - local_210[2]);
            local_ac[0] = 1;
          }
          break;
        default:
          goto switchD_00868114_caseD_8;
        case 0xd:
          uStack_268._0_4_ = fStack_258;
          uStack_268._4_4_ = fStack_254;
          local_270[0] = local_260;
          local_270[1] = fStack_25c;
        case 0xe:
          local_ac[0] = 1;
switchD_00867738_caseD_13:
          auVar187._0_4_ = local_200 - local_210[0];
          auVar187._4_4_ = fStack_1fc - local_210[1];
          auVar187._8_4_ = fStack_1f8 - local_210[2];
          auVar187._12_4_ = fStack_1f4 - fStack_204;
          fVar224 = auVar187._0_4_ * (local_200 - local_270[0]);
          fVar245 = auVar187._4_4_ * (fStack_1fc - local_270[1]);
          fVar217 = auVar187._8_4_ * (fStack_1f8 - (float)uStack_268);
          fVar220 = auVar187._0_4_ * (local_210[0] - local_270[0]);
          fVar226 = auVar187._4_4_ * (local_210[1] - local_270[1]);
          fVar216 = auVar187._8_4_ * (local_210[2] - (float)uStack_268);
          fVar227 = fVar224 + fVar245 + fVar217;
          fVar217 = fVar224 + fVar245 + fVar217;
          fVar224 = fVar220 + fVar226 + fVar216;
          fVar216 = fVar220 + fVar226 + fVar216;
          if (fVar227 * fVar224 < 0.0) {
            uVar183 = 2;
            auVar235._0_4_ =
                 (local_210[0] - local_270[0]) * fVar227 - (local_200 - local_270[0]) * fVar224;
            auVar235._4_4_ =
                 (local_210[1] - local_270[1]) * fVar217 - (fStack_1fc - local_270[1]) * fVar216;
            auVar235._8_4_ =
                 (local_210[2] - (float)uStack_268) * fVar227 -
                 (fStack_1f8 - (float)uStack_268) * fVar224;
            auVar235._12_4_ =
                 (fStack_204 - uStack_268._4_4_) * fVar217 -
                 (fStack_1f4 - uStack_268._4_4_) * fVar216;
            auVar110 = NEON_ext(auVar187,auVar187,4,1);
            auVar427 = NEON_ext(auVar235,auVar235,4,1);
            fVar224 = auVar187._0_4_ * auVar427._0_4_ - auVar110._0_4_ * auVar235._0_4_;
            auVar236._0_8_ =
                 CONCAT44(auVar187._4_4_ * auVar427._4_4_ - auVar110._4_4_ * auVar235._4_4_,fVar224)
            ;
            auVar236._8_4_ = auVar187._8_4_ * auVar235._0_4_ - auVar187._0_4_ * auVar235._8_4_;
            auVar236._12_4_ = auVar187._12_4_ * auVar235._4_4_ - auVar187._4_4_ * auVar235._12_4_;
            auVar427 = NEON_ext(auVar236,auVar236,4,1);
            auVar184._0_8_ = NEON_ext(auVar427._0_8_,auVar236._0_8_,4,1);
            auVar188._0_4_ =
                 auVar187._0_4_ * (float)auVar184._0_8_ - auVar110._0_4_ * auVar427._0_4_;
            auVar188._4_4_ =
                 auVar187._4_4_ * (float)((ulong)auVar184._0_8_ >> 0x20) -
                 auVar110._4_4_ * auVar427._4_4_;
            auVar188._8_4_ = auVar187._8_4_ * auVar427._0_4_ - auVar187._0_4_ * fVar224;
            auVar188._12_4_ = auVar187._12_4_ * auVar427._4_4_ - auVar187._4_4_ * 0.0;
            auVar110 = NEON_ext(auVar188,auVar188,4,1);
            fVar224 = (float)(0x7ef504f3 -
                             (int)(auVar187._8_4_ * auVar187._8_4_ +
                                  auVar187._0_4_ * auVar187._0_4_ + auVar187._4_4_ * auVar187._4_4_)
                             );
            fVar245 = (float)(0x7ef504f3 -
                             (int)(auVar187._8_4_ * auVar187._8_4_ +
                                  auVar187._0_4_ * auVar187._0_4_ + auVar187._4_4_ * auVar187._4_4_)
                             );
            fVar224 = fVar224 * fVar224;
            fVar245 = fVar245 * fVar245;
            auVar184._0_8_ = CONCAT44(auVar110._4_4_ * fVar245,auVar110._0_4_ * fVar224);
            in_register_00005188 = CONCAT44(fVar245 * 0.0,auVar188._0_4_ * fVar224);
LAB_00868798:
            local_b0 = uVar183;
          }
          else {
            local_210[0] = (float)((uint)local_210[0] ^
                                  ((uint)local_210[0] ^ (uint)local_200) & -(uint)(fVar227 <= 0.0));
            local_210[1] = (float)((uint)local_210[1] ^
                                  ((uint)local_210[1] ^ (uint)fStack_1fc) & -(uint)(fVar217 <= 0.0))
            ;
            local_210[2] = (float)((uint)local_210[2] ^
                                  ((uint)local_210[2] ^ (uint)fStack_1f8) & -(uint)(fVar227 <= 0.0))
            ;
            fStack_204 = (float)((uint)fStack_204 ^
                                ((uint)fStack_204 ^ (uint)fStack_1f4) & -(uint)(fVar217 <= 0.0));
            auVar184._0_8_ = CONCAT44(local_270[1] - local_210[1],local_270[0] - local_210[0]);
            in_register_00005188 =
                 CONCAT44(uStack_268._4_4_ - fStack_204,(float)uStack_268 - local_210[2]);
            local_b0 = 1;
          }
        }
      }
      break;
    }
switchD_00868114_caseD_8:
    fVar216 = fVar216 - auVar429._0_4_ * fVar147;
    auVar127._0_8_ = CONCAT44(fVar218 - auVar429._4_4_ * fVar106,fVar216);
    auVar127._8_4_ = auVar311._8_4_ * auVar429._0_4_ - auVar429._8_4_ * auVar311._0_4_;
    auVar127._12_4_ = auVar311._12_4_ * auVar429._4_4_ - auVar429._12_4_ * auVar311._4_4_;
    auVar275 = NEON_ext(auVar127,auVar127,4,1);
    fVar218 = local_210[0] - local_270[0];
    fVar219 = local_210[1] - local_270[1];
    fVar221 = local_210[2] - (float)uStack_268;
    uVar54 = NEON_ext(auVar275._0_8_,auVar127._0_8_,4,1);
    fVar255 = auVar275._0_4_;
    fVar266 = auVar275._4_4_;
    fVar377 = fVar216 * fVar216 + fVar255 * fVar255 + fVar266 * fVar266;
    fVar418 = fVar216 * fVar216 + fVar255 * fVar255 + fVar266 * fVar266;
    auVar128._0_4_ = fVar147 * fVar255 - auVar311._0_4_ * (float)uVar54;
    auVar128._4_4_ = fVar106 * fVar266 - auVar311._4_4_ * (float)((ulong)uVar54 >> 0x20);
    auVar128._8_4_ = auVar311._0_4_ * fVar216 - auVar311._8_4_ * fVar255;
    auVar128._12_4_ = auVar311._4_4_ * 0.0 - auVar311._12_4_ * fVar266;
    auVar275 = NEON_ext(auVar128,auVar128,4,1);
    fVar106 = fVar218 * auVar275._0_4_;
    fVar255 = fVar219 * auVar275._4_4_;
    iVar289 = -(uint)(fVar377 == 0.0);
    iVar291 = -(uint)(fVar418 == 0.0);
    fVar216 = 0.0;
    fVar147 = 0.0;
    if (fVar377 != 0.0) {
      fVar216 = fVar111 / fVar377;
      fVar147 = fVar113 / fVar418;
    }
    fVar216 = (fVar221 * auVar128._0_4_ + fVar106 + fVar255) * fVar216;
    fVar147 = (fVar221 * auVar128._0_4_ + fVar106 + fVar255) * fVar147;
    uVar379 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar147,fVar216)) &
                                          CONCAT44(-(uint)(fVar147 < fVar113),
                                                   -(uint)(fVar216 < fVar111)),4);
    fVar147 = auVar429._8_4_ * auVar311._8_4_ +
              auVar429._0_4_ * auVar311._0_4_ + auVar429._4_4_ * auVar311._4_4_;
    fVar106 = auVar429._8_4_ * auVar311._8_4_ +
              auVar429._0_4_ * auVar311._0_4_ + auVar429._4_4_ * auVar311._4_4_;
    auVar279._0_4_ = auVar429._0_4_ * fVar218;
    auVar279._4_4_ = auVar429._4_4_ * fVar219;
    auVar279._8_4_ = auVar429._8_4_ * fVar221;
    auVar279._12_4_ = auVar429._12_4_ * (fStack_204 - uStack_268._4_4_);
    auVar75._0_4_ = fVar218 * auVar311._0_4_;
    auVar75._4_4_ = fVar219 * auVar311._4_4_;
    auVar75._8_4_ = fVar221 * auVar311._8_4_;
    auVar75._12_4_ = (fStack_204 - uStack_268._4_4_) * auVar311._12_4_;
    auVar346 = NEON_ext(auVar279,auVar279,8,1);
    auVar275 = NEON_ext(auVar75,auVar75,8,1);
    fVar220 = auVar110._0_4_ + fVar220 + fVar226;
    fVar221 = auVar346._0_4_ + auVar279._0_4_ + auVar279._4_4_;
    fVar216 = auVar427._0_4_ + auVar206._0_4_ + auVar206._4_4_;
    fVar226 = auVar275._0_4_ + auVar75._0_4_ + auVar75._4_4_;
    iVar293 = -(uint)(fVar220 == 0.0);
    iVar425 = -(uint)(fVar216 == 0.0);
    fVar220 = fVar111 / fVar220;
    fVar216 = fVar256 / fVar216;
    fVar218 = (float)CONCAT13((byte)((uint)fVar220 >> 0x18) & ~(byte)((uint)iVar293 >> 0x18),
                              CONCAT12((byte)((uint)fVar220 >> 0x10) &
                                       ~(byte)((uint)iVar293 >> 0x10),
                                       CONCAT11((byte)((uint)fVar220 >> 8) &
                                                ~(byte)((uint)iVar293 >> 8),
                                                SUB41(fVar220,0) & ~(byte)iVar293)));
    fVar216 = (float)CONCAT13((byte)((uint)fVar216 >> 0x18) & ~(byte)((uint)iVar425 >> 0x18),
                              CONCAT12((byte)((uint)fVar216 >> 0x10) &
                                       ~(byte)((uint)iVar425 >> 0x10),
                                       CONCAT11((byte)((uint)fVar216 >> 8) &
                                                ~(byte)((uint)iVar425 >> 8),
                                                SUB41(fVar216,0) & ~(byte)iVar425)));
    fVar220 = ((float)uVar379 * fVar147 - fVar226) * fVar216;
    fVar216 = ((float)(uVar379 >> 0x20) * fVar106 - fVar226) * fVar216;
    uVar54 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar216,fVar220)) &
                                         CONCAT44(-(uint)(fVar216 < fVar113),
                                                  -(uint)(fVar220 < fVar111)),4);
    fVar219 = (float)uVar54;
    fVar255 = (float)((ulong)uVar54 >> 0x20);
    fVar226 = (fVar221 + fVar219 * fVar147) * fVar218;
    fVar218 = (fVar221 + fVar255 * fVar106) * fVar218;
    iVar293 = -(uint)(fVar219 == fVar220);
    iVar425 = -(uint)(fVar255 == fVar216);
    uVar117 = NEON_fmax(uVar115,uVar179 ^ (uVar179 ^ CONCAT44(fVar218,fVar226)) &
                                          CONCAT44(-(uint)(fVar218 < fVar113),
                                                   -(uint)(fVar226 < fVar111)),4);
    uVar379 = uVar379 ^ (uVar379 ^ uVar117) &
                        CONCAT17(~(byte)((uint)iVar425 >> 0x18) | (byte)((uint)iVar291 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar425 >> 0x10) |
                                          (byte)((uint)iVar291 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar425 >> 8) |
                                                   (byte)((uint)iVar291 >> 8),
                                                   CONCAT14(~(byte)iVar425 | (byte)iVar291,
                                                            CONCAT13(~(byte)((uint)iVar293 >> 0x18)
                                                                     | (byte)((uint)iVar289 >> 0x18)
                                                                     ,CONCAT12(~(byte)((uint)iVar293
                                                                                      >> 0x10) |
                                                                               (byte)((uint)iVar289
                                                                                     >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar293 >> 8) | (byte)((uint)iVar289 >> 8),
                                                  ~(byte)iVar293 | (byte)iVar289)))))));
    fVar216 = (float)uVar379;
    fVar220 = (float)(uVar379 >> 0x20);
    local_180 = local_270[0] + auVar429._0_4_ * fVar216;
    fStack_17c = local_270[1] + auVar429._4_4_ * fVar220;
    fStack_178 = (float)uStack_268 + auVar429._8_4_ * fVar216;
    fStack_174 = uStack_268._4_4_ + auVar429._12_4_ * fVar220;
    local_280 = (float)uVar51;
    fStack_27c = (float)((ulong)uVar51 >> 0x20);
    fStack_278 = (float)uVar116;
    fStack_274 = (float)((ulong)uVar116 >> 0x20);
    iVar289 = -(uint)(fVar216 == local_280);
    iVar291 = -(uint)(fVar216 == fStack_27c);
    iVar293 = -(uint)(fVar219 == fStack_278);
    iVar425 = -(uint)(fVar219 == fStack_274);
    iVar289 = CONCAT13((byte)((uint)iVar289 >> 0x18) & bVar371,
                       CONCAT12((byte)((uint)iVar289 >> 0x10) & bVar370,
                                CONCAT11((byte)((uint)iVar289 >> 8) & bVar369,
                                         (byte)iVar289 & bVar105)));
    auVar58._0_8_ =
         CONCAT17((byte)((uint)iVar291 >> 0x18) & bVar358,
                  CONCAT16((byte)((uint)iVar291 >> 0x10) & bVar373,
                           CONCAT15((byte)((uint)iVar291 >> 8) & bVar372,
                                    CONCAT14((byte)iVar291 & bVar149,iVar289))));
    auVar58[8] = (byte)iVar293 & bVar359;
    auVar58[9] = (byte)((uint)iVar293 >> 8) & bVar360;
    auVar58[10] = (byte)((uint)iVar293 >> 0x10) & bVar362;
    auVar58[0xb] = (byte)((uint)iVar293 >> 0x18) & bVar363;
    auVar76[0xc] = (byte)iVar425 & bVar364;
    auVar76._0_12_ = auVar58;
    auVar76[0xd] = (byte)((uint)iVar425 >> 8) & bVar365;
    auVar76[0xe] = (byte)((uint)iVar425 >> 0x10) & bVar367;
    auVar76[0xf] = (byte)((uint)iVar425 >> 0x18) & bVar368;
    uVar183 = iVar289 + (int)((ulong)auVar58._0_8_ >> 0x20) + auVar58._8_4_ + auVar76._12_4_;
    if (uVar183 == 0) {
      fVar216 = local_180 - (local_210[0] + auVar311._0_4_ * fVar219);
      fVar220 = fStack_17c - (local_210[1] + auVar311._4_4_ * fVar255);
      auVar184._0_8_ = CONCAT44(fVar220,fVar216);
      auVar184._8_4_ = fStack_178 - (local_210[2] + auVar311._8_4_ * fVar219);
      auVar184._12_4_ = fStack_174 - (fStack_204 + auVar311._12_4_ * fVar255);
      if (fVar217 * 1e-12 <= fVar227) {
        fVar224 = fVar224 * fVar216;
        fVar245 = fVar245 * fVar220;
        bVar105 = (byte)(-(uint)(fVar108 * auVar184._8_4_ + fVar224 + fVar245 < 0.0) >> 0x18);
        uVar107 = (undefined1)(-(uint)(fVar108 * auVar184._8_4_ + fVar224 + fVar245 < 0.0) >> 0x18);
        uVar37 = CONCAT17(uVar107,(uint7)(bVar105 & 0x80) << 0x18) & 0x80ffffffffffffff;
        auVar184._0_8_ =
             CONCAT17((byte)(uVar37 >> 0x38) ^ auVar229[7],
                      CONCAT16(auVar229[6],
                               CONCAT15(auVar229[5],
                                        CONCAT14(auVar229[4],
                                                 CONCAT13((byte)(uVar37 >> 0x18) ^ auVar229[3],
                                                          auVar229._0_3_)))));
        in_register_00005188 =
             CONCAT17(uVar107,(uint7)CONCAT13(bVar105 & 0x80 ^ bVar150,SUB43(fVar108,0))) &
             0x8000ffffffffffff;
      }
      else {
        in_register_00005188 = auVar184._8_8_;
      }
      break;
    }
    if ((uVar183 & 1) == 0) {
      if ((uVar183 >> 1 & 1) != 0) {
        uVar39 = 1;
        local_ac[0] = 1;
      }
    }
    else {
      uVar39 = 1;
      local_ac[0] = 1;
      uStack_268._0_4_ = fStack_258;
      uStack_268._4_4_ = fStack_254;
      local_270[0] = local_260;
      local_270[1] = fStack_25c;
    }
    if ((uVar183 >> 2 & 1) == 0) {
      if ((uVar183 >> 3 & 1) != 0) {
        uVar37 = 1;
        local_b0 = 1;
      }
    }
    else {
      uVar37 = 1;
      local_b0 = 1;
      local_210[2] = fStack_1f8;
      fStack_204 = fStack_1f4;
      local_210[0] = local_200;
      local_210[1] = fStack_1fc;
    }
    goto LAB_00867710;
  case 0x22:
switchD_00867738_caseD_22:
                    /* WARNING: This code block may not be properly labeled as switch case */
    auVar347._0_4_ = local_260 - local_270[0];
    auVar347._4_4_ = fStack_25c - local_270[1];
    auVar347._8_4_ = fStack_258 - (float)uStack_268;
    auVar347._12_4_ = fStack_254 - uStack_268._4_4_;
    auVar303._0_4_ = local_250 - local_260;
    auVar303._4_4_ = fStack_24c - fStack_25c;
    auVar303._8_4_ = fStack_248 - fStack_258;
    auVar303._12_4_ = fStack_244 - fStack_254;
    auVar312._0_4_ = local_270[0] - local_250;
    auVar312._4_4_ = local_270[1] - fStack_24c;
    auVar312._8_4_ = (float)uStack_268 - fStack_248;
    auVar312._12_4_ = uStack_268._4_4_ - fStack_244;
    auVar427 = NEON_ext(auVar303,auVar303,4,1);
    auVar431._0_4_ = local_210[0] - local_260;
    auVar431._4_4_ = local_210[1] - fStack_25c;
    auVar431._8_4_ = local_210[2] - fStack_258;
    auVar431._12_4_ = fStack_204 - fStack_254;
    auVar110 = NEON_ext(auVar431,auVar431,4,1);
    auVar207._0_4_ = local_210[0] - local_250;
    auVar207._4_4_ = local_210[1] - fStack_24c;
    auVar207._8_4_ = local_210[2] - fStack_248;
    auVar207._12_4_ = fStack_204 - fStack_244;
    auVar229 = NEON_ext(auVar312,auVar312,4,1);
    auVar211._0_4_ = local_210[0] - local_270[0];
    auVar211._4_4_ = local_210[1] - local_270[1];
    auVar211._8_4_ = local_210[2] - (float)uStack_268;
    auVar211._12_4_ = fStack_204 - uStack_268._4_4_;
    auVar304._0_4_ = auVar431._0_4_ * auVar427._0_4_ - auVar303._0_4_ * auVar110._0_4_;
    auVar304._4_4_ = auVar431._4_4_ * auVar427._4_4_ - auVar303._4_4_ * auVar110._4_4_;
    auVar304._8_4_ = auVar431._8_4_ * auVar303._0_4_ - auVar303._8_4_ * auVar431._0_4_;
    auVar304._12_4_ = auVar431._12_4_ * auVar303._4_4_ - auVar303._12_4_ * auVar431._4_4_;
    auVar275 = NEON_ext(auVar304,auVar304,4,1);
    auVar283._0_4_ = auVar303._0_4_ * auVar229._0_4_ - auVar312._0_4_ * auVar427._0_4_;
    auVar283._4_4_ = auVar303._4_4_ * auVar229._4_4_ - auVar312._4_4_ * auVar427._4_4_;
    auVar283._8_4_ = auVar303._8_4_ * auVar312._0_4_ - auVar312._8_4_ * auVar303._0_4_;
    auVar283._12_4_ = auVar303._12_4_ * auVar312._4_4_ - auVar312._12_4_ * auVar303._4_4_;
    auVar184 = NEON_ext(auVar283,auVar283,4,1);
    in_register_00005188 = (ulong)(uint)auVar283._0_4_;
    auVar427 = NEON_ext(auVar207,auVar207,4,1);
    auVar110 = NEON_ext(auVar347,auVar347,4,1);
    auVar305._0_4_ = auVar207._0_4_ * auVar229._0_4_ - auVar312._0_4_ * auVar427._0_4_;
    auVar305._4_4_ = auVar207._4_4_ * auVar229._4_4_ - auVar312._4_4_ * auVar427._4_4_;
    auVar305._8_4_ = auVar207._8_4_ * auVar312._0_4_ - auVar312._8_4_ * auVar207._0_4_;
    auVar305._12_4_ = auVar207._12_4_ * auVar312._4_4_ - auVar312._12_4_ * auVar207._4_4_;
    auVar229 = NEON_ext(auVar305,auVar305,4,1);
    fVar221 = auVar184._4_4_;
    auVar427 = NEON_ext(auVar211,auVar211,4,1);
    fVar224 = auVar184._0_4_;
    fVar245 = fVar224 * auVar229._0_4_;
    auVar348._0_4_ = auVar211._0_4_ * auVar110._0_4_ - auVar347._0_4_ * auVar427._0_4_;
    auVar348._4_4_ = auVar211._4_4_ * auVar110._4_4_ - auVar347._4_4_ * auVar427._4_4_;
    auVar348._8_4_ = auVar211._8_4_ * auVar347._0_4_ - auVar347._8_4_ * auVar211._0_4_;
    auVar348._12_4_ = auVar211._12_4_ * auVar347._4_4_ - auVar347._12_4_ * auVar211._4_4_;
    auVar387._0_4_ = fVar224 * auVar275._0_4_;
    auVar387._4_4_ = fVar221 * auVar275._4_4_;
    auVar387._8_4_ = auVar283._0_4_ * auVar304._0_4_;
    auVar387._12_4_ = auVar304._4_4_ * 0.0;
    auVar110 = NEON_ext(auVar348,auVar348,4,1);
    auVar388._4_12_ = auVar387._4_12_;
    auVar388._0_4_ = auVar387._0_4_;
    auVar390._0_8_ = auVar388._0_8_;
    auVar390._8_4_ = auVar387._8_4_;
    auVar390._12_4_ = auVar387._12_4_;
    auVar389._8_8_ = auVar390._8_8_;
    auVar389._4_4_ = fVar245;
    auVar389._0_4_ = auVar387._0_4_;
    auVar391._0_12_ = auVar389._0_12_;
    auVar391._12_4_ = auVar283._0_4_ * auVar305._0_4_;
    fVar219 = fVar224 * auVar110._0_4_;
    fVar255 = fVar221 * auVar110._4_4_;
    auVar110 = NEON_ext(auVar391,auVar391,8,1);
    fVar108 = auVar110._0_4_ + fVar221 * auVar275._4_4_ + auVar387._0_4_;
    fVar218 = auVar110._4_4_ + fVar221 * auVar229._4_4_ + fVar245;
    auVar306._0_8_ = CONCAT44(fVar218,fVar108);
    fVar245 = fVar219 + fVar255 + auVar283._0_4_ * auVar348._0_4_;
    uStack_1a8 = CONCAT44(fVar219 + fVar255 + auVar283._0_4_ * auVar348._0_4_,fVar245);
    auVar306._8_8_ = uStack_1a8;
    uVar39 = (-(uint)(fVar218 < 0.0) & 2) + (uint)(fVar108 < 0.0) | -(uint)(fVar245 < 0.0) & 4;
    if (uVar39 == 7) {
      auVar189._0_4_ = (local_270[0] - local_210[0]) * fVar224;
      auVar189._4_4_ = (local_270[1] - local_210[1]) * fVar221;
      auVar189._8_4_ = ((float)uStack_268 - local_210[2]) * auVar283._0_4_;
      auVar189._12_4_ = (uStack_268._4_4_ - fStack_204) * 0.0;
      auVar110 = NEON_ext(auVar189,auVar189,8,1);
      if (auVar110._0_4_ + auVar189._0_4_ + auVar189._4_4_ < 0.0) {
        auVar184._0_8_ = CONCAT44(-fVar221,-fVar224);
        in_register_00005188 = CONCAT44(0x80000000,-auVar283._0_4_);
        auVar190._8_8_ = _UNK_03caa978;
        auVar190._0_8_ = _DAT_03caa970;
        uStack_268._0_4_ = fStack_258;
        uStack_268._4_4_ = fStack_254;
        local_270[0] = local_260;
        local_270[1] = fStack_25c;
        fStack_258 = fVar227;
        fStack_254 = fVar220;
        local_260 = fVar216;
        fStack_25c = fVar217;
        auVar306 = a64_TBL(ZEXT816(0),auVar306,auVar190);
      }
      uStack_1a8 = auVar306._8_8_;
      local_1b0 = auVar306._0_8_;
      break;
    }
    local_ac[0] = 2;
    bVar105 = PTR_DAT_047d1a28[uVar39];
    local_1b0 = auVar306._0_8_;
    if ((char)bVar105 < '\0') {
      if ((char)bVar105 < -5) {
        lVar40 = (long)((char)bVar105 + 8);
        local_270[lVar40 * 4 + 2] = fStack_248;
        local_270[lVar40 * 4 + 3] = fVar106;
        local_270[lVar40 * 4] = fVar226;
        local_270[lVar40 * 4 + 1] = fVar147;
        goto switchD_00867738_caseD_1a;
      }
LAB_00868d48:
      local_b0 = 1;
      local_ac[0] = 1;
      goto switchD_00867738_caseD_12;
    }
    uVar37 = (ulong)bVar105;
    fVar224 = local_270[uVar37 * 4];
    fVar245 = local_270[uVar37 * 4 + 1];
    fVar216 = local_270[uVar37 * 4 + 2];
    fVar217 = local_270[uVar37 * 4 + 3];
    cVar295 = PTR_DAT_047d1a30[uVar37];
    lVar40 = (long)cVar295;
    cVar4 = PTR_DAT_047d1a30[(long)(int)(char)bVar105 + 2];
    lVar38 = (long)cVar4;
    fVar227 = local_210[0] - fVar224;
    fVar220 = local_210[1] - fVar245;
    fVar108 = local_210[2] - fVar216;
    fVar218 = fStack_204 - fVar217;
    auVar262._0_4_ = fVar227 * (local_270[lVar40 * 4] - fVar224);
    auVar262._4_4_ = fVar220 * (local_270[lVar40 * 4 + 1] - fVar245);
    auVar262._8_4_ = fVar108 * (local_270[lVar40 * 4 + 2] - fVar216);
    auVar262._12_4_ = fVar218 * (local_270[lVar40 * 4 + 3] - fVar217);
    auVar110 = NEON_ext(auVar262,auVar262,8,1);
    if (auVar262._0_4_ + auVar262._4_4_ + auVar110._0_4_ < 0.0) {
      fVar219 = local_270[lVar38 * 4];
      fVar221 = local_270[lVar38 * 4 + 1];
      fVar255 = local_270[lVar38 * 4 + 2];
      fVar266 = local_270[lVar38 * 4 + 3];
      local_270[lVar40 * 4 + 2] = fStack_248;
      local_270[lVar40 * 4 + 3] = fVar106;
      local_270[lVar40 * 4] = fVar226;
      local_270[lVar40 * 4 + 1] = fVar147;
      auVar193._0_4_ = fVar227 * (fVar219 - fVar224);
      auVar193._4_4_ = fVar220 * (fVar221 - fVar245);
      auVar193._8_4_ = fVar108 * (fVar255 - fVar216);
      auVar193._12_4_ = fVar218 * (fVar266 - fVar217);
      auVar110 = NEON_ext(auVar193,auVar193,8,1);
      if (auVar193._0_4_ + auVar193._4_4_ + auVar110._0_4_ < 0.0) {
        auVar184._0_8_ = CONCAT44(fStack_25c,local_260);
        iVar289 = (int)cVar295;
        if (cVar4 != 2) {
          iVar289 = (int)cVar4;
        }
        local_ac[0] = 1;
        *(ulong *)(local_270 + (long)iVar289 * 4 + 2) = CONCAT44(fStack_254,fStack_258);
        *(undefined8 *)(local_270 + (long)iVar289 * 4) = auVar184._0_8_;
        goto switchD_00867738_caseD_12;
      }
    }
    else {
      local_270[lVar38 * 4 + 2] = fStack_248;
      local_270[lVar38 * 4 + 3] = fVar106;
      local_270[lVar38 * 4] = fVar226;
      local_270[lVar38 * 4 + 1] = fVar147;
    }
    goto switchD_00867738_caseD_1a;
  }
LAB_00868de8:
  bVar33 = false;
  local_1a0 = local_b0;
  fVar224 = local_210[1];
  fVar245 = fStack_204;
  pauVar31 = local_168;
  pauVar42 = local_158;
  uVar198 = local_b0;
  uVar49 = local_ac[0];
code_r0x00868590:
  uVar183 = (uint)uVar45;
  uVar45 = (ulong)uVar198;
  fVar220 = (float)local_b8 * 1.3;
  fVar216 = (float)auVar184._0_8_;
  fVar217 = (float)((ulong)auVar184._0_8_ >> 0x20);
  fVar227 = (float)in_register_00005188;
  fVar226 = fVar227 * fVar227 + fVar216 * fVar216 + fVar217 * fVar217;
  local_b8 = CONCAT44((float)((ulong)local_b8 >> 0x20) * 1.3,fVar220);
  auVar184._0_8_ = uVar115;
  if (fVar226 != 0.0) {
    auVar184._0_8_ =
         CONCAT44(fVar113 / SQRT(fVar227 * fVar227 + fVar216 * fVar216 + fVar217 * fVar217),
                  fVar111 / SQRT(fVar226));
  }
  fVar147 = (float)local_308;
  local_210[1] = fVar224;
  fStack_204 = fVar245;
  local_168 = pauVar31;
  local_158 = pauVar42;
  local_b0 = uVar198;
  local_ac[0] = uVar49;
  if ((bVar33) || (fVar226 < fVar220 * fVar220 * fVar220 * fVar220)) {
    bVar34 = fVar147 == 0.0;
LAB_0086a27c:
    auVar110 = param_5[4];
    local_120 = *(undefined8 *)param_5[3];
    uStack_118 = *(undefined8 *)(param_5[3] + 8);
    uStack_128 = *(undefined8 *)(param_5[2] + 8);
    uStack_138 = *(undefined8 *)(param_5[1] + 8);
    local_140 = *(undefined8 *)*pauVar1;
    auVar63._0_8_ =
         CONCAT44(*(float *)(param_5[3] + 4) * (float)uStack_2a8 +
                  *(float *)(param_5[1] + 4) * (float)local_2b0 +
                  *(float *)(param_5[2] + 4) * local_2b0._4_4_ + auVar110._4_4_,
                  *(float *)param_5[3] * (float)uStack_2a8 +
                  *(float *)*pauVar1 * (float)local_2b0 + *(float *)param_5[2] * local_2b0._4_4_ +
                  auVar110._0_4_);
    auVar63._8_4_ =
         *(float *)(param_5[3] + 8) * (float)uStack_2a8 +
         *(float *)(param_5[1] + 8) * (float)local_2b0 +
         *(float *)(param_5[2] + 8) * local_2b0._4_4_ + auVar110._8_4_;
    auVar63._12_4_ =
         *(float *)(param_5[3] + 0xc) * (float)uStack_2a8 +
         *(float *)(param_5[1] + 0xc) * (float)local_2b0 +
         *(float *)(param_5[2] + 0xc) * local_2b0._4_4_ + auVar110._12_4_;
    local_130 = *(undefined8 *)param_5[2];
    uStack_108 = auVar63._8_8_;
    local_110 = auVar63._0_8_;
    FUN_0086b864(local_270,&local_148,&local_158,&local_168,&local_140,&local_b8,local_ac,&local_b0,
                 local_100,&local_d0);
    param_6[3] = uStack_d8;
    param_6[2] = local_e0;
    *(float *)(param_6 + 5) = fStack_c8;
    *(float *)((long)param_6 + 0x2c) = fStack_c4;
    *(float *)(param_6 + 4) = local_d0;
    *(float *)((long)param_6 + 0x24) = fStack_cc;
    uVar49 = local_ac[0];
    uVar198 = local_b0;
    if (bVar34) {
      param_6[1] = CONCAT44((float)((ulong)local_100[0] >> 0x20) -
                            (float)((ulong)*(undefined8 *)param_5[6] >> 0x20),
                            (float)local_100[0] - (float)*(undefined8 *)param_5[6]);
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = *param_6;
        param_7[1] = param_6[1];
        uVar51 = param_6[2];
        param_7[3] = param_6[3];
        param_7[2] = uVar51;
        uVar51 = param_6[4];
        uVar115 = param_6[5];
        *(undefined4 *)(param_7 + 6) = 1;
        param_7[5] = uVar115;
        param_7[4] = uVar51;
      }
      if ((uVar2 != 0) ||
         (auVar228._0_4_ = local_d0 * *(float *)*param_5,
         auVar228._4_4_ = fStack_cc * *(float *)(*param_5 + 4),
         auVar228._8_4_ = fStack_c8 * *(float *)(*param_5 + 8),
         auVar228._12_4_ = fStack_c4 * *(float *)(*param_5 + 0xc),
         auVar110 = NEON_ext(auVar228,auVar228,8,1),
         auVar228._0_4_ + auVar228._4_4_ + auVar110._0_4_ <= -1.9073486e-06)) {
        *(undefined4 *)(param_6 + 6) = 1;
        *param_6 = 0;
      }
    }
    else {
      *param_6 = local_308;
      param_6[1] = 0;
      *(undefined4 *)(param_6 + 6) = 1;
    }
    goto LAB_0086a4c0;
  }
  fVar226 = (local_270[0] - local_210[0]) * fVar216;
  fVar106 = (local_270[1] - fVar224) * fVar217;
  fVar108 = ((float)uStack_268 - local_210[2]) * fVar227;
  fVar218 = (float)auVar184._0_8_;
  fVar221 = fVar218 * (fVar226 + fVar106 + fVar108);
  fVar219 = (float)((ulong)auVar184._0_8_ >> 0x20);
  uVar54 = CONCAT44(fVar219 * (fVar226 + fVar106 + fVar108),fVar221);
  fVar216 = fVar218 * fVar216;
  fVar217 = fVar219 * fVar217;
  auVar184._0_8_ = CONCAT44(fVar217,fVar216);
  fVar218 = fVar218 * fVar227;
  fVar219 = fVar219 * (float)(in_register_00005188 >> 0x20);
  in_register_00005188 = CONCAT44(fVar219,fVar218);
  uVar47 = uVar198;
  if (fVar221 < fVar220) {
    bVar34 = true;
    if (fVar147 == 0.0) goto LAB_0086a27c;
    *(undefined4 *)(param_6 + 6) = 1;
LAB_0086a3b4:
    uVar51 = local_308;
    uVar39 = uVar49;
    if (!(bVar34 || uVar3 != 0)) goto LAB_0086a47c;
    goto LAB_0086a3cc;
  }
  fVar227 = -fVar216;
  fVar226 = -fVar217;
  fVar106 = -fVar218;
  fVar108 = -fVar219;
  lVar40 = 4;
  iVar289 = (int)uVar375;
  iVar291 = (int)((ulong)uVar375 >> 0x20);
  iVar293 = (int)uVar376;
  iVar425 = (int)((ulong)uVar376 >> 0x20);
  switch(local_150 & 3) {
  case 0:
switchD_00868eb4_caseD_0:
    auVar110 = *pauVar42;
    auVar427 = *(undefined1 (*) [16])(*pauVar42 + 0xc);
    auVar229 = *(undefined1 (*) [16])(pauVar42[1] + 8);
    auVar326 = NEON_ext(auVar229,auVar229,8,1);
    auVar275 = NEON_ext(auVar110,auVar110,8,1);
    auVar346 = NEON_ext(auVar427,auVar427,8,1);
    auVar240._0_4_ = fVar227 * auVar110._0_4_ + fVar226 * auVar110._4_4_ + fVar106 * auVar275._0_4_;
    auVar240._4_4_ = fVar227 * auVar427._0_4_ + fVar226 * auVar427._4_4_ + fVar106 * auVar346._0_4_;
    auVar240._8_4_ = fVar227 * auVar229._0_4_ + fVar226 * auVar229._4_4_ + fVar106 * auVar326._0_4_;
    auVar240._12_4_ =
         fVar227 * (float)*(undefined8 *)(pauVar42[2] + 4) +
         fVar226 * (float)((ulong)*(undefined8 *)(pauVar42[2] + 4) >> 0x20) +
         fVar106 * *(float *)(pauVar42[2] + 0xc);
    auVar351._12_4_ = iStack_294;
    auVar351._0_12_ = auVar22;
    if ((int)lVar40 < (int)local_150) {
LAB_0086906c:
      iVar50 = (int)lVar40;
      pauVar41 = (undefined1 (*) [16])(pauVar42[1] + lVar40 * 0xc + 8);
      auVar317._0_4_ = iVar50 + local_2a0;
      auVar317._4_4_ = iVar50 + iStack_29c;
      auVar317._8_4_ = iVar50 + iStack_298;
      auVar317._12_4_ = iVar50 + iStack_294;
      do {
        auVar110 = *(undefined1 (*) [16])(pauVar41[-2] + 8);
        pauVar29 = pauVar41 + 1;
        lVar40 = lVar40 + 4;
        auVar427 = *(undefined1 (*) [16])(pauVar41[-1] + 4);
        auVar229 = *pauVar41;
        puVar30 = *pauVar41;
        auVar326 = NEON_ext(auVar229,auVar229,8,1);
        auVar275 = NEON_ext(auVar110,auVar110,8,1);
        auVar346 = NEON_ext(auVar427,auVar427,8,1);
        pauVar41 = pauVar41 + 3;
        auVar88._0_4_ =
             fVar227 * auVar110._0_4_ + fVar226 * auVar110._4_4_ + fVar106 * auVar275._0_4_;
        auVar88._4_4_ =
             fVar227 * auVar427._0_4_ + fVar226 * auVar427._4_4_ + fVar106 * auVar346._0_4_;
        auVar88._8_4_ =
             fVar227 * auVar229._0_4_ + fVar226 * auVar229._4_4_ + fVar106 * auVar326._0_4_;
        auVar88._12_4_ =
             fVar227 * (float)*(undefined8 *)(puVar30 + 0xc) +
             fVar226 * (float)((ulong)*(undefined8 *)(puVar30 + 0xc) >> 0x20) +
             fVar106 * *(float *)(*pauVar29 + 4);
        auVar350._0_4_ = -(uint)(auVar240._0_4_ < auVar88._0_4_);
        auVar350._4_4_ = -(uint)(auVar240._4_4_ < auVar88._4_4_);
        auVar350._8_4_ = -(uint)(auVar240._8_4_ < auVar88._8_4_);
        auVar350._12_4_ = -(uint)(auVar240._12_4_ < auVar88._12_4_);
        auVar240 = NEON_fmax(auVar88,auVar240,4);
        auVar351 = auVar351 ^ (auVar351 ^ auVar317) & auVar350;
        auVar318._0_4_ = auVar317._0_4_ + iVar289;
        auVar318._4_4_ = auVar317._4_4_ + iVar291;
        auVar318._8_4_ = auVar317._8_4_ + iVar293;
        auVar318._12_4_ = auVar317._12_4_ + iVar425;
        auVar317 = auVar318;
      } while (lVar40 < (int)local_150);
    }
    break;
  case 1:
    lVar40 = 1;
    auVar351 = ZEXT816(0);
    fVar108 = (float)*(undefined8 *)*pauVar42 * fVar227;
    fVar221 = (float)((ulong)*(undefined8 *)*pauVar42 >> 0x20) * fVar226;
    fVar255 = *(float *)(*pauVar42 + 8) * fVar106;
    auVar240._0_8_ = CONCAT44(fVar108 + fVar221 + fVar255,fVar108 + fVar221 + fVar255);
    auVar240._8_8_ = auVar240._0_8_;
    if (1 < (int)local_150) goto LAB_0086906c;
    break;
  case 2:
    lVar40 = 2;
    auVar86._0_4_ = *(float *)*pauVar42 * fVar227;
    auVar86._4_4_ = *(float *)(*pauVar42 + 4) * fVar226;
    auVar86._8_4_ = *(float *)(*pauVar42 + 8) * fVar106;
    auVar86._12_4_ = *(float *)(*pauVar42 + 0xc) * fVar108;
    auVar110 = NEON_ext(auVar86,auVar86,8,1);
    auVar134._0_4_ = (float)*(undefined8 *)(*pauVar42 + 0xc) * fVar227;
    auVar134._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar42 + 0xc) >> 0x20) * fVar226;
    auVar134._8_4_ = *(float *)(pauVar42[1] + 4) * fVar106;
    auVar134._12_4_ = *(float *)(pauVar42[1] + 4) * fVar108;
    auVar427 = NEON_ext(auVar134,auVar134,8,1);
    auVar240._4_4_ = auVar134._0_4_ + auVar134._4_4_ + auVar427._0_4_;
    auVar240._0_4_ = auVar110._0_4_ + auVar86._0_4_ + auVar86._4_4_;
    auVar240._8_8_ = uVar52;
    auVar351._12_4_ = iStack_294;
    auVar351._0_12_ = auVar21;
    if (2 < (int)local_150) goto LAB_0086906c;
    break;
  case 3:
    if (local_150 != 3) {
      lVar40 = 3;
      goto switchD_00868eb4_caseD_0;
    }
    auVar87._0_4_ = (float)*(undefined8 *)*pauVar42 * fVar227;
    auVar87._4_4_ = (float)((ulong)*(undefined8 *)*pauVar42 >> 0x20) * fVar226;
    auVar87._8_4_ = *(float *)(*pauVar42 + 8) * fVar106;
    auVar87._12_4_ = *(float *)(*pauVar42 + 8) * fVar108;
    auVar135._0_4_ = (float)*(undefined8 *)(*pauVar42 + 0xc) * fVar227;
    auVar135._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar42 + 0xc) >> 0x20) * fVar226;
    auVar135._8_4_ = *(float *)(pauVar42[1] + 4) * fVar106;
    auVar135._12_4_ = *(float *)(pauVar42[1] + 4) * fVar108;
    auVar163._0_4_ = (float)*(undefined8 *)(pauVar42[1] + 8) * fVar227;
    auVar163._4_4_ = (float)((ulong)*(undefined8 *)(pauVar42[1] + 8) >> 0x20) * fVar226;
    auVar163._8_4_ = *(float *)pauVar42[2] * fVar106;
    auVar163._12_4_ = *(float *)pauVar42[2] * fVar108;
    auVar110 = NEON_ext(auVar87,auVar87,8,1);
    auVar427 = NEON_ext(auVar135,auVar135,8,1);
    auVar229 = NEON_ext(auVar163,auVar163,8,1);
    fVar227 = auVar110._0_4_ + auVar87._0_4_ + auVar87._4_4_;
    fVar226 = auVar427._0_4_ + auVar135._0_4_ + auVar135._4_4_;
    uVar54 = CONCAT44(fVar226,fVar227);
    fVar106 = auVar229._0_4_ + auVar163._0_4_ + auVar163._4_4_;
    uVar54 = NEON_fmaxp(uVar54,uVar54,4);
    uVar54 = NEON_fmax(CONCAT44(fVar106,fVar106),uVar54,4);
    uVar379 = (ulong)(char)PTR_DAT_047d1a18
                           [(-(uint)((float)((ulong)uVar54 >> 0x20) <= fVar226) & 2) +
                            (uint)((float)uVar54 <= fVar227) | -(uint)((float)uVar54 <= fVar106) & 4
                           ];
    uVar37 = uVar379;
    goto LAB_00869128;
  }
  auVar110 = NEON_rev64(auVar240,4);
  auVar136._0_4_ = -(uint)(auVar110._0_4_ <= auVar240._0_4_);
  auVar136._4_4_ = -(uint)(auVar110._4_4_ <= auVar240._4_4_);
  auVar136._8_4_ = -(uint)(auVar110._8_4_ <= auVar240._8_4_);
  auVar136._12_4_ = -(uint)(auVar110._12_4_ <= auVar240._12_4_);
  auVar110 = NEON_fmax(auVar240,auVar110,4);
  auVar427 = NEON_rev64(auVar351,4);
  auVar427 = auVar427 ^ (auVar427 ^ auVar351) & auVar136;
  auVar229 = NEON_ext(auVar110,auVar110,8,1);
  auVar275 = NEON_ext(auVar427,auVar427,8,1);
  uVar37 = auVar275._0_8_ ^
           (auVar275._0_8_ ^ auVar427._0_8_) & (ulong)-(uint)(auVar229._0_4_ <= auVar110._0_4_);
  uVar379 = uVar37 & 0xffffffff;
  uVar37 = (ulong)(int)uVar37;
LAB_00869128:
  pfVar43 = (float *)(*pauVar42 + uVar37 * 0xc);
  fVar227 = (float)((uint)uVar379 | 0x3f000000);
  lVar38 = (long)(int)uVar49;
  fVar226 = *pfVar43;
  fVar106 = pfVar43[1];
  fVar108 = pfVar43[2];
  lVar40 = 4;
  auVar110 = param_5[3];
  fVar418 = auVar110._4_4_;
  auVar427 = *pauVar1;
  auVar229 = param_5[2];
  fVar221 = auVar110._0_4_ * fVar218 + auVar427._0_4_ * fVar216 + auVar229._0_4_ * fVar217;
  fVar255 = fVar418 * fVar218 + auVar427._4_4_ * fVar216 + auVar229._4_4_ * fVar217;
  fVar266 = auVar110._8_4_ * fVar218 + auVar427._8_4_ * fVar216 + auVar229._8_4_ * fVar217;
  fVar377 = auVar110._12_4_ * fVar218 + auVar427._12_4_ * fVar216 + auVar229._12_4_ * fVar217;
  switch(local_160 & 3) {
  case 0:
switchD_0086918c_caseD_0:
    auVar275 = *pauVar31;
    auVar346 = *(undefined1 (*) [16])(*pauVar31 + 0xc);
    auVar326 = *(undefined1 (*) [16])(pauVar31[1] + 8);
    auVar428 = NEON_ext(auVar326,auVar326,8,1);
    auVar386 = NEON_ext(auVar275,auVar275,8,1);
    auVar222 = NEON_ext(auVar346,auVar346,8,1);
    auVar241._0_4_ = fVar221 * auVar275._0_4_ + fVar255 * auVar275._4_4_ + fVar266 * auVar386._0_4_;
    auVar241._4_4_ = fVar221 * auVar346._0_4_ + fVar255 * auVar346._4_4_ + fVar266 * auVar222._0_4_;
    auVar241._8_4_ = fVar221 * auVar326._0_4_ + fVar255 * auVar326._4_4_ + fVar266 * auVar428._0_4_;
    auVar241._12_4_ =
         fVar221 * (float)*(undefined8 *)(pauVar31[2] + 4) +
         fVar255 * (float)((ulong)*(undefined8 *)(pauVar31[2] + 4) >> 0x20) +
         fVar266 * *(float *)(pauVar31[2] + 0xc);
    auVar353._12_4_ = iStack_294;
    auVar353._0_12_ = auVar24;
    if ((int)lVar40 < (int)local_160) {
LAB_00869344:
      iVar50 = (int)lVar40;
      pauVar41 = (undefined1 (*) [16])(pauVar31[1] + lVar40 * 0xc + 8);
      auVar422._0_4_ = iVar50 + local_2a0;
      auVar422._4_4_ = iVar50 + iStack_29c;
      auVar422._8_4_ = iVar50 + iStack_298;
      auVar422._12_4_ = iVar50 + iStack_294;
      do {
        auVar275 = *(undefined1 (*) [16])(pauVar41[-2] + 8);
        pauVar29 = pauVar41 + 1;
        lVar40 = lVar40 + 4;
        auVar346 = *(undefined1 (*) [16])(pauVar41[-1] + 4);
        auVar326 = *pauVar41;
        puVar30 = *pauVar41;
        auVar428 = NEON_ext(auVar326,auVar326,8,1);
        auVar386 = NEON_ext(auVar275,auVar275,8,1);
        auVar222 = NEON_ext(auVar346,auVar346,8,1);
        pauVar41 = pauVar41 + 3;
        auVar91._0_4_ =
             fVar221 * auVar275._0_4_ + fVar255 * auVar275._4_4_ + fVar266 * auVar386._0_4_;
        auVar91._4_4_ =
             fVar221 * auVar346._0_4_ + fVar255 * auVar346._4_4_ + fVar266 * auVar222._0_4_;
        auVar91._8_4_ =
             fVar221 * auVar326._0_4_ + fVar255 * auVar326._4_4_ + fVar266 * auVar428._0_4_;
        auVar91._12_4_ =
             fVar221 * (float)*(undefined8 *)(puVar30 + 0xc) +
             fVar255 * (float)((ulong)*(undefined8 *)(puVar30 + 0xc) >> 0x20) +
             fVar266 * *(float *)(*pauVar29 + 4);
        auVar352._0_4_ = -(uint)(auVar241._0_4_ < auVar91._0_4_);
        auVar352._4_4_ = -(uint)(auVar241._4_4_ < auVar91._4_4_);
        auVar352._8_4_ = -(uint)(auVar241._8_4_ < auVar91._8_4_);
        auVar352._12_4_ = -(uint)(auVar241._12_4_ < auVar91._12_4_);
        auVar241 = NEON_fmax(auVar91,auVar241,4);
        auVar353 = auVar353 ^ (auVar353 ^ auVar422) & auVar352;
        auVar423._0_4_ = auVar422._0_4_ + iVar289;
        auVar423._4_4_ = auVar422._4_4_ + iVar291;
        auVar423._8_4_ = auVar422._8_4_ + iVar293;
        auVar423._12_4_ = auVar422._12_4_ + iVar425;
        auVar422 = auVar423;
      } while (lVar40 < (int)local_160);
    }
    break;
  case 1:
    lVar40 = 1;
    auVar353 = ZEXT816(0);
    fVar377 = fVar221 * (float)*(undefined8 *)*pauVar31;
    fVar424 = fVar255 * (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
    fVar415 = fVar266 * *(float *)(*pauVar31 + 8);
    auVar241._0_8_ = CONCAT44(fVar377 + fVar424 + fVar415,fVar377 + fVar424 + fVar415);
    auVar241._8_8_ = auVar241._0_8_;
    if (1 < (int)local_160) goto LAB_00869344;
    break;
  case 2:
    lVar40 = 2;
    auVar89._0_4_ = fVar221 * *(float *)*pauVar31;
    auVar89._4_4_ = fVar255 * *(float *)(*pauVar31 + 4);
    auVar89._8_4_ = fVar266 * *(float *)(*pauVar31 + 8);
    auVar89._12_4_ = fVar377 * *(float *)(*pauVar31 + 0xc);
    auVar275 = NEON_ext(auVar89,auVar89,8,1);
    auVar137._0_4_ = fVar221 * (float)*(undefined8 *)(*pauVar31 + 0xc);
    auVar137._4_4_ = fVar255 * (float)((ulong)*(undefined8 *)(*pauVar31 + 0xc) >> 0x20);
    auVar137._8_4_ = fVar266 * *(float *)(pauVar31[1] + 4);
    auVar137._12_4_ = fVar377 * *(float *)(pauVar31[1] + 4);
    auVar346 = NEON_ext(auVar137,auVar137,8,1);
    auVar241._4_4_ = auVar137._0_4_ + auVar137._4_4_ + auVar346._0_4_;
    auVar241._0_4_ = auVar275._0_4_ + auVar89._0_4_ + auVar89._4_4_;
    auVar241._8_8_ = uVar52;
    auVar353._12_4_ = iStack_294;
    auVar353._0_12_ = auVar23;
    if (2 < (int)local_160) goto LAB_00869344;
    break;
  case 3:
    if (local_160 != 3) {
      lVar40 = 3;
      goto switchD_0086918c_caseD_0;
    }
    auVar90._0_4_ = fVar221 * (float)*(undefined8 *)*pauVar31;
    auVar90._4_4_ = fVar255 * (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
    auVar90._8_4_ = fVar266 * *(float *)(*pauVar31 + 8);
    auVar90._12_4_ = fVar377 * *(float *)(*pauVar31 + 8);
    auVar138._0_4_ = fVar221 * (float)*(undefined8 *)(*pauVar31 + 0xc);
    auVar138._4_4_ = fVar255 * (float)((ulong)*(undefined8 *)(*pauVar31 + 0xc) >> 0x20);
    auVar138._8_4_ = fVar266 * *(float *)(pauVar31[1] + 4);
    auVar138._12_4_ = fVar377 * *(float *)(pauVar31[1] + 4);
    auVar164._0_4_ = fVar221 * (float)*(undefined8 *)(pauVar31[1] + 8);
    auVar164._4_4_ = fVar255 * (float)((ulong)*(undefined8 *)(pauVar31[1] + 8) >> 0x20);
    auVar164._8_4_ = fVar266 * *(float *)pauVar31[2];
    auVar164._12_4_ = fVar377 * *(float *)pauVar31[2];
    auVar275 = NEON_ext(auVar90,auVar90,8,1);
    auVar346 = NEON_ext(auVar138,auVar138,8,1);
    auVar326 = NEON_ext(auVar164,auVar164,8,1);
    fVar221 = auVar275._0_4_ + auVar90._0_4_ + auVar90._4_4_;
    fVar255 = auVar346._0_4_ + auVar138._0_4_ + auVar138._4_4_;
    uVar54 = CONCAT44(fVar255,fVar221);
    fVar266 = auVar326._0_4_ + auVar164._0_4_ + auVar164._4_4_;
    uVar54 = NEON_fmaxp(uVar54,uVar54,4);
    uVar54 = NEON_fmax(CONCAT44(fVar266,fVar266),uVar54,4);
    uVar379 = (ulong)(char)PTR_DAT_047d1a18
                           [(-(uint)((float)((ulong)uVar54 >> 0x20) <= fVar255) & 2) +
                            (uint)((float)uVar54 <= fVar221) | -(uint)((float)uVar54 <= fVar266) & 4
                           ];
    uVar37 = uVar379;
    goto LAB_00869400;
  }
  auVar275 = NEON_rev64(auVar241,4);
  auVar139._0_4_ = -(uint)(auVar275._0_4_ <= auVar241._0_4_);
  auVar139._4_4_ = -(uint)(auVar275._4_4_ <= auVar241._4_4_);
  auVar139._8_4_ = -(uint)(auVar275._8_4_ <= auVar241._8_4_);
  auVar139._12_4_ = -(uint)(auVar275._12_4_ <= auVar241._12_4_);
  auVar275 = NEON_fmax(auVar241,auVar275,4);
  auVar346 = NEON_rev64(auVar353,4);
  auVar346 = auVar346 ^ (auVar346 ^ auVar353) & auVar139;
  auVar326 = NEON_ext(auVar275,auVar275,8,1);
  auVar386 = NEON_ext(auVar346,auVar346,8,1);
  uVar37 = auVar386._0_8_ ^
           (auVar386._0_8_ ^ auVar346._0_8_) & (ulong)-(uint)(auVar326._0_4_ <= auVar275._0_4_);
  uVar379 = uVar37 & 0xffffffff;
  uVar37 = (ulong)(int)uVar37;
LAB_00869400:
  uVar54 = *(undefined8 *)(*pauVar31 + uVar37 * 0xc);
  auVar346 = NEON_ext(auVar229,auVar229,8,1);
  fVar377 = *(float *)((long)(*pauVar31 + uVar37 * 0xc) + 8);
  fVar221 = *(float *)param_5[4];
  fVar255 = *(float *)(param_5[4] + 4);
  fVar266 = *(float *)(param_5[4] + 8);
  lVar40 = (long)(int)uVar198;
  uVar37 = (long)(int)uVar198 + 1;
  local_210[lVar40 * 4 + 2] = local_210[2];
  local_210[lVar40 * 4 + 3] = fVar245;
  afStack_220[lVar40 * 4 + 4] = local_210[0];
  afStack_220[lVar40 * 4 + 5] = fVar224;
  iVar50 = uVar198 + uVar49;
  fVar221 = (float)uVar54 - fVar221;
  fVar255 = (float)((ulong)uVar54 >> 0x20) - fVar255;
  fVar377 = fVar377 - fVar266;
  auVar275 = NEON_ext(auVar427,auVar427,8,1);
  auVar326 = NEON_ext(auVar110,auVar110,8,1);
  *(ulong *)(local_210 + uVar37 * 4 + 2) = CONCAT44(fStack_204,local_210[2]);
  *(ulong *)(afStack_220 + uVar37 * 4 + 4) = CONCAT44(local_210[1],local_210[0]);
  fVar415 = (auVar275._0_4_ * fVar377 + auVar427._0_4_ * fVar221 + auVar427._4_4_ * fVar255) -
            (float)local_2b0;
  fVar432 = (auVar346._0_4_ * fVar377 + auVar229._0_4_ * fVar221 + auVar229._4_4_ * fVar255) -
            local_2b0._4_4_;
  fVar225 = (auVar326._0_4_ * fVar377 + auVar110._0_4_ * fVar221 + fVar418 * fVar255) -
            (float)uStack_2a8;
  uVar39 = uVar49 + 1;
  *(ulong *)(local_270 + lVar38 * 4 + 2) = CONCAT44(uStack_268._4_4_,(float)uStack_268);
  *(ulong *)(local_270 + lVar38 * 4) = CONCAT44(local_270[1],local_270[0]);
  *(ulong *)(local_270 + (long)(int)uVar39 * 4 + 2) = CONCAT44(uStack_268._4_4_,(float)uStack_268);
  *(ulong *)(local_270 + (long)(int)uVar39 * 4) = CONCAT44(local_270[1],local_270[0]);
  fVar224 = fVar216 * (fVar226 - fVar415);
  fVar245 = fVar217 * (fVar106 - fVar432);
  fVar266 = fVar218 * (fVar108 - fVar225);
  fVar424 = fVar224 + fVar245 + fVar266;
  fVar266 = fVar224 + fVar245 + fVar266;
  uVar54 = CONCAT44(fVar266,fVar424);
  auVar92._0_4_ = fVar216 * (local_270[0] - fVar226);
  auVar92._4_4_ = fVar217 * (local_270[1] - fVar106);
  auVar92._8_4_ = fVar218 * ((float)uStack_268 - fVar108);
  auVar92._12_4_ = fVar219 * (uStack_268._4_4_ - fVar227);
  auVar110 = NEON_ext(auVar92,auVar92,8,1);
  auVar165._0_4_ = fVar216 * (fVar415 - local_210[0]);
  auVar165._4_4_ = fVar217 * (fVar432 - local_210[1]);
  auVar165._8_4_ = fVar218 * (fVar225 - local_210[2]);
  auVar165._12_4_ =
       fVar219 * (((auVar326._4_4_ * fVar377 + fVar418 * fVar221 + auVar326._4_4_ * fVar255) -
                  uStack_2a8._4_4_) - fStack_204);
  fVar221 = auVar92._0_4_ + auVar92._4_4_ + auVar110._0_4_;
  auVar110 = NEON_ext(auVar165,auVar165,8,1);
  fVar245 = auVar165._0_4_ + auVar165._4_4_ + auVar110._0_4_;
  fVar224 = (float)((ulong)local_308 >> 0x20);
  uVar35 = uVar2;
  if (iVar50 == 2) {
    if (fVar221 <= fVar220) {
      uVar39 = uVar49;
      if (fVar245 <= fVar220) goto LAB_00869568;
    }
    else {
      if (fVar245 <= fVar220) goto LAB_00869540;
      local_ac[0] = uVar39;
      local_270[lVar38 * 4 + 2] = fVar108;
      local_270[lVar38 * 4 + 3] = fVar227;
      local_270[lVar38 * 4] = fVar226;
      local_270[lVar38 * 4 + 1] = fVar106;
    }
LAB_008695cc:
    local_b0 = (uint)uVar37;
    local_210[lVar40 * 4 + 2] = fVar225;
    local_210[lVar40 * 4 + 3] = (float)((uint)uVar379 | 0x3f000000);
    afStack_220[lVar40 * 4 + 4] = fVar415;
    afStack_220[lVar40 * 4 + 5] = fVar432;
    if (param_7 == (undefined8 *)0x0) {
LAB_00869550:
      fVar245 = (float)*(undefined8 *)param_5[6];
      fVar227 = (float)((ulong)*(undefined8 *)param_5[6] >> 0x20);
      goto LAB_0086997c;
    }
LAB_008695dc:
  }
  else {
    if (fVar221 <= fVar245) {
      fVar106 = fVar216 * (fVar415 - local_1f0);
      fVar108 = fVar217 * (fVar432 - fStack_1ec);
      fVar221 = fVar218 * (fVar225 - fStack_1e8);
      fVar245 = fVar216 * (fVar415 - local_200);
      fVar227 = fVar217 * (fVar432 - fStack_1fc);
      fVar226 = fVar218 * (fVar225 - fStack_1f8);
      uVar55 = NEON_fmin(CONCAT44(fVar245 + fVar227 + fVar226,fVar245 + fVar227 + fVar226),
                         CONCAT44(fVar106 + fVar108 + fVar221,fVar106 + fVar108 + fVar221),4);
      uVar39 = uVar49;
      if (fVar220 < (float)uVar55) goto LAB_008695cc;
    }
    else {
      fVar377 = fVar216 * (local_250 - fVar226);
      fVar418 = fVar217 * (fStack_24c - fVar106);
      fVar415 = fVar218 * (fStack_248 - fVar108);
      fVar245 = fVar216 * (local_260 - fVar226);
      fVar221 = fVar217 * (fStack_25c - fVar106);
      fVar255 = fVar218 * (fStack_258 - fVar108);
      uVar55 = NEON_fmin(CONCAT44(fVar245 + fVar221 + fVar255,fVar245 + fVar221 + fVar255),
                         CONCAT44(fVar377 + fVar418 + fVar415,fVar377 + fVar418 + fVar415),4);
      if (fVar220 < (float)uVar55) {
LAB_00869540:
        local_ac[0] = uVar39;
        local_270[lVar38 * 4 + 2] = fVar108;
        local_270[lVar38 * 4 + 3] = fVar227;
        local_270[lVar38 * 4] = fVar226;
        local_270[lVar38 * 4 + 1] = fVar106;
        uVar37 = uVar45;
        if (param_7 == (undefined8 *)0x0) goto LAB_00869550;
        goto LAB_008695dc;
      }
    }
LAB_00869568:
    if (param_7 != (undefined8 *)0x0) {
      fVar245 = local_270[0];
      fVar227 = local_270[1];
      fVar226 = (float)uStack_268;
      fVar106 = uStack_268._4_4_;
      if (uVar49 != 1) {
        if (uVar198 == 1) {
          fVar245 = local_210[0] + fVar216 * fVar424;
          fVar227 = local_210[1] + fVar217 * fVar266;
          fVar226 = local_210[2] + fVar218 * fVar424;
          fVar106 = fStack_204 + fVar219 * fVar266;
        }
        else {
          fVar245 = local_180;
          fVar227 = fStack_17c;
          fVar226 = fStack_178;
          fVar106 = fStack_174;
        }
      }
      *(float *)(param_7 + 3) = fVar226;
      *(float *)((long)param_7 + 0x1c) = fVar106;
      *(float *)(param_7 + 2) = fVar245;
      *(float *)((long)param_7 + 0x14) = fVar227;
      param_7[5] = in_register_00005188;
      param_7[4] = auVar184._0_8_;
      uVar55 = *(undefined8 *)param_5[6];
      *(undefined4 *)(param_7 + 6) = 1;
      param_7[1] = CONCAT44(fVar266 - (float)((ulong)uVar55 >> 0x20),fVar424 - (float)uVar55);
    }
    fVar245 = (float)*(undefined8 *)param_5[6];
    fVar227 = (float)((ulong)*(undefined8 *)param_5[6] >> 0x20);
    if (fVar424 <= (float)uVar53 + fVar245) {
      if ((uVar2 == 0) &&
         (auVar258._0_4_ = local_2e0 * fVar216, auVar258._4_4_ = fStack_2dc * fVar217,
         auVar258._8_4_ = fVar17 * fVar218, auVar258._12_4_ = fVar219 * 0.0,
         auVar110 = NEON_ext(auVar258,auVar258,8,1),
         -1.9073486e-06 < auVar110._0_4_ + auVar258._0_4_ + auVar258._4_4_)) {
LAB_0086a440:
        goto LAB_0086a4c0;
      }
      iVar268 = 1;
      *(undefined4 *)(param_6 + 6) = 1;
      uVar39 = uVar49;
      goto LAB_0086a468;
    }
    if (!(bool)(bVar34 | (uVar2 != 0 && (uVar48 != uVar49 || uVar183 != uVar198))))
    goto LAB_00869970;
    if (3 < iVar50) {
      uVar35 = 1;
      goto LAB_00869974;
    }
    if (iVar50 == 2) {
      fVar226 = fStack_328 * fStack_328 + fVar109 * fVar109 + fStack_32c * fStack_32c;
      fVar106 = fStack_328 * fStack_328 + fVar109 * fVar109 + fStack_32c * fStack_32c;
      if (fVar226 == 0.0) {
LAB_00869970:
        uVar35 = 0;
        goto LAB_00869974;
      }
      fVar108 = fVar109 * (local_270[0] - local_210[0]);
      fVar219 = fStack_32c * (local_270[1] - local_210[1]);
      fVar151 = fStack_328 * ((float)uStack_268 - local_210[2]);
      fVar377 = fVar108 + fVar219 + fVar151;
      fVar151 = fVar108 + fVar219 + fVar151;
      fVar221 = -fVar377;
      fVar255 = -fVar151;
      fVar113 = fVar221 / fVar226;
      fVar108 = (local_270[0] - local_210[0]) + fVar109 * fVar113;
      fVar219 = (local_270[1] - local_210[1]) + fStack_32c * (fVar255 / fVar106);
      fVar113 = ((float)uStack_268 - local_210[2]) + fStack_328 * fVar113;
      fVar108 = fVar108 * fVar108;
      fVar219 = fVar219 * fVar219;
      fVar113 = fVar113 * fVar113;
      fVar256 = ((fVar113 + fVar108 + fVar219) - (fVar320 + fVar245) * (fVar320 + fVar245)) *
                -fVar226;
      if (fVar256 < 0.0) goto LAB_00869970;
      fVar256 = SQRT(fVar256);
      fVar108 = SQRT(((fVar113 + fVar108 + fVar219) - (fVar323 + fVar227) * (fVar323 + fVar227)) *
                     -fVar106);
      fVar221 = fVar221 - fVar256;
      fVar255 = fVar255 - fVar108;
      uVar37 = CONCAT44(fVar255,fVar221);
      local_3c0 = auVar228._0_4_;
      uVar37 = uVar37 ^ (uVar37 ^ CONCAT44(fVar108 - fVar151,fVar256 - fVar377)) &
                        CONCAT44(-(uint)(fVar255 < 0.0),-(uint)(fVar221 < 0.0)) &
                        *(ulong *)PTR_DAT_047d19e0;
      fVar108 = (float)uVar37;
      bVar34 = false;
      bVar33 = false;
      if (0.0 <= fVar108) {
        bVar34 = false;
        bVar33 = true;
        if (!NAN(fVar108) && !NAN(local_3c0 * fVar226)) {
          bVar34 = fVar108 < local_3c0 * fVar226;
          bVar33 = false;
        }
      }
      if (bVar34 == bVar33) goto LAB_00869970;
      fVar108 = fVar108 / fVar226;
      fVar106 = (float)(uVar37 >> 0x20) / fVar106;
      uVar374 = CONCAT44(fVar106,fVar108);
      auVar252 = ZEXT816(0);
      fVar219 = (local_270[0] + fVar109 * fVar108) - local_210[0];
      fVar113 = (local_270[1] + fStack_32c * fVar106) - local_210[1];
      fVar108 = ((float)uStack_268 + fStack_328 * fVar108) - local_210[2];
      fVar226 = fVar108 * fVar108 + fVar219 * fVar219 + fVar113 * fVar113;
      if (fVar226 != 0.0) {
        fVar226 = SQRT(fVar226);
        fVar256 = SQRT(fVar108 * fVar108 + fVar219 * fVar219 + fVar113 * fVar113);
        auVar252._0_4_ = fVar219 / fVar226;
        auVar252._4_4_ = fVar113 / fVar256;
        auVar252._8_4_ = fVar108 / fVar226;
        auVar252._12_4_ = ((uStack_268._4_4_ + fStack_324 * fVar106) - fStack_204) / fVar256;
      }
      fVar226 = -auVar252._0_4_;
      fVar108 = -auVar252._4_4_;
      fVar106 = -auVar252._8_4_;
      fVar219 = -auVar252._12_4_;
      lVar40 = 4;
      iVar50 = 0;
      switch(local_150 & 3) {
      case 0:
switchD_0086975c_caseD_0:
        auVar110 = *pauVar42;
        auVar427 = *(undefined1 (*) [16])(*pauVar42 + 0xc);
        auVar229 = *(undefined1 (*) [16])(pauVar42[1] + 8);
        auVar326 = NEON_ext(auVar229,auVar229,8,1);
        auVar275 = NEON_ext(auVar110,auVar110,8,1);
        auVar346 = NEON_ext(auVar427,auVar427,8,1);
        auVar244._0_4_ =
             fVar226 * auVar110._0_4_ + fVar108 * auVar110._4_4_ + fVar106 * auVar275._0_4_;
        auVar244._4_4_ =
             fVar226 * auVar427._0_4_ + fVar108 * auVar427._4_4_ + fVar106 * auVar346._0_4_;
        auVar244._8_4_ =
             fVar226 * auVar229._0_4_ + fVar108 * auVar229._4_4_ + fVar106 * auVar326._0_4_;
        auVar244._12_4_ =
             fVar226 * (float)*(undefined8 *)(pauVar42[2] + 4) +
             fVar108 * (float)((ulong)*(undefined8 *)(pauVar42[2] + 4) >> 0x20) +
             fVar106 * *(float *)(pauVar42[2] + 0xc);
        auVar355._12_4_ = iStack_294;
        auVar355._0_12_ = auVar26;
        if ((int)lVar40 < (int)local_150) {
LAB_00869dc8:
          iVar171 = (int)lVar40;
          pauVar41 = (undefined1 (*) [16])(pauVar42[1] + lVar40 * 0xc + 8);
          auVar286._0_4_ = iVar171 + local_2a0;
          auVar286._4_4_ = iVar171 + iStack_29c;
          auVar286._8_4_ = iVar171 + iStack_298;
          auVar286._12_4_ = iVar171 + iStack_294;
          do {
            auVar110 = *(undefined1 (*) [16])(pauVar41[-2] + 8);
            pauVar29 = pauVar41 + 1;
            lVar40 = lVar40 + 4;
            auVar427 = *(undefined1 (*) [16])(pauVar41[-1] + 4);
            auVar229 = *pauVar41;
            puVar30 = *pauVar41;
            auVar326 = NEON_ext(auVar229,auVar229,8,1);
            auVar275 = NEON_ext(auVar110,auVar110,8,1);
            auVar346 = NEON_ext(auVar427,auVar427,8,1);
            pauVar41 = pauVar41 + 3;
            auVar99._0_4_ =
                 fVar226 * auVar110._0_4_ + fVar108 * auVar110._4_4_ + fVar106 * auVar275._0_4_;
            auVar99._4_4_ =
                 fVar226 * auVar427._0_4_ + fVar108 * auVar427._4_4_ + fVar106 * auVar346._0_4_;
            auVar99._8_4_ =
                 fVar226 * auVar229._0_4_ + fVar108 * auVar229._4_4_ + fVar106 * auVar326._0_4_;
            auVar99._12_4_ =
                 fVar226 * (float)*(undefined8 *)(puVar30 + 0xc) +
                 fVar108 * (float)((ulong)*(undefined8 *)(puVar30 + 0xc) >> 0x20) +
                 fVar106 * *(float *)(*pauVar29 + 4);
            auVar354._0_4_ = -(uint)(auVar244._0_4_ < auVar99._0_4_);
            auVar354._4_4_ = -(uint)(auVar244._4_4_ < auVar99._4_4_);
            auVar354._8_4_ = -(uint)(auVar244._8_4_ < auVar99._8_4_);
            auVar354._12_4_ = -(uint)(auVar244._12_4_ < auVar99._12_4_);
            auVar244 = NEON_fmax(auVar99,auVar244,4);
            auVar355 = auVar355 ^ (auVar355 ^ auVar286) & auVar354;
            auVar287._0_4_ = auVar286._0_4_ + iVar289;
            auVar287._4_4_ = auVar286._4_4_ + iVar291;
            auVar287._8_4_ = auVar286._8_4_ + iVar293;
            auVar287._12_4_ = auVar286._12_4_ + iVar425;
            auVar286 = auVar287;
          } while (lVar40 < (int)local_150);
        }
        break;
      case 1:
switchD_0086975c_caseD_1:
        lVar40 = 1;
        auVar355 = ZEXT816(0);
        fVar219 = (float)*(undefined8 *)*pauVar42 * fVar226;
        fVar113 = (float)((ulong)*(undefined8 *)*pauVar42 >> 0x20) * fVar108;
        fVar256 = *(float *)(*pauVar42 + 8) * fVar106;
        auVar244._0_8_ = CONCAT44(fVar219 + fVar113 + fVar256,fVar219 + fVar113 + fVar256);
        auVar244._8_8_ = auVar244._0_8_;
        if (1 < (int)local_150) goto LAB_00869dc8;
        break;
      case 2:
switchD_0086975c_caseD_2:
        lVar40 = 2;
        auVar97._0_4_ = *(float *)*pauVar42 * fVar226;
        auVar97._4_4_ = *(float *)(*pauVar42 + 4) * fVar108;
        auVar97._8_4_ = *(float *)(*pauVar42 + 8) * fVar106;
        auVar97._12_4_ = *(float *)(*pauVar42 + 0xc) * fVar219;
        auVar110 = NEON_ext(auVar97,auVar97,8,1);
        auVar141._0_4_ = (float)*(undefined8 *)(*pauVar42 + 0xc) * fVar226;
        auVar141._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar42 + 0xc) >> 0x20) * fVar108;
        auVar141._8_4_ = *(float *)(pauVar42[1] + 4) * fVar106;
        auVar141._12_4_ = *(float *)(pauVar42[1] + 4) * fVar219;
        auVar427 = NEON_ext(auVar141,auVar141,8,1);
        auVar244._4_4_ = auVar141._0_4_ + auVar141._4_4_ + auVar427._0_4_;
        auVar244._0_4_ = auVar110._0_4_ + auVar97._0_4_ + auVar97._4_4_;
        auVar244._8_8_ = uVar52;
        auVar355._12_4_ = iStack_294;
        auVar355._0_12_ = auVar25;
        if (2 < (int)local_150) goto LAB_00869dc8;
        break;
      case 3:
switchD_0086975c_caseD_3:
        if (local_150 != 3) {
          lVar40 = 3;
          goto switchD_0086975c_caseD_0;
        }
        auVar98._0_4_ = (float)*(undefined8 *)*pauVar42 * fVar226;
        auVar98._4_4_ = (float)((ulong)*(undefined8 *)*pauVar42 >> 0x20) * fVar108;
        auVar98._8_4_ = *(float *)(*pauVar42 + 8) * fVar106;
        auVar98._12_4_ = *(float *)(*pauVar42 + 8) * fVar219;
        auVar142._0_4_ = (float)*(undefined8 *)(*pauVar42 + 0xc) * fVar226;
        auVar142._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar42 + 0xc) >> 0x20) * fVar108;
        auVar142._8_4_ = *(float *)(pauVar42[1] + 4) * fVar106;
        auVar142._12_4_ = *(float *)(pauVar42[1] + 4) * fVar219;
        auVar169._0_4_ = (float)*(undefined8 *)(pauVar42[1] + 8) * fVar226;
        auVar169._4_4_ = (float)((ulong)*(undefined8 *)(pauVar42[1] + 8) >> 0x20) * fVar108;
        auVar169._8_4_ = *(float *)pauVar42[2] * fVar106;
        auVar169._12_4_ = *(float *)pauVar42[2] * fVar219;
        auVar110 = NEON_ext(auVar98,auVar98,8,1);
        auVar427 = NEON_ext(auVar142,auVar142,8,1);
        auVar229 = NEON_ext(auVar169,auVar169,8,1);
        fVar226 = auVar110._0_4_ + auVar98._0_4_ + auVar98._4_4_;
        fVar106 = auVar427._0_4_ + auVar142._0_4_ + auVar142._4_4_;
        uVar55 = CONCAT44(fVar106,fVar226);
        fVar108 = auVar229._0_4_ + auVar169._0_4_ + auVar169._4_4_;
        uVar55 = NEON_fmaxp(uVar55,uVar55,4);
        uVar55 = NEON_fmax(CONCAT44(fVar108,fVar108),uVar55,4);
        uVar379 = (ulong)(char)PTR_DAT_047d1a18
                               [(-(uint)((float)((ulong)uVar55 >> 0x20) <= fVar106) & 2) +
                                (uint)((float)uVar55 <= fVar226) |
                                -(uint)((float)uVar55 <= fVar108) & 4];
        uVar37 = uVar379;
        goto LAB_00869e84;
      }
      auVar110 = NEON_rev64(auVar244,4);
      auVar143._0_4_ = -(uint)(auVar110._0_4_ <= auVar244._0_4_);
      auVar143._4_4_ = -(uint)(auVar110._4_4_ <= auVar244._4_4_);
      auVar143._8_4_ = -(uint)(auVar110._8_4_ <= auVar244._8_4_);
      auVar143._12_4_ = -(uint)(auVar110._12_4_ <= auVar244._12_4_);
      auVar110 = NEON_fmax(auVar244,auVar110,4);
      auVar427 = NEON_rev64(auVar355,4);
      auVar427 = auVar427 ^ (auVar427 ^ auVar355) & auVar143;
      auVar229 = NEON_ext(auVar110,auVar110,8,1);
      auVar275 = NEON_ext(auVar427,auVar427,8,1);
      uVar37 = auVar275._0_8_ ^
               (auVar275._0_8_ ^ auVar427._0_8_) & (ulong)-(uint)(auVar229._0_4_ <= auVar110._0_4_);
      uVar379 = uVar37 & 0xffffffff;
      uVar37 = (ulong)(int)uVar37;
LAB_00869e84:
      auVar56 = *(undefined1 (*) [12])(*pauVar42 + uVar37 * 0xc);
      lVar40 = 4;
      auVar110 = *pauVar1;
      auVar427 = param_5[2];
      fVar106 = auVar252._4_4_;
      auVar229 = param_5[3];
      fVar108 = auVar252._8_4_;
      fVar221 = auVar229._4_4_;
      fVar226 = auVar252._0_4_;
      fVar219 = auVar229._0_4_ * fVar108 + auVar110._0_4_ * fVar226 + auVar427._0_4_ * fVar106;
      fVar113 = fVar221 * fVar108 + auVar110._4_4_ * fVar226 + auVar427._4_4_ * fVar106;
      fVar256 = auVar229._8_4_ * fVar108 + auVar110._8_4_ * fVar226 + auVar427._8_4_ * fVar106;
      fVar151 = auVar229._12_4_ * fVar108 + auVar110._12_4_ * fVar226 + auVar427._12_4_ * fVar106;
      switch(local_160 & 3) {
      case 0:
switchD_00869ee8_caseD_0:
        auVar275 = *pauVar31;
        auVar346 = *(undefined1 (*) [16])(*pauVar31 + 0xc);
        auVar326 = *(undefined1 (*) [16])(pauVar31[1] + 8);
        auVar428 = NEON_ext(auVar326,auVar326,8,1);
        auVar386 = NEON_ext(auVar275,auVar275,8,1);
        auVar222 = NEON_ext(auVar346,auVar346,8,1);
        auVar288._0_4_ =
             fVar219 * auVar275._0_4_ + fVar113 * auVar275._4_4_ + fVar256 * auVar386._0_4_;
        auVar288._4_4_ =
             fVar219 * auVar346._0_4_ + fVar113 * auVar346._4_4_ + fVar256 * auVar222._0_4_;
        auVar288._8_4_ =
             fVar219 * auVar326._0_4_ + fVar113 * auVar326._4_4_ + fVar256 * auVar428._0_4_;
        auVar288._12_4_ =
             fVar219 * (float)*(undefined8 *)(pauVar31[2] + 4) +
             fVar113 * (float)((ulong)*(undefined8 *)(pauVar31[2] + 4) >> 0x20) +
             fVar256 * *(float *)(pauVar31[2] + 0xc);
        auVar357._12_4_ = iStack_294;
        auVar357._0_12_ = auVar28;
        if ((int)lVar40 < (int)local_160) {
LAB_0086a0a0:
          iVar171 = (int)lVar40;
          pauVar42 = (undefined1 (*) [16])(pauVar31[1] + lVar40 * 0xc + 8);
          auVar411._0_4_ = iVar171 + local_2a0;
          auVar411._4_4_ = iVar171 + iStack_29c;
          auVar411._8_4_ = iVar171 + iStack_298;
          auVar411._12_4_ = iVar171 + iStack_294;
          do {
            auVar275 = *(undefined1 (*) [16])(pauVar42[-2] + 8);
            pauVar41 = pauVar42 + 1;
            lVar40 = lVar40 + 4;
            auVar346 = *(undefined1 (*) [16])(pauVar42[-1] + 4);
            auVar326 = *pauVar42;
            puVar30 = *pauVar42;
            auVar428 = NEON_ext(auVar326,auVar326,8,1);
            auVar386 = NEON_ext(auVar275,auVar275,8,1);
            auVar222 = NEON_ext(auVar346,auVar346,8,1);
            pauVar42 = pauVar42 + 3;
            auVar102._0_4_ =
                 fVar219 * auVar275._0_4_ + fVar113 * auVar275._4_4_ + fVar256 * auVar386._0_4_;
            auVar102._4_4_ =
                 fVar219 * auVar346._0_4_ + fVar113 * auVar346._4_4_ + fVar256 * auVar222._0_4_;
            auVar102._8_4_ =
                 fVar219 * auVar326._0_4_ + fVar113 * auVar326._4_4_ + fVar256 * auVar428._0_4_;
            auVar102._12_4_ =
                 fVar219 * (float)*(undefined8 *)(puVar30 + 0xc) +
                 fVar113 * (float)((ulong)*(undefined8 *)(puVar30 + 0xc) >> 0x20) +
                 fVar256 * *(float *)(*pauVar41 + 4);
            auVar356._0_4_ = -(uint)(auVar288._0_4_ < auVar102._0_4_);
            auVar356._4_4_ = -(uint)(auVar288._4_4_ < auVar102._4_4_);
            auVar356._8_4_ = -(uint)(auVar288._8_4_ < auVar102._8_4_);
            auVar356._12_4_ = -(uint)(auVar288._12_4_ < auVar102._12_4_);
            auVar288 = NEON_fmax(auVar102,auVar288,4);
            auVar357 = auVar357 ^ (auVar357 ^ auVar411) & auVar356;
            auVar412._0_4_ = auVar411._0_4_ + iVar289;
            auVar412._4_4_ = auVar411._4_4_ + iVar291;
            auVar412._8_4_ = auVar411._8_4_ + iVar293;
            auVar412._12_4_ = auVar411._12_4_ + iVar425;
            auVar411 = auVar412;
          } while (lVar40 < (int)local_160);
        }
        break;
      case 1:
        lVar40 = 1;
        auVar357 = ZEXT816(0);
        fVar151 = fVar219 * (float)*(undefined8 *)*pauVar31;
        fVar255 = fVar113 * (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
        fVar377 = fVar256 * *(float *)(*pauVar31 + 8);
        auVar288._0_8_ = CONCAT44(fVar151 + fVar255 + fVar377,fVar151 + fVar255 + fVar377);
        auVar288._8_8_ = auVar288._0_8_;
        if (1 < (int)local_160) goto LAB_0086a0a0;
        break;
      case 2:
        lVar40 = 2;
        auVar100._0_4_ = fVar219 * *(float *)*pauVar31;
        auVar100._4_4_ = fVar113 * *(float *)(*pauVar31 + 4);
        auVar100._8_4_ = fVar256 * *(float *)(*pauVar31 + 8);
        auVar100._12_4_ = fVar151 * *(float *)(*pauVar31 + 0xc);
        auVar275 = NEON_ext(auVar100,auVar100,8,1);
        auVar144._0_4_ = fVar219 * (float)*(undefined8 *)(*pauVar31 + 0xc);
        auVar144._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)(*pauVar31 + 0xc) >> 0x20);
        auVar144._8_4_ = fVar256 * *(float *)(pauVar31[1] + 4);
        auVar144._12_4_ = fVar151 * *(float *)(pauVar31[1] + 4);
        auVar346 = NEON_ext(auVar144,auVar144,8,1);
        auVar288._4_4_ = auVar144._0_4_ + auVar144._4_4_ + auVar346._0_4_;
        auVar288._0_4_ = auVar275._0_4_ + auVar100._0_4_ + auVar100._4_4_;
        auVar288._8_8_ = uVar52;
        auVar357._12_4_ = iStack_294;
        auVar357._0_12_ = auVar27;
        if (2 < (int)local_160) goto LAB_0086a0a0;
        break;
      case 3:
        if (local_160 != 3) {
          lVar40 = 3;
          goto switchD_00869ee8_caseD_0;
        }
        auVar101._0_4_ = fVar219 * (float)*(undefined8 *)*pauVar31;
        auVar101._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
        auVar101._8_4_ = fVar256 * *(float *)(*pauVar31 + 8);
        auVar101._12_4_ = fVar151 * *(float *)(*pauVar31 + 8);
        auVar145._0_4_ = fVar219 * (float)*(undefined8 *)(*pauVar31 + 0xc);
        auVar145._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)(*pauVar31 + 0xc) >> 0x20);
        auVar145._8_4_ = fVar256 * *(float *)(pauVar31[1] + 4);
        auVar145._12_4_ = fVar151 * *(float *)(pauVar31[1] + 4);
        auVar170._0_4_ = fVar219 * (float)*(undefined8 *)(pauVar31[1] + 8);
        auVar170._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)(pauVar31[1] + 8) >> 0x20);
        auVar170._8_4_ = fVar256 * *(float *)pauVar31[2];
        auVar170._12_4_ = fVar151 * *(float *)pauVar31[2];
        auVar275 = NEON_ext(auVar101,auVar101,8,1);
        auVar346 = NEON_ext(auVar145,auVar145,8,1);
        auVar326 = NEON_ext(auVar170,auVar170,8,1);
        fVar219 = auVar275._0_4_ + auVar101._0_4_ + auVar101._4_4_;
        fVar113 = auVar346._0_4_ + auVar145._0_4_ + auVar145._4_4_;
        uVar55 = CONCAT44(fVar113,fVar219);
        fVar256 = auVar326._0_4_ + auVar170._0_4_ + auVar170._4_4_;
        uVar55 = NEON_fmaxp(uVar55,uVar55,4);
        uVar55 = NEON_fmax(CONCAT44(fVar256,fVar256),uVar55,4);
        lVar40 = (long)(char)PTR_DAT_047d1a18
                             [(-(uint)((float)((ulong)uVar55 >> 0x20) <= fVar113) & 2) +
                              (uint)((float)uVar55 <= fVar219) |
                              -(uint)((float)uVar55 <= fVar256) & 4];
        goto LAB_0086a15c;
      }
      auVar275 = NEON_rev64(auVar288,4);
      auVar146._0_4_ = -(uint)(auVar275._0_4_ <= auVar288._0_4_);
      auVar146._4_4_ = -(uint)(auVar275._4_4_ <= auVar288._4_4_);
      auVar146._8_4_ = -(uint)(auVar275._8_4_ <= auVar288._8_4_);
      auVar146._12_4_ = -(uint)(auVar275._12_4_ <= auVar288._12_4_);
      auVar275 = NEON_fmax(auVar288,auVar275,4);
      auVar346 = NEON_rev64(auVar357,4);
      auVar346 = auVar346 ^ (auVar346 ^ auVar357) & auVar146;
      auVar326 = NEON_ext(auVar275,auVar275,8,1);
      auVar386 = NEON_ext(auVar346,auVar346,8,1);
      lVar40 = (long)(int)(auVar386._0_4_ ^
                          (auVar386._0_4_ ^ auVar346._0_4_) &
                          -(uint)(auVar326._0_4_ <= auVar275._0_4_));
LAB_0086a15c:
      uVar35 = 0;
      auVar103._0_4_ = (local_270[0] - auVar56._0_4_) * fVar226;
      auVar103._4_4_ = (local_270[1] - auVar56._4_4_) * fVar106;
      auVar103._8_4_ = ((float)uStack_268 - auVar56._8_4_) * fVar108;
      auVar103._12_4_ = (uStack_268._4_4_ - (float)((uint)uVar379 | 0x3f000000)) * auVar252._12_4_;
      auVar275 = NEON_ext(auVar103,auVar103,8,1);
      if (auVar103._0_4_ + auVar103._4_4_ + auVar275._0_4_ < fVar220) {
        uVar55 = *(undefined8 *)(*pauVar31 + lVar40 * 0xc);
        auVar346 = NEON_ext(auVar427,auVar427,8,1);
        fVar219 = (float)uVar55 - *(float *)param_5[4];
        fVar113 = (float)((ulong)uVar55 >> 0x20) - *(float *)(param_5[4] + 4);
        fVar256 = *(float *)((long)(*pauVar31 + lVar40 * 0xc) + 8) - *(float *)(param_5[4] + 8);
        auVar275 = NEON_ext(auVar110,auVar110,8,1);
        auVar326 = NEON_ext(auVar229,auVar229,8,1);
        auVar104._0_4_ =
             (((auVar275._0_4_ * fVar256 + auVar110._0_4_ * fVar219 + auVar110._4_4_ * fVar113) -
              (float)local_2b0) - local_210[0]) * fVar226;
        auVar104._4_4_ =
             (((auVar346._0_4_ * fVar256 + auVar427._0_4_ * fVar219 + auVar427._4_4_ * fVar113) -
              local_2b0._4_4_) - local_210[1]) * fVar106;
        auVar104._8_4_ =
             (((auVar326._0_4_ * fVar256 + auVar229._0_4_ * fVar219 + fVar221 * fVar113) -
              (float)uStack_2a8) - local_210[2]) * fVar108;
        auVar104._12_4_ =
             (((auVar326._4_4_ * fVar256 + fVar221 * fVar219 + auVar326._4_4_ * fVar113) -
              uStack_2a8._4_4_) - fStack_204) * auVar252._12_4_;
        auVar110 = NEON_ext(auVar104,auVar104,8,1);
        uVar37 = uVar45;
        uVar39 = uVar49;
        if (fVar220 <= auVar104._0_4_ + auVar104._4_4_ + auVar110._0_4_) goto LAB_0086997c;
        fVar109 = (float)uVar374;
        fVar147 = fVar109 + fVar147;
        fVar111 = (float)((ulong)uVar374 >> 0x20);
        uVar51 = CONCAT44(fVar111 + fVar224,fVar147);
        bVar34 = fVar147 < (float)*param_6;
        *(uint *)(param_6 + 6) = (uint)bVar34;
        if (!bVar34) {
          bVar34 = false;
          goto LAB_0086a3b4;
        }
        if (iVar50 - 1U < 2) {
          if (iVar50 == 2) {
            if (uVar49 == 2) {
              uStack_268._0_4_ = fStack_258;
              uStack_268._4_4_ = fStack_254;
              local_270[0] = local_260;
              local_270[1] = fStack_25c;
            }
            else {
              fStack_204 = SUB84(_fStack_1f8,4);
              local_210[0] = local_200;
              local_210[1] = fStack_1fc;
              local_210[2] = fStack_1f8;
            }
          }
          uVar47 = 1;
          uVar39 = 1;
          local_b0 = 1;
          local_ac[0] = 1;
        }
        local_210[2] = local_210[2] - fVar17 * fVar109;
        fStack_204 = fStack_204 - fVar111 * 0.0;
        local_210[0] = local_210[0] - local_2e0 * fVar109;
        local_210[1] = local_210[1] - fStack_2dc * fVar111;
        uVar54 = *(undefined8 *)param_5[6];
        in_register_00005188 = auVar252._8_8_;
        auVar184._0_8_ = auVar252._0_8_;
        uVar49 = uVar39;
        uVar198 = uVar47;
        if ((uVar3 | 1) != 0) goto LAB_0086a3cc;
        goto LAB_0086a47c;
      }
    }
    else {
      fVar226 = fVar320 + fVar245;
      pauVar41 = (undefined1 (*) [16])&local_200;
      if (uVar49 != 1) {
        pauVar41 = (undefined1 (*) [16])&local_260;
      }
      if (fVar226 <= 0.0) goto LAB_00869970;
      fVar226 = fVar226 * fVar226;
      fVar221 = (fVar323 + fVar227) * (fVar323 + fVar227);
      iVar50 = -(uint)(uVar49 == 1);
      auVar10._4_4_ = local_270[1];
      auVar10._0_4_ = local_270[0];
      auVar10._8_4_ = (float)uStack_268;
      auVar254._4_4_ = local_270[1];
      auVar254._0_4_ = local_270[0];
      auVar254._8_4_ = (float)uStack_268;
      auVar9._4_4_ = local_270[1];
      auVar9._0_4_ = local_270[0];
      auVar9._8_4_ = (float)uStack_268;
      auVar265._4_4_ = local_210[1];
      auVar265._0_4_ = local_210[0];
      auVar265._8_4_ = local_210[2];
      auVar8._4_4_ = local_210[1];
      auVar8._0_4_ = local_210[0];
      auVar8._8_4_ = local_210[2];
      auVar7._4_4_ = local_210[1];
      auVar7._0_4_ = local_210[0];
      auVar7._8_4_ = local_210[2];
      auVar19._4_4_ = fStack_32c;
      auVar19._0_4_ = fVar109;
      auVar19._8_4_ = fStack_328;
      auVar19._12_4_ = fStack_324;
      auVar110 = *pauVar41;
      auVar253._0_8_ = CONCAT44(iVar50,iVar50);
      auVar253._8_4_ = iVar50;
      auVar253._12_4_ = iVar50;
      auVar195[1] = (byte)((uint)fVar112 >> 8) & ~(byte)((uint)iVar181 >> 8);
      auVar195[0] = SUB41(fVar112,0) & ~(byte)iVar181;
      auVar195[2] = (byte)((uint)fVar112 >> 0x10) & ~(byte)((uint)iVar181 >> 0x10);
      auVar195[3] = (byte)((uint)fVar112 >> 0x18) & ~(byte)((uint)iVar181 >> 0x18);
      auVar195[4] = SUB41(fVar157,0) & ~(byte)iVar196;
      auVar195[5] = (byte)((uint)fVar157 >> 8) & ~(byte)((uint)iVar196 >> 8);
      auVar195[6] = (byte)((uint)fVar157 >> 0x10) & ~(byte)((uint)iVar196 >> 0x10);
      auVar195[7] = (byte)((uint)fVar157 >> 0x18) & ~(byte)((uint)iVar196 >> 0x18);
      auVar195[8] = SUB41(fVar246,0) & ~(byte)iVar199;
      auVar195[9] = (byte)((uint)fVar246 >> 8) & ~(byte)((uint)iVar199 >> 8);
      auVar195[10] = (byte)((uint)fVar246 >> 0x10) & ~(byte)((uint)iVar199 >> 0x10);
      auVar195[0xb] = (byte)((uint)fVar246 >> 0x18) & ~(byte)((uint)iVar199 >> 0x18);
      auVar195[0xc] = (byte)uVar179 & ~(byte)iVar201;
      auVar195[0xd] = bVar247 & ~(byte)((uint)iVar201 >> 8);
      auVar195[0xe] = bVar248 & ~(byte)((uint)iVar201 >> 0x10);
      auVar195[0xf] = bVar249 & ~(byte)((uint)iVar201 >> 0x18);
      auVar264._8_8_ = auVar253._8_8_;
      auVar264._0_8_ = auVar253._0_8_;
      auVar7._12_4_ = fStack_204;
      auVar9._12_4_ = uStack_268._4_4_;
      auVar254._12_4_ = uStack_268._4_4_;
      auVar254 = auVar254 ^ (auVar9 ^ auVar7) & auVar253;
      auVar195 = auVar195 ^ (auVar195 ^ auVar19) & auVar253;
      fVar213 = auVar195._8_4_;
      fVar106 = auVar110._0_4_ - auVar254._0_4_;
      fVar108 = auVar110._4_4_ - auVar254._4_4_;
      fVar219 = auVar110._8_4_ - auVar254._8_4_;
      auVar8._12_4_ = fStack_204;
      auVar10._12_4_ = uStack_268._4_4_;
      auVar265._12_4_ = fStack_204;
      auVar265 = auVar265 ^ (auVar8 ^ auVar10) & auVar264;
      fVar257 = auVar265._0_4_;
      auVar308._0_4_ = fVar257 - auVar254._0_4_;
      fVar324 = auVar265._4_4_;
      auVar308._4_4_ = fVar324 - auVar254._4_4_;
      fVar361 = auVar265._8_4_;
      auVar308._8_4_ = fVar361 - auVar254._8_4_;
      fVar267 = auVar265._12_4_;
      auVar308._12_4_ = fVar267 - auVar254._12_4_;
      auVar322._0_4_ = fVar257 - auVar110._0_4_;
      auVar322._4_4_ = fVar324 - auVar110._4_4_;
      auVar322._8_4_ = fVar361 - auVar110._8_4_;
      auVar322._12_4_ = fVar267 - auVar110._12_4_;
      fVar270 = fVar219 * fVar219 + fVar106 * fVar106 + fVar108 * fVar108;
      fVar413 = fVar219 * fVar219 + fVar106 * fVar106 + fVar108 * fVar108;
      fVar255 = fVar106 / fVar270;
      fVar377 = fVar108 / fVar413;
      fVar418 = fVar219 / fVar270;
      fVar415 = (auVar110._12_4_ - auVar254._12_4_) / fVar413;
      fVar419 = auVar308._8_4_ * fVar219 + auVar308._0_4_ * fVar106 + auVar308._4_4_ * fVar108;
      fVar426 = auVar308._8_4_ * fVar219 + auVar308._0_4_ * fVar106 + auVar308._4_4_ * fVar108;
      fVar432 = auVar195._0_4_;
      fVar225 = auVar195._4_4_;
      iVar50 = -(uint)(fVar270 == 0.0);
      iVar171 = -(uint)(fVar413 == 0.0);
      iVar173 = -(uint)(fVar270 == 0.0);
      iVar175 = -(uint)(fVar413 == 0.0);
      fVar269 = fVar213 * fVar219 + fVar432 * fVar106 + fVar225 * fVar108;
      fVar395 = fVar213 * fVar219 + fVar432 * fVar106 + fVar225 * fVar108;
      fVar106 = (float)CONCAT13((byte)((uint)fVar255 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT12((byte)((uint)fVar255 >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT11((byte)((uint)fVar255 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  SUB41(fVar255,0) & ~(byte)iVar50)));
      auVar118._0_8_ =
           CONCAT17((byte)((uint)fVar377 >> 0x18) & ~(byte)((uint)iVar171 >> 0x18),
                    CONCAT16((byte)((uint)fVar377 >> 0x10) & ~(byte)((uint)iVar171 >> 0x10),
                             CONCAT15((byte)((uint)fVar377 >> 8) & ~(byte)((uint)iVar171 >> 8),
                                      CONCAT14(SUB41(fVar377,0) & ~(byte)iVar171,fVar106))));
      auVar118[8] = SUB41(fVar418,0) & ~(byte)iVar173;
      auVar118[9] = (byte)((uint)fVar418 >> 8) & ~(byte)((uint)iVar173 >> 8);
      auVar118[10] = (byte)((uint)fVar418 >> 0x10) & ~(byte)((uint)iVar173 >> 0x10);
      auVar118[0xb] = (byte)((uint)fVar418 >> 0x18) & ~(byte)((uint)iVar173 >> 0x18);
      auVar140[0xc] = SUB41(fVar415,0) & ~(byte)iVar175;
      auVar140._0_12_ = auVar118;
      auVar140[0xd] = (byte)((uint)fVar415 >> 8) & ~(byte)((uint)iVar175 >> 8);
      auVar140[0xe] = (byte)((uint)fVar415 >> 0x10) & ~(byte)((uint)iVar175 >> 0x10);
      auVar140[0xf] = (byte)((uint)fVar415 >> 0x18) & ~(byte)((uint)iVar175 >> 0x18);
      fVar108 = (float)((ulong)auVar118._0_8_ >> 0x20);
      auVar319._0_4_ = auVar308._0_4_ - fVar419 * fVar106;
      auVar319._4_4_ = auVar308._4_4_ - fVar426 * fVar108;
      auVar319._8_4_ = auVar308._8_4_ - fVar419 * auVar118._8_4_;
      auVar319._12_4_ = auVar308._12_4_ - fVar426 * auVar140._12_4_;
      auVar427 = NEON_ext(auVar308,auVar308,8,1);
      auVar209._0_4_ = fVar432 - fVar269 * fVar106;
      auVar209._4_4_ = fVar225 - fVar395 * fVar108;
      auVar209._8_4_ = fVar213 - fVar269 * auVar118._8_4_;
      auVar209._12_4_ = auVar195._12_4_ - fVar395 * auVar140._12_4_;
      auVar229 = NEON_ext(auVar322,auVar322,8,1);
      fVar399 = fVar213 * fVar213 + fVar432 * fVar432 + fVar225 * fVar225;
      fVar414 = fVar213 * fVar213 + fVar432 * fVar432 + fVar225 * fVar225;
      fVar416 = auVar209._8_4_ * auVar209._8_4_ +
                auVar209._0_4_ * auVar209._0_4_ + auVar209._4_4_ * auVar209._4_4_;
      fVar417 = auVar209._8_4_ * auVar209._8_4_ +
                auVar209._0_4_ * auVar209._0_4_ + auVar209._4_4_ * auVar209._4_4_;
      iVar50 = -(uint)(fVar399 <= 0.0);
      iVar171 = -(uint)(fVar414 <= 0.0);
      iVar173 = -(uint)(fVar416 <= 0.0);
      iVar175 = -(uint)(fVar417 <= 0.0);
      fVar106 = fVar111 / SQRT(fVar399);
      fVar108 = fVar113 / SQRT(fVar414);
      fVar256 = fVar256 / SQRT(fVar416);
      fVar151 = fVar151 / SQRT(fVar417);
      fVar182 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT11((byte)((uint)fVar106 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  SUB41(fVar106,0) & ~(byte)iVar50)));
      auVar296._0_8_ =
           CONCAT17((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar171 >> 0x18),
                    CONCAT16((byte)((uint)fVar108 >> 0x10) & ~(byte)((uint)iVar171 >> 0x10),
                             CONCAT15((byte)((uint)fVar108 >> 8) & ~(byte)((uint)iVar171 >> 8),
                                      CONCAT14(SUB41(fVar108,0) & ~(byte)iVar171,fVar182))));
      auVar296[8] = SUB41(fVar256,0) & ~(byte)iVar173;
      auVar296[9] = (byte)((uint)fVar256 >> 8) & ~(byte)((uint)iVar173 >> 8);
      auVar296[10] = (byte)((uint)fVar256 >> 0x10) & ~(byte)((uint)iVar173 >> 0x10);
      auVar296[0xb] = (byte)((uint)fVar256 >> 0x18) & ~(byte)((uint)iVar173 >> 0x18);
      auVar309[0xc] = SUB41(fVar151,0) & ~(byte)iVar175;
      auVar309._0_12_ = auVar296;
      auVar309[0xd] = (byte)((uint)fVar151 >> 8) & ~(byte)((uint)iVar175 >> 8);
      auVar309[0xe] = (byte)((uint)fVar151 >> 0x10) & ~(byte)((uint)iVar175 >> 0x10);
      auVar309[0xf] = (byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar175 >> 0x18);
      fVar197 = (float)((ulong)auVar296._0_8_ >> 0x20);
      fVar366 = auVar296._8_4_;
      fVar200 = auVar309._12_4_;
      fVar378 = (auVar427._0_4_ * fVar213 + auVar308._0_4_ * fVar432 + auVar308._4_4_ * fVar225) *
                fVar182 * fVar182;
      fVar396 = (auVar229._0_4_ * fVar213 + auVar322._0_4_ * fVar432 + auVar322._4_4_ * fVar225) *
                fVar197 * fVar197;
      fVar397 = (auVar319._8_4_ * auVar209._8_4_ +
                auVar319._0_4_ * auVar209._0_4_ + auVar319._4_4_ * auVar209._4_4_) *
                fVar366 * fVar366;
      fVar398 = (auVar319._8_4_ * auVar209._8_4_ +
                auVar319._0_4_ * auVar209._0_4_ + auVar319._4_4_ * auVar209._4_4_) *
                fVar200 * fVar200;
      fVar106 = auVar308._0_4_ - fVar432 * fVar378;
      fVar108 = auVar322._0_4_ - fVar432 * fVar396;
      fVar219 = auVar319._0_4_ - auVar209._0_4_ * fVar397;
      fVar256 = auVar319._0_4_ - auVar209._0_4_ * fVar398;
      fVar151 = auVar308._4_4_ - fVar225 * fVar378;
      fVar255 = auVar322._4_4_ - fVar225 * fVar396;
      fVar377 = auVar319._4_4_ - auVar209._4_4_ * fVar397;
      fVar418 = auVar319._4_4_ - auVar209._4_4_ * fVar398;
      fVar415 = auVar427._0_4_ - fVar213 * fVar378;
      fVar432 = auVar229._0_4_ - fVar213 * fVar396;
      fVar225 = auVar319._8_4_ - auVar209._8_4_ * fVar397;
      fVar213 = auVar319._8_4_ - auVar209._8_4_ * fVar398;
      fVar106 = fVar415 * fVar415 + fVar106 * fVar106 + fVar151 * fVar151;
      fVar108 = fVar432 * fVar432 + fVar108 * fVar108 + fVar255 * fVar255;
      fVar219 = fVar225 * fVar225 + fVar219 * fVar219 + fVar377 * fVar377;
      fVar256 = fVar213 * fVar213 + fVar256 * fVar256 + fVar418 * fVar418;
      iVar50 = -(uint)(fVar106 < fVar226);
      iVar171 = -(uint)(fVar108 < fVar221);
      iVar173 = -(uint)(fVar219 < fVar226);
      iVar175 = -(uint)(fVar256 < fVar221);
      uVar35 = 0;
      if (((iVar50 != 0 || iVar171 != 0) || iVar173 != 0) || iVar175 != 0) {
        fVar106 = fVar226 - fVar106;
        fVar108 = fVar221 - fVar108;
        fVar226 = fVar226 - fVar219;
        fVar221 = fVar221 - fVar256;
        iVar114 = -(uint)(0.0 <= fVar419);
        iVar148 = -(uint)(0.0 <= fVar426);
        iVar152 = -(uint)(0.0 <= fVar419);
        iVar156 = -(uint)(0.0 <= fVar426);
        iVar158 = -(uint)(fVar419 <= fVar270);
        iVar172 = -(uint)(fVar426 <= fVar413);
        iVar174 = -(uint)(fVar419 <= fVar270);
        iVar176 = -(uint)(fVar426 <= fVar413);
        bVar105 = (byte)iVar50;
        bVar149 = (byte)((uint)iVar50 >> 8);
        bVar358 = (byte)((uint)iVar50 >> 0x10);
        bVar359 = (byte)((uint)iVar50 >> 0x18);
        fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar359,
                                  CONCAT12((byte)((uint)fVar106 >> 0x10) & bVar358,
                                           CONCAT11((byte)((uint)fVar106 >> 8) & bVar149,
                                                    SUB41(fVar106,0) & bVar105)));
        bVar360 = (byte)iVar171;
        bVar362 = (byte)((uint)iVar171 >> 8);
        bVar363 = (byte)((uint)iVar171 >> 0x10);
        bVar364 = (byte)((uint)iVar171 >> 0x18);
        auVar60._0_8_ =
             CONCAT17((byte)((uint)fVar108 >> 0x18) & bVar364,
                      CONCAT16((byte)((uint)fVar108 >> 0x10) & bVar363,
                               CONCAT15((byte)((uint)fVar108 >> 8) & bVar362,
                                        CONCAT14(SUB41(fVar108,0) & bVar360,fVar106))));
        bVar365 = (byte)iVar173;
        auVar60[8] = SUB41(fVar226,0) & bVar365;
        bVar367 = (byte)((uint)iVar173 >> 8);
        auVar60[9] = (byte)((uint)fVar226 >> 8) & bVar367;
        bVar368 = (byte)((uint)iVar173 >> 0x10);
        auVar60[10] = (byte)((uint)fVar226 >> 0x10) & bVar368;
        bVar369 = (byte)((uint)iVar173 >> 0x18);
        auVar60[0xb] = (byte)((uint)fVar226 >> 0x18) & bVar369;
        bVar370 = (byte)iVar175;
        auVar93[0xc] = SUB41(fVar221,0) & bVar370;
        auVar93._0_12_ = auVar60;
        bVar371 = (byte)((uint)iVar175 >> 8);
        auVar93[0xd] = (byte)((uint)fVar221 >> 8) & bVar371;
        bVar372 = (byte)((uint)iVar175 >> 0x10);
        auVar93[0xe] = (byte)((uint)fVar221 >> 0x10) & bVar372;
        bVar373 = (byte)((uint)iVar175 >> 0x18);
        auVar93[0xf] = (byte)((uint)fVar221 >> 0x18) & bVar373;
        fVar106 = SQRT(fVar106);
        fVar108 = SQRT((float)((ulong)auVar60._0_8_ >> 0x20));
        fVar219 = SQRT(auVar60._8_4_);
        fVar256 = SQRT(auVar93._12_4_);
        fVar226 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & bVar359,
                                  CONCAT12((byte)((uint)fVar106 >> 0x10) & bVar358,
                                           CONCAT11((byte)((uint)fVar106 >> 8) & bVar149,
                                                    SUB41(fVar106,0) & bVar105)));
        auVar61._0_8_ =
             CONCAT17((byte)((uint)fVar108 >> 0x18) & bVar364,
                      CONCAT16((byte)((uint)fVar108 >> 0x10) & bVar363,
                               CONCAT15((byte)((uint)fVar108 >> 8) & bVar362,
                                        CONCAT14(SUB41(fVar108,0) & bVar360,fVar226))));
        auVar61[8] = SUB41(fVar219,0) & bVar365;
        auVar61[9] = (byte)((uint)fVar219 >> 8) & bVar367;
        auVar61[10] = (byte)((uint)fVar219 >> 0x10) & bVar368;
        auVar61[0xb] = (byte)((uint)fVar219 >> 0x18) & bVar369;
        auVar94[0xc] = SUB41(fVar256,0) & bVar370;
        auVar94._0_12_ = auVar61;
        auVar94[0xd] = (byte)((uint)fVar256 >> 8) & bVar371;
        auVar94[0xe] = (byte)((uint)fVar256 >> 0x10) & bVar372;
        auVar94[0xf] = (byte)((uint)fVar256 >> 0x18) & bVar373;
        fVar182 = fVar182 * fVar226;
        fVar197 = fVar197 * (float)((ulong)auVar61._0_8_ >> 0x20);
        fVar366 = fVar366 * auVar61._8_4_;
        fVar200 = fVar200 * auVar94._12_4_;
        iVar50 = -(uint)(ABS(fVar378) <= fVar182);
        iVar171 = -(uint)(ABS(fVar396) <= fVar197);
        iVar173 = -(uint)(ABS(fVar397) <= fVar366);
        iVar175 = -(uint)(ABS(fVar398) <= fVar200);
        iVar50 = CONCAT13((PTR_DAT_047d1ae8[0x33] |
                          (byte)((uint)iVar158 >> 0x18) & (byte)((uint)iVar114 >> 0x18)) &
                          (byte)((uint)iVar50 >> 0x18) & bVar359,
                          CONCAT12((PTR_DAT_047d1ae8[0x32] |
                                   (byte)((uint)iVar158 >> 0x10) & (byte)((uint)iVar114 >> 0x10)) &
                                   (byte)((uint)iVar50 >> 0x10) & bVar358,
                                   CONCAT11((PTR_DAT_047d1ae8[0x31] |
                                            (byte)((uint)iVar158 >> 8) & (byte)((uint)iVar114 >> 8))
                                            & (byte)((uint)iVar50 >> 8) & bVar149,
                                            (PTR_DAT_047d1ae8[0x30] | (byte)iVar158 & (byte)iVar114)
                                            & (byte)iVar50 & bVar105)));
        auVar62._0_8_ =
             CONCAT17((PTR_DAT_047d1ae8[0x37] |
                      (byte)((uint)iVar172 >> 0x18) & (byte)((uint)iVar148 >> 0x18)) &
                      (byte)((uint)iVar171 >> 0x18) & bVar364,
                      CONCAT16((PTR_DAT_047d1ae8[0x36] |
                               (byte)((uint)iVar172 >> 0x10) & (byte)((uint)iVar148 >> 0x10)) &
                               (byte)((uint)iVar171 >> 0x10) & bVar363,
                               CONCAT15((PTR_DAT_047d1ae8[0x35] |
                                        (byte)((uint)iVar172 >> 8) & (byte)((uint)iVar148 >> 8)) &
                                        (byte)((uint)iVar171 >> 8) & bVar362,
                                        CONCAT14((PTR_DAT_047d1ae8[0x34] |
                                                 (byte)iVar172 & (byte)iVar148) &
                                                 (byte)iVar171 & bVar360,iVar50))));
        auVar62[8] = (PTR_DAT_047d1ae8[0x38] | (byte)iVar174 & (byte)iVar152) &
                     (byte)iVar173 & bVar365;
        auVar62[9] = (PTR_DAT_047d1ae8[0x39] |
                     (byte)((uint)iVar174 >> 8) & (byte)((uint)iVar152 >> 8)) &
                     (byte)((uint)iVar173 >> 8) & bVar367;
        auVar62[10] = (PTR_DAT_047d1ae8[0x3a] |
                      (byte)((uint)iVar174 >> 0x10) & (byte)((uint)iVar152 >> 0x10)) &
                      (byte)((uint)iVar173 >> 0x10) & bVar368;
        auVar62[0xb] = (PTR_DAT_047d1ae8[0x3b] |
                       (byte)((uint)iVar174 >> 0x18) & (byte)((uint)iVar152 >> 0x18)) &
                       (byte)((uint)iVar173 >> 0x18) & bVar369;
        auVar95[0xc] = (PTR_DAT_047d1ae8[0x3c] | (byte)iVar176 & (byte)iVar156) &
                       (byte)iVar175 & bVar370;
        auVar95._0_12_ = auVar62;
        auVar95[0xd] = (PTR_DAT_047d1ae8[0x3d] |
                       (byte)((uint)iVar176 >> 8) & (byte)((uint)iVar156 >> 8)) &
                       (byte)((uint)iVar175 >> 8) & bVar371;
        auVar95[0xe] = (PTR_DAT_047d1ae8[0x3e] |
                       (byte)((uint)iVar176 >> 0x10) & (byte)((uint)iVar156 >> 0x10)) &
                       (byte)((uint)iVar175 >> 0x10) & bVar372;
        auVar95[0xf] = (PTR_DAT_047d1ae8[0x3f] |
                       (byte)((uint)iVar176 >> 0x18) & (byte)((uint)iVar156 >> 0x18)) &
                       (byte)((uint)iVar175 >> 0x18) & bVar373;
        if (((iVar50 != 0 || (int)((ulong)auVar62._0_8_ >> 0x20) != 0) || auVar62._8_4_ != 0) ||
            auVar95._12_4_ != 0) goto LAB_00869970;
        auVar394._0_4_ = (0.0 - fVar378) - fVar182;
        auVar394._4_4_ = (0.0 - fVar396) - fVar197;
        auVar394._8_4_ = (0.0 - fVar397) - fVar366;
        auVar394._12_4_ = (0.0 - fVar398) - fVar200;
        iVar50 = -(uint)(0.0 < fVar399);
        iVar171 = -(uint)(0.0 < fVar414);
        iVar173 = -(uint)(0.0 < fVar416);
        iVar175 = -(uint)(0.0 < fVar417);
        iVar158 = -(uint)(0.0 - fVar419 <= fVar269 * auVar394._0_4_);
        iVar172 = -(uint)(0.0 - fVar426 <= fVar395 * auVar394._4_4_);
        iVar174 = -(uint)(0.0 - fVar419 <= fVar269 * auVar394._8_4_);
        iVar177 = -(uint)(0.0 - fVar426 <= fVar395 * auVar394._12_4_);
        iVar114 = -(uint)(fVar269 * auVar394._0_4_ <= fVar270 - fVar419);
        iVar148 = -(uint)(fVar395 * auVar394._4_4_ <= fVar413 - fVar426);
        iVar152 = -(uint)(fVar269 * auVar394._8_4_ <= fVar270 - fVar419);
        iVar156 = -(uint)(fVar395 * auVar394._12_4_ <= fVar413 - fVar426);
        bVar150 = (byte)iVar152 & (byte)iVar174;
        bVar153 = (byte)((uint)iVar152 >> 8) & (byte)((uint)iVar174 >> 8);
        bVar154 = (byte)((uint)iVar152 >> 0x10) & (byte)((uint)iVar174 >> 0x10);
        bVar155 = (byte)((uint)iVar152 >> 0x18) & (byte)((uint)iVar174 >> 0x18);
        iVar152 = -(uint)(0.0 <= auVar394._0_4_);
        iVar174 = -(uint)(0.0 <= auVar394._4_4_);
        iVar176 = -(uint)(0.0 <= auVar394._8_4_);
        iVar178 = -(uint)(0.0 <= auVar394._12_4_);
        iVar271 = -(uint)(auVar394._0_4_ <= auVar274._0_4_);
        iVar290 = -(uint)(auVar394._4_4_ <= auVar274._4_4_);
        iVar292 = -(uint)(auVar394._8_4_ <= auVar274._8_4_);
        iVar294 = -(uint)(auVar394._12_4_ <= auVar274._12_4_);
        iVar50 = CONCAT13((bVar155 & (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar158 >> 0x18) ^
                          PTR_DAT_047d1ae8[0x33]) & bVar359 &
                          (byte)((uint)iVar152 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                          (byte)((uint)iVar271 >> 0x18),
                          CONCAT12((bVar154 & (byte)((uint)iVar114 >> 0x10) &
                                              (byte)((uint)iVar158 >> 0x10) ^ PTR_DAT_047d1ae8[0x32]
                                   ) & bVar358 &
                                   (byte)((uint)iVar152 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                                   (byte)((uint)iVar271 >> 0x10),
                                   CONCAT11((bVar153 & (byte)((uint)iVar114 >> 8) &
                                                       (byte)((uint)iVar158 >> 8) ^
                                            PTR_DAT_047d1ae8[0x31]) & bVar149 &
                                            (byte)((uint)iVar152 >> 8) & (byte)((uint)iVar50 >> 8) &
                                            (byte)((uint)iVar271 >> 8),
                                            (bVar150 & (byte)iVar114 & (byte)iVar158 ^
                                            PTR_DAT_047d1ae8[0x30]) & bVar105 &
                                            (byte)iVar152 & (byte)iVar50 & (byte)iVar271)));
        auVar273._0_8_ =
             CONCAT17((bVar155 & (byte)((uint)iVar148 >> 0x18) & (byte)((uint)iVar172 >> 0x18) ^
                      PTR_DAT_047d1ae8[0x37]) & bVar364 &
                      (byte)((uint)iVar174 >> 0x18) & (byte)((uint)iVar171 >> 0x18) &
                      (byte)((uint)iVar290 >> 0x18),
                      CONCAT16((bVar154 & (byte)((uint)iVar148 >> 0x10) &
                                          (byte)((uint)iVar172 >> 0x10) ^ PTR_DAT_047d1ae8[0x36]) &
                               bVar363 & (byte)((uint)iVar174 >> 0x10) &
                                         (byte)((uint)iVar171 >> 0x10) &
                                         (byte)((uint)iVar290 >> 0x10),
                               CONCAT15((bVar153 & (byte)((uint)iVar148 >> 8) &
                                                   (byte)((uint)iVar172 >> 8) ^
                                        PTR_DAT_047d1ae8[0x35]) & bVar362 &
                                        (byte)((uint)iVar174 >> 8) & (byte)((uint)iVar171 >> 8) &
                                        (byte)((uint)iVar290 >> 8),
                                        CONCAT14((bVar150 & (byte)iVar148 & (byte)iVar172 ^
                                                 PTR_DAT_047d1ae8[0x34]) & bVar360 &
                                                 (byte)iVar174 & (byte)iVar171 & (byte)iVar290,
                                                 iVar50))));
        auVar273[8] = (bVar150 ^ PTR_DAT_047d1ae8[0x38]) & bVar365 &
                      (byte)iVar176 & (byte)iVar173 & (byte)iVar292;
        auVar273[9] = (bVar153 ^ PTR_DAT_047d1ae8[0x39]) & bVar367 &
                      (byte)((uint)iVar176 >> 8) & (byte)((uint)iVar173 >> 8) &
                      (byte)((uint)iVar292 >> 8);
        auVar273[10] = (bVar154 ^ PTR_DAT_047d1ae8[0x3a]) & bVar368 &
                       (byte)((uint)iVar176 >> 0x10) & (byte)((uint)iVar173 >> 0x10) &
                       (byte)((uint)iVar292 >> 0x10);
        auVar273[0xb] =
             (bVar155 ^ PTR_DAT_047d1ae8[0x3b]) & bVar369 &
             (byte)((uint)iVar176 >> 0x18) & (byte)((uint)iVar173 >> 0x18) &
             (byte)((uint)iVar292 >> 0x18);
        auVar285[0xc] =
             (bVar150 & (byte)iVar156 & (byte)iVar177 ^ PTR_DAT_047d1ae8[0x3c]) & bVar370 &
             (byte)iVar178 & (byte)iVar175 & (byte)iVar294;
        auVar285._0_12_ = auVar273;
        auVar285[0xd] =
             (bVar153 & (byte)((uint)iVar156 >> 8) & (byte)((uint)iVar177 >> 8) ^
             PTR_DAT_047d1ae8[0x3d]) & bVar371 &
             (byte)((uint)iVar178 >> 8) & (byte)((uint)iVar175 >> 8) & (byte)((uint)iVar294 >> 8);
        auVar285[0xe] =
             (bVar154 & (byte)((uint)iVar156 >> 0x10) & (byte)((uint)iVar177 >> 0x10) ^
             PTR_DAT_047d1ae8[0x3e]) & bVar372 &
             (byte)((uint)iVar178 >> 0x10) & (byte)((uint)iVar175 >> 0x10) &
             (byte)((uint)iVar294 >> 0x10);
        auVar285[0xf] =
             (bVar155 & (byte)((uint)iVar156 >> 0x18) & (byte)((uint)iVar177 >> 0x18) ^
             PTR_DAT_047d1ae8[0x3f]) & bVar373 &
             (byte)((uint)iVar178 >> 0x18) & (byte)((uint)iVar175 >> 0x18) &
             (byte)((uint)iVar294 >> 0x18);
        uVar35 = 0;
        if (((iVar50 != 0 || (int)((ulong)auVar273._0_8_ >> 0x20) != 0) || auVar273._8_4_ != 0) ||
            auVar285._12_4_ != 0) {
          auVar427 = auVar274 ^ (auVar274 ^ auVar394) & auVar285;
          uVar55 = NEON_fminp(auVar427._0_8_,auVar427._0_8_,4);
          fVar226 = auVar427._8_4_;
          uVar374 = NEON_fmin(CONCAT44(fVar226,fVar226),uVar55,4);
          fVar108 = (float)uVar374;
          iVar50 = -(uint)(fVar108 == auVar427._0_4_);
          fVar219 = (float)((ulong)uVar374 >> 0x20);
          iVar171 = -(uint)(fVar219 == auVar427._4_4_);
          iVar173 = -(uint)(fVar108 == fVar226);
          iVar175 = -(uint)(fVar219 == auVar427._12_4_);
          iVar50 = CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x18),
                            CONCAT12((byte)((uint)iVar50 >> 0x10) &
                                     (byte)((ulong)_DAT_03cab270 >> 0x10),
                                     CONCAT11((byte)((uint)iVar50 >> 8) &
                                              (byte)((ulong)_DAT_03cab270 >> 8),
                                              (byte)iVar50 & (byte)_DAT_03cab270)));
          auVar159._0_8_ =
               CONCAT17((byte)((uint)iVar171 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                        CONCAT16((byte)((uint)iVar171 >> 0x10) &
                                 (byte)((ulong)_DAT_03cab270 >> 0x30),
                                 CONCAT15((byte)((uint)iVar171 >> 8) &
                                          (byte)((ulong)_DAT_03cab270 >> 0x28),
                                          CONCAT14((byte)iVar171 &
                                                   (byte)((ulong)_DAT_03cab270 >> 0x20),iVar50))));
          auVar159[8] = (byte)iVar173 & (byte)_UNK_03cab278;
          auVar159[9] = (byte)((uint)iVar173 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
          auVar159[10] = (byte)((uint)iVar173 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
          auVar159[0xb] = (byte)((uint)iVar173 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
          auVar167[0xc] = (byte)iVar175 & (byte)((ulong)_UNK_03cab278 >> 0x20);
          auVar167._0_12_ = auVar159;
          auVar167[0xd] = (byte)((uint)iVar175 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
          auVar167[0xe] = (byte)((uint)iVar175 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
          auVar167[0xf] = (byte)((uint)iVar175 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
          cVar4 = PTR_DAT_047d19d8
                  [(uint)(iVar50 + (int)((ulong)auVar159._0_8_ >> 0x20) +
                         auVar159._8_4_ + auVar167._12_4_)];
          auVar96[0] = -(cVar4 == '\0');
          auVar96[1] = auVar96[0];
          auVar96[2] = auVar96[0];
          auVar96[3] = auVar96[0];
          auVar96[4] = auVar96[0];
          auVar96[5] = auVar96[0];
          auVar96[6] = auVar96[0];
          auVar96[7] = auVar96[0];
          auVar96[8] = auVar96[0];
          auVar96[9] = auVar96[0];
          auVar96[10] = auVar96[0];
          auVar96[0xb] = auVar96[0];
          auVar96[0xc] = auVar96[0];
          auVar96[0xd] = auVar96[0];
          auVar96[0xe] = auVar96[0];
          auVar96[0xf] = auVar96[0];
          cVar295 = -(cVar4 == '\x02');
          auVar110 = auVar110 ^ (auVar110 ^ auVar254) & auVar96;
          auVar168._0_8_ =
               CONCAT17(cVar295,CONCAT16(cVar295,CONCAT15(cVar295,CONCAT14(cVar295,CONCAT13(cVar295,
                                                  CONCAT12(cVar295,CONCAT11(cVar295,cVar295)))))));
          auVar168[8] = cVar295;
          auVar168[9] = cVar295;
          auVar168[10] = cVar295;
          auVar168[0xb] = cVar295;
          auVar168[0xc] = cVar295;
          auVar168[0xd] = cVar295;
          auVar168[0xe] = cVar295;
          auVar168[0xf] = cVar295;
          auVar243._0_4_ = fVar257 - auVar110._0_4_;
          auVar243._4_4_ = fVar324 - auVar110._4_4_;
          auVar243._8_4_ = fVar361 - auVar110._8_4_;
          auVar243._12_4_ = fVar267 - auVar110._12_4_;
          auVar242._8_8_ = auVar168._8_8_;
          auVar242._0_8_ = auVar168._0_8_;
          auVar195 = auVar195 ^ (auVar195 ^ auVar209) & auVar168;
          auVar243 = auVar243 ^ (auVar243 ^ auVar319) & auVar242;
          uVar379 = NEON_fmov(0xbf800000,4);
          fVar226 = fVar108 * auVar195._0_4_ + auVar243._0_4_;
          fVar106 = fVar219 * auVar195._4_4_ + auVar243._4_4_;
          fVar108 = fVar108 * auVar195._8_4_ + auVar243._8_4_;
          uVar37 = NEON_fmov(0x3f800000,4);
          uVar379 = uVar379 ^ (uVar379 ^ uVar37) &
                              CONCAT44(-(uint)(uVar49 == 1),-(uint)(uVar49 == 1));
          fVar256 = fVar226 * fVar226 + fVar106 * fVar106 + fVar108 * fVar108;
          uVar55 = uVar115;
          if (fVar256 != 0.0) {
            uVar55 = CONCAT44(fVar113 / SQRT(fVar226 * fVar226 + fVar106 * fVar106 +
                                             fVar108 * fVar108),fVar111 / SQRT(fVar256));
          }
          iVar50 = cVar4 + 1;
          fVar226 = fVar226 * (float)uVar55;
          fVar113 = (float)((ulong)uVar55 >> 0x20);
          fVar106 = fVar106 * fVar113;
          fVar108 = fVar108 * (float)uVar55;
          fVar113 = (fVar219 * auVar195._12_4_ + auVar243._12_4_) * fVar113;
          bVar105 = (byte)(-(uint)((float)uVar379 < 0.0) >> 0x18);
          bVar149 = (byte)(-(uint)((float)(uVar379 >> 0x20) < 0.0) >> 0x18);
          uVar37 = CONCAT17(bVar149,(uint7)(bVar105 & 0x80) << 0x18) & 0x80ffffffffffffff;
          fVar226 = (float)CONCAT13((byte)(uVar37 >> 0x18) ^ (byte)((uint)fVar226 >> 0x18),
                                    SUB43(fVar226,0));
          auVar250._0_8_ =
               CONCAT17((byte)(uVar37 >> 0x38) ^ (byte)((uint)fVar106 >> 0x18),
                        CONCAT16((char)((uint)fVar106 >> 0x10),
                                 CONCAT15((char)((uint)fVar106 >> 8),
                                          CONCAT14(SUB41(fVar106,0),fVar226))));
          auVar250[8] = SUB41(fVar108,0);
          auVar250[9] = (char)((uint)fVar108 >> 8);
          auVar250[10] = (char)((uint)fVar108 >> 0x10);
          auVar250[0xb] = bVar105 & 0x80 ^ (byte)((uint)fVar108 >> 0x18);
          auVar252[0xc] = SUB41(fVar113,0);
          auVar252._0_12_ = auVar250;
          auVar252[0xd] = (char)((uint)fVar113 >> 8);
          auVar252[0xe] = (char)((uint)fVar113 >> 0x10);
          auVar252[0xf] = bVar149 & 0x80 ^ (byte)((uint)fVar113 >> 0x18);
          fVar226 = -fVar226;
          fVar108 = -(float)((ulong)auVar250._0_8_ >> 0x20);
          fVar106 = -auVar250._8_4_;
          fVar219 = -auVar252._12_4_;
          lVar40 = 4;
          switch(local_150 & 3) {
          case 1:
            goto switchD_0086975c_caseD_1;
          case 2:
            goto switchD_0086975c_caseD_2;
          case 3:
            goto switchD_0086975c_caseD_3;
          }
          goto switchD_0086975c_caseD_0;
        }
      }
    }
LAB_00869974:
    uVar37 = uVar45;
    uVar39 = uVar49;
LAB_0086997c:
    uVar47 = (uint)uVar37;
    if (fVar320 < fVar424 - fVar245) {
      fVar220 = fVar17 * fVar218 + local_2e0 * fVar216 + fStack_2dc * fVar217;
      if (fVar220 < 0.0) {
        fVar220 = -((fVar424 - fVar245) - fVar320) / fVar220;
        fVar245 = -((fVar266 - fVar227) - fVar323) /
                  (fVar17 * fVar218 + local_2e0 * fVar216 + fStack_2dc * fVar217);
        fVar147 = fVar220 + fVar147;
        fVar224 = fVar245 + fVar224;
        uVar55 = CONCAT44(fVar224,fVar147);
        if (fVar147 < (float)*param_6) {
          fVar216 = local_2e0 * fVar220;
          fVar217 = fStack_2dc * fVar245;
          fVar220 = fVar17 * fVar220;
          fVar245 = fVar245 * 0.0;
          param_7 = (undefined8 *)0x0;
          iVar268 = iVar268 + 1;
          local_200 = local_200 - fVar216;
          fStack_1fc = fStack_1fc - fVar217;
          auVar166._8_4_ = fStack_1f8 - fVar220;
          auVar166._0_8_ = _local_200;
          auVar166._12_4_ = fStack_1f4 - fVar245;
          local_210[2] = local_210[2] - fVar220;
          fStack_204 = fStack_204 - fVar245;
          local_210[0] = local_210[0] - fVar216;
          local_210[1] = local_210[1] - fVar217;
          _fStack_1f8 = auVar166._8_8_;
          fStack_1e8 = fStack_1e8 - fVar220;
          fStack_1e4 = fStack_1e4 - fVar245;
          local_1f0 = local_1f0 - fVar216;
          fStack_1ec = fStack_1ec - fVar217;
          fStack_1d8 = fStack_1d8 - fVar220;
          fStack_1d4 = fStack_1d4 - fVar245;
          fStack_1e0 = fStack_1e0 - fVar216;
          fStack_1dc = fStack_1dc - fVar217;
          local_b8 = 0x3727c5ac3727c5ac;
          uStack_2a8 = CONCAT44(fVar224 * 0.0,fVar17 * fVar147);
          local_2b0 = CONCAT44(fStack_2dc * fVar224,local_2e0 * fVar147);
          local_308 = uVar55;
          if ((uVar3 != 0 && ((int)uVar198 < (int)uVar47 || (int)uVar49 < (int)uVar39)) ||
             (iVar268 < *(int *)(param_5[6] + 8))) goto LAB_00869a7c;
          iVar268 = 1;
          *(undefined4 *)(param_6 + 6) = 1;
LAB_0086a468:
          uVar51 = local_308;
          if (iVar268 == 0 && uVar3 == 0) {
LAB_0086a47c:
            if ((int)uVar198 < (int)uVar47) {
              lVar40 = (long)(int)uVar47;
              fVar109 = (float)((ulong)uVar54 >> 0x20);
              local_270[0] = (float)uVar54 * (float)auVar184._0_8_ + afStack_220[lVar40 * 4];
              local_270[1] = fVar109 * (float)((ulong)auVar184._0_8_ >> 0x20) +
                             afStack_220[lVar40 * 4 + 1];
              uStack_268._0_4_ =
                   (float)uVar54 * (float)in_register_00005188 + afStack_220[lVar40 * 4 + 2];
              fStack_174 = fVar109 * (float)(in_register_00005188 >> 0x20) +
                           afStack_220[lVar40 * 4 + 3];
            }
            else {
              lVar40 = (long)(int)uVar39;
              local_270[0] = local_270[lVar40 * 4 + -4];
              local_270[1] = local_270[lVar40 * 4 + -3];
              uStack_268._0_4_ = local_270[lVar40 * 4 + -2];
              fStack_174 = local_270[lVar40 * 4 + -1];
            }
          }
          else {
LAB_0086a3cc:
            if (uVar49 == 1) {
              fStack_174 = uStack_268._4_4_;
            }
            else if (uVar198 == 1) {
              fVar109 = (float)((ulong)uVar54 >> 0x20);
              local_270[0] = (float)uVar54 * (float)auVar184._0_8_ + local_210[0];
              local_270[1] = fVar109 * (float)((ulong)auVar184._0_8_ >> 0x20) + local_210[1];
              uStack_268._0_4_ = (float)uVar54 * (float)in_register_00005188 + local_210[2];
              fStack_174 = fVar109 * (float)(in_register_00005188 >> 0x20) + fStack_204;
            }
            else {
              local_270[0] = local_180;
              local_270[1] = fStack_17c;
              uStack_268._0_4_ = fStack_178;
            }
          }
          *(float *)(param_6 + 3) = (float)uStack_268;
          *(float *)((long)param_6 + 0x1c) = fStack_174;
          *(float *)(param_6 + 2) = local_270[0];
          *(float *)((long)param_6 + 0x14) = local_270[1];
          param_6[5] = in_register_00005188;
          param_6[4] = auVar184._0_8_;
          param_6[1] = CONCAT44((float)((ulong)uVar54 >> 0x20) -
                                (float)((ulong)*(undefined8 *)param_5[6] >> 0x20),
                                (float)uVar54 - (float)*(undefined8 *)param_5[6]);
          *param_6 = uVar51;
LAB_0086a4c0:
          if (param_8 != (byte *)0x0) {
            param_8[(ulong)(uVar49 + 2) & 3] = fStack_1e4._0_1_;
            *param_8 = uStack_268._4_1_;
            param_8[1] = fStack_254._0_1_;
            param_8[2] = fStack_244._0_1_;
            param_8[(int)uVar49] = fStack_204._0_1_;
            (param_8 + (int)uVar49)[1] = fStack_1f4._0_1_;
            param_8[4] = (byte)uVar198 | (byte)(uVar49 << 6);
          }
          return *(int *)(param_6 + 6) != 0;
        }
      }
      if ((uVar3 == 0) || ((int)uVar47 <= (int)uVar198 && (int)uVar39 <= (int)uVar49)) {
        if (uVar2 == 0) goto LAB_0086a440;
        iVar268 = *(int *)(param_6 + 6);
        goto LAB_0086a468;
      }
    }
    param_7 = (undefined8 *)0x0;
  }
LAB_00869a7c:
  bVar34 = uVar35 != 0;
  uVar48 = uVar49;
  goto LAB_00867710;
}


