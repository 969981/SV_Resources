/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f265b0; name: FUN_02f265b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f265b0(float *param_1,int param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                 int *param_5,long param_6,long *param_7,long param_8,float *param_9)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  float *pfVar23;
  long *plVar24;
  float *pfVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  double *pdVar30;
  float *pfVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar61 [12];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar62 [12];
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
  float fVar83;
  ulong uVar85;
  undefined1 auVar86 [12];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined4 uVar112;
  undefined4 uVar113;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar84;
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
  float fVar114;
  float fVar115;
  undefined1 auVar117 [12];
  undefined8 uVar116;
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
  undefined1 auVar118 [12];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar143;
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
  undefined1 auVar146 [12];
  float fVar144;
  float fVar145;
  undefined1 auVar149 [12];
  float fVar168;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar147 [12];
  undefined1 auVar148 [12];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar169;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar170;
  float fVar171;
  ulong uVar172;
  undefined1 auVar174 [12];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined8 uVar173;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  float fVar192;
  float fVar193;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar175 [12];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined8 uVar194;
  int iVar217;
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  int iVar216;
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar218;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  int iVar219;
  float fVar220;
  float fVar221;
  undefined8 uVar222;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
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
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  int iVar247;
  float fVar248;
  int iVar263;
  int iVar264;
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  float fVar265;
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  double dVar266;
  undefined1 auVar267 [12];
  byte bVar280;
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  byte bVar281;
  byte bVar282;
  byte bVar283;
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  float fVar284;
  float fVar297;
  float fVar298;
  undefined1 auVar286 [16];
  float fVar285;
  float fVar299;
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  float fVar300;
  undefined1 auVar302 [12];
  float fVar314;
  undefined1 uVar315;
  undefined1 uVar316;
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  float fVar318;
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  float fVar301;
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  byte bVar313;
  byte bVar317;
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar319 [12];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  float fVar328;
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  float fVar329;
  float fVar331;
  undefined1 auVar330 [16];
  undefined2 uVar332;
  undefined2 uVar333;
  undefined2 uVar334;
  undefined1 auVar335 [16];
  float fVar336;
  float fVar338;
  undefined1 auVar337 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  float fVar341;
  float fVar342;
  float fVar343;
  float fVar344;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  
  if (param_9 != (float *)0x0) {
    pfVar26 = (float *)*param_7;
    *param_7 = (long)(pfVar26 + 8);
    *pfVar26 = *pfVar26 + 1.1920929e-07;
    *(undefined1 *)pfVar26 = 0x1b;
    fVar36 = param_9[1];
    fVar37 = param_9[2];
    pfVar26[1] = *param_9;
    pfVar26[2] = fVar36;
    pfVar26[3] = fVar37;
    fVar36 = param_9[5];
    fVar37 = param_9[6];
    pfVar26[4] = param_9[4];
    pfVar26[5] = fVar36;
    pfVar26[6] = fVar37;
  }
  puVar20 = *(undefined8 **)(param_6 + 0x40);
  pfVar26 = (float *)((long)param_1 + (long)param_2);
  uVar116 = *puVar20;
  *(undefined8 *)(*param_3 + 8) = puVar20[1];
  *(undefined8 *)*param_3 = uVar116;
  uVar116 = puVar20[2];
  *(undefined8 *)(param_3[1] + 8) = puVar20[3];
  *(undefined8 *)param_3[1] = uVar116;
  uVar116 = puVar20[4];
  *(undefined8 *)(param_3[2] + 8) = puVar20[5];
  *(undefined8 *)param_3[2] = uVar116;
  uVar116 = *(undefined8 *)(param_6 + 0x50);
  *(undefined8 *)(param_3[3] + 8) = *(undefined8 *)(param_6 + 0x58);
  *(undefined8 *)param_3[3] = uVar116;
  puVar20 = *(undefined8 **)(param_6 + 0x48);
  uVar116 = *puVar20;
  *(undefined8 *)(*param_4 + 8) = puVar20[1];
  *(undefined8 *)*param_4 = uVar116;
  uVar116 = puVar20[2];
  *(undefined8 *)(param_4[1] + 8) = puVar20[3];
  *(undefined8 *)param_4[1] = uVar116;
  uVar116 = puVar20[4];
  *(undefined8 *)(param_4[2] + 8) = puVar20[5];
  *(undefined8 *)param_4[2] = uVar116;
  uVar116 = *(undefined8 *)(param_6 + 0x60);
  *(undefined8 *)(param_4[3] + 8) = *(undefined8 *)(param_6 + 0x68);
  *(undefined8 *)param_4[3] = uVar116;
  local_100 = 0x7f7fffee7f7fffee;
  local_108 = 0x7f7fffee7f7fffee;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  local_130 = 0.0;
  fStack_12c = 0.0;
  fStack_118 = 0.0;
  fStack_114 = 0.0;
  local_120 = 0.0;
  fStack_11c = 0.0;
  if (param_8 == 0) {
    uVar34 = 0xff;
  }
  else {
    bVar280 = *(byte *)(param_8 + 0x55) >> 5;
    uVar34 = (uint)bVar280;
    if (bVar280 == 0) {
      uVar34 = 0xffffffff;
    }
    uVar34 = uVar34 & 0xff;
  }
  bVar19 = param_1 < pfVar26;
  if ((param_1 < pfVar26) && (uVar34 != 0)) {
    uVar35 = 0;
    plVar1 = param_7 + 1;
    pfVar22 = param_1;
    do {
      param_1 = pfVar22;
      switch(*(undefined2 *)pfVar22) {
      case 1:
        (**(code **)(*(long *)PTR_DAT_047e4050 +
                     (ulong)*(byte *)(*(long *)(pfVar22 + 4) + 0x20) * 0x80 + 0x88))
                  (*(long *)(pfVar22 + 4),param_6,param_7);
        param_1 = pfVar22 + 8;
        lVar27 = param_7[1] + (long)(int)pfVar22[6] * 8;
        goto LAB_02f2a080;
      case 2:
        pfVar25 = *(float **)(param_6 + 0x40);
        fVar36 = pfVar22[0x10];
        fVar37 = pfVar22[0x11];
        fVar40 = pfVar22[0x12];
        fVar221 = pfVar25[8];
        fVar39 = pfVar25[9];
        fVar114 = pfVar25[10];
        fVar143 = pfVar25[0xb];
        fVar220 = *pfVar25;
        fVar248 = pfVar25[1];
        fVar84 = pfVar25[2];
        fVar115 = pfVar25[3];
        fVar145 = pfVar25[4];
        fVar171 = pfVar25[5];
        fVar300 = pfVar25[6];
        fVar314 = pfVar25[7];
        fVar318 = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        fVar301 = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar265 = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        fVar299 = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)(param_3[3] + 8) = fVar265;
        *(float *)(param_3[3] + 0xc) = fVar299;
        *(float *)param_3[3] = fVar318;
        *(float *)(param_3[3] + 4) = fVar301;
        fVar36 = pfVar22[0xc];
        fVar37 = pfVar22[0xd];
        fVar40 = pfVar22[0xe];
        *(float *)(param_3[2] + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(param_3[2] + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)param_3[2] = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(param_3[2] + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = pfVar22[8];
        fVar37 = pfVar22[9];
        fVar40 = pfVar22[10];
        *(float *)(param_3[1] + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(param_3[1] + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)param_3[1] = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(param_3[1] + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = pfVar22[4];
        fVar37 = pfVar22[5];
        fVar40 = pfVar22[6];
        *(float *)(*param_3 + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(*param_3 + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)*param_3 = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(*param_3 + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = *(float *)(param_6 + 0x50);
        fVar37 = *(float *)(param_6 + 0x54);
        fVar40 = *(float *)(param_6 + 0x5c);
        *(float *)(param_3[3] + 8) = fVar265 + *(float *)(param_6 + 0x58);
        *(float *)(param_3[3] + 0xc) = fVar299 + fVar40;
        *(float *)param_3[3] = fVar318 + fVar36;
        *(float *)(param_3[3] + 4) = fVar301 + fVar37;
        pfVar25 = *(float **)(param_6 + 0x48);
        fVar36 = pfVar22[0x20];
        fVar37 = pfVar22[0x21];
        fVar40 = pfVar22[0x22];
        auVar56 = *(undefined1 (*) [16])(pfVar25 + 8);
        fVar221 = *pfVar25;
        fVar39 = pfVar25[1];
        fVar114 = pfVar25[2];
        fVar143 = pfVar25[3];
        fVar220 = pfVar25[4];
        fVar248 = pfVar25[5];
        fVar84 = pfVar25[6];
        fVar115 = pfVar25[7];
        fVar318 = auVar56._0_4_;
        fVar301 = auVar56._4_4_;
        fVar265 = auVar56._8_4_;
        fVar299 = auVar56._12_4_;
        fVar145 = fVar318 * fVar40 + fVar221 * fVar36 + fVar220 * fVar37;
        fVar171 = fVar301 * fVar40 + fVar39 * fVar36 + fVar248 * fVar37;
        fVar300 = fVar265 * fVar40 + fVar114 * fVar36 + fVar84 * fVar37;
        fVar314 = fVar299 * fVar40 + fVar143 * fVar36 + fVar115 * fVar37;
        *(float *)(param_4[3] + 8) = fVar300;
        *(float *)(param_4[3] + 0xc) = fVar314;
        *(float *)param_4[3] = fVar145;
        *(float *)(param_4[3] + 4) = fVar171;
        fVar36 = pfVar22[0x1c];
        fVar37 = pfVar22[0x1d];
        fVar40 = pfVar22[0x1e];
        *(float *)(param_4[2] + 8) = fVar265 * fVar40 + fVar114 * fVar36 + fVar84 * fVar37;
        *(float *)(param_4[2] + 0xc) = fVar299 * fVar40 + fVar143 * fVar36 + fVar115 * fVar37;
        *(float *)param_4[2] = fVar318 * fVar40 + fVar221 * fVar36 + fVar220 * fVar37;
        *(float *)(param_4[2] + 4) = fVar301 * fVar40 + fVar39 * fVar36 + fVar248 * fVar37;
        fVar36 = pfVar22[0x18];
        fVar37 = pfVar22[0x19];
        fVar40 = pfVar22[0x1a];
        *(float *)(param_4[1] + 8) = fVar265 * fVar40 + fVar114 * fVar36 + fVar84 * fVar37;
        *(float *)(param_4[1] + 0xc) = fVar299 * fVar40 + fVar143 * fVar36 + fVar115 * fVar37;
        *(float *)param_4[1] = fVar318 * fVar40 + fVar221 * fVar36 + fVar220 * fVar37;
        *(float *)(param_4[1] + 4) = fVar301 * fVar40 + fVar39 * fVar36 + fVar248 * fVar37;
        fVar36 = pfVar22[0x14];
        fVar37 = pfVar22[0x15];
        fVar40 = pfVar22[0x16];
        param_1 = pfVar22 + 0x24;
        *(float *)(*param_4 + 8) = fVar265 * fVar40 + fVar114 * fVar36 + fVar84 * fVar37;
        *(float *)(*param_4 + 0xc) = fVar299 * fVar40 + fVar143 * fVar36 + fVar115 * fVar37;
        *(float *)*param_4 = fVar318 * fVar40 + fVar221 * fVar36 + fVar220 * fVar37;
        *(float *)(*param_4 + 4) = fVar301 * fVar40 + fVar39 * fVar36 + fVar248 * fVar37;
        auVar56 = *(undefined1 (*) [16])(param_6 + 0x60);
        auVar42._0_4_ = fVar145 + auVar56._0_4_;
        auVar42._4_4_ = fVar171 + auVar56._4_4_;
        auVar42._8_4_ = fVar300 + auVar56._8_4_;
        auVar42._12_4_ = fVar314 + auVar56._12_4_;
        goto LAB_02f26888;
      case 3:
        pfVar25 = *(float **)(param_6 + 0x40);
        pfVar31 = *(float **)(param_6 + 0x48);
        fVar36 = pfVar25[8];
        fVar37 = pfVar25[9];
        fVar40 = pfVar25[0xb];
        fVar221 = *pfVar25;
        fVar39 = pfVar25[1];
        fVar114 = pfVar25[3];
        fVar143 = pfVar25[4];
        fVar220 = pfVar25[5];
        fVar248 = pfVar25[7];
        fVar84 = pfVar22[4];
        fVar115 = pfVar22[5];
        fVar145 = pfVar22[6];
        fVar171 = pfVar22[8];
        fVar300 = pfVar22[9];
        fVar314 = pfVar22[10];
        param_1 = pfVar22 + 0xc;
        auVar56 = *(undefined1 (*) [16])(pfVar31 + 8);
        fVar318 = *pfVar31;
        fVar301 = pfVar31[1];
        fVar265 = pfVar31[2];
        fVar299 = pfVar31[3];
        fVar218 = pfVar31[4];
        fVar285 = pfVar31[5];
        fVar38 = pfVar31[6];
        fVar144 = pfVar31[7];
        auVar105 = *(undefined1 (*) [16])(param_6 + 0x50);
        *(float *)(param_3[3] + 8) =
             pfVar25[10] * fVar145 + pfVar25[2] * fVar84 + pfVar25[6] * fVar115 + auVar105._8_4_;
        *(float *)(param_3[3] + 0xc) =
             fVar40 * fVar145 + fVar114 * fVar84 + fVar248 * fVar115 + auVar105._12_4_;
        *(float *)param_3[3] =
             fVar36 * fVar145 + fVar221 * fVar84 + fVar143 * fVar115 + auVar105._0_4_;
        *(float *)(param_3[3] + 4) =
             fVar37 * fVar145 + fVar39 * fVar84 + fVar220 * fVar115 + auVar105._4_4_;
        auVar105 = *(undefined1 (*) [16])(param_6 + 0x60);
        auVar42._0_4_ =
             auVar105._0_4_ + auVar56._0_4_ * fVar314 + fVar318 * fVar171 + fVar218 * fVar300;
        auVar42._4_4_ =
             auVar105._4_4_ + auVar56._4_4_ * fVar314 + fVar301 * fVar171 + fVar285 * fVar300;
        auVar42._8_4_ =
             auVar105._8_4_ + auVar56._8_4_ * fVar314 + fVar265 * fVar171 + fVar38 * fVar300;
        auVar42._12_4_ =
             auVar105._12_4_ + auVar56._12_4_ * fVar314 + fVar299 * fVar171 + fVar144 * fVar300;
LAB_02f26888:
        *(long *)(param_4[3] + 8) = auVar42._8_8_;
        *(long *)param_4[3] = auVar42._0_8_;
        break;
      case 4:
        pfVar25 = *(float **)(param_6 + 0x40);
        fVar36 = pfVar22[0x10];
        fVar37 = pfVar22[0x11];
        fVar40 = pfVar22[0x12];
        fVar221 = pfVar25[8];
        fVar39 = pfVar25[9];
        fVar114 = pfVar25[10];
        fVar143 = pfVar25[0xb];
        fVar220 = *pfVar25;
        fVar248 = pfVar25[1];
        fVar84 = pfVar25[2];
        fVar115 = pfVar25[3];
        fVar145 = pfVar25[4];
        fVar171 = pfVar25[5];
        fVar300 = pfVar25[6];
        fVar314 = pfVar25[7];
        *(float *)(param_3[3] + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(param_3[3] + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)param_3[3] = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(param_3[3] + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = pfVar22[0xc];
        fVar37 = pfVar22[0xd];
        fVar40 = pfVar22[0xe];
        *(float *)(param_3[2] + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(param_3[2] + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)param_3[2] = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(param_3[2] + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = pfVar22[8];
        fVar37 = pfVar22[9];
        fVar40 = pfVar22[10];
        *(float *)(param_3[1] + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(param_3[1] + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)param_3[1] = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(param_3[1] + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        fVar36 = pfVar22[4];
        fVar37 = pfVar22[5];
        fVar40 = pfVar22[6];
        *(float *)(*param_3 + 8) = fVar114 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37;
        *(float *)(*param_3 + 0xc) = fVar143 * fVar40 + fVar115 * fVar36 + fVar314 * fVar37;
        *(float *)*param_3 = fVar221 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
        *(float *)(*param_3 + 4) = fVar39 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
        pfVar25 = *(float **)(param_6 + 0x48);
        fVar36 = pfVar25[8];
        fVar37 = pfVar25[9];
        fVar40 = pfVar25[10];
        fVar221 = pfVar25[0xb];
        fVar39 = *pfVar25;
        fVar114 = pfVar25[1];
        fVar143 = pfVar25[2];
        fVar220 = pfVar25[3];
        fVar248 = pfVar25[4];
        fVar84 = pfVar25[5];
        fVar115 = pfVar25[6];
        fVar145 = pfVar25[7];
        param_1 = pfVar22 + 0x1c;
        fVar171 = *param_1;
        fVar300 = pfVar22[0x1d];
        fVar314 = pfVar22[0x1e];
        *(float *)(param_4[3] + 8) = fVar40 * fVar314 + fVar143 * fVar171 + fVar115 * fVar300;
        *(float *)(param_4[3] + 0xc) = fVar221 * fVar314 + fVar220 * fVar171 + fVar145 * fVar300;
        *(float *)param_4[3] = fVar36 * fVar314 + fVar39 * fVar171 + fVar248 * fVar300;
        *(float *)(param_4[3] + 4) = fVar37 * fVar314 + fVar114 * fVar171 + fVar84 * fVar300;
        fVar171 = pfVar22[0x18];
        fVar300 = pfVar22[0x19];
        fVar314 = pfVar22[0x1a];
        *(float *)(param_4[2] + 8) = fVar40 * fVar314 + fVar143 * fVar171 + fVar115 * fVar300;
        *(float *)(param_4[2] + 0xc) = fVar221 * fVar314 + fVar220 * fVar171 + fVar145 * fVar300;
        *(float *)param_4[2] = fVar36 * fVar314 + fVar39 * fVar171 + fVar248 * fVar300;
        *(float *)(param_4[2] + 4) = fVar37 * fVar314 + fVar114 * fVar171 + fVar84 * fVar300;
        fVar171 = pfVar22[0x14];
        fVar300 = pfVar22[0x15];
        fVar314 = pfVar22[0x16];
        *(float *)(param_4[1] + 8) = fVar40 * fVar314 + fVar143 * fVar171 + fVar115 * fVar300;
        *(float *)(param_4[1] + 0xc) = fVar221 * fVar314 + fVar220 * fVar171 + fVar145 * fVar300;
        *(float *)param_4[1] = fVar36 * fVar314 + fVar39 * fVar171 + fVar248 * fVar300;
        *(float *)(param_4[1] + 4) = fVar37 * fVar314 + fVar114 * fVar171 + fVar84 * fVar300;
        auVar56 = *(undefined1 (*) [16])(pfVar22 + 0x10);
        fVar171 = auVar56._0_4_;
        fVar300 = auVar56._4_4_;
        fVar314 = auVar56._8_4_;
        auVar43._0_8_ =
             CONCAT44(fVar37 * fVar314 + fVar114 * fVar171 + fVar84 * fVar300,
                      fVar36 * fVar314 + fVar39 * fVar171 + fVar248 * fVar300);
        auVar43._8_4_ = fVar40 * fVar314 + fVar143 * fVar171 + fVar115 * fVar300;
        auVar43._12_4_ = fVar221 * fVar314 + fVar220 * fVar171 + fVar145 * fVar300;
        *(long *)(*param_4 + 8) = auVar43._8_8_;
        *(undefined8 *)*param_4 = auVar43._0_8_;
        break;
      case 5:
        fVar36 = fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c;
        fVar37 = fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c;
        pfVar31 = (float *)*param_7;
        fVar40 = fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c;
        fVar221 = fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c;
        fVar39 = 0.0;
        fVar114 = 0.0;
        fVar143 = 0.0;
        fVar220 = 0.0;
        if (fVar36 != 0.0) {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar143 = (float)uVar116 / SQRT(fVar36);
          fVar220 = (float)((ulong)uVar116 >> 0x20) / SQRT(fVar37);
        }
        if (fVar40 != 0.0) {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar39 = (float)uVar116 / SQRT(fVar40);
          fVar114 = (float)((ulong)uVar116 >> 0x20) / SQRT(fVar221);
        }
        uVar172 = CONCAT44(-(uint)(1.4210855e-14 < fVar221),-(uint)(1.4210855e-14 < fVar40)) &
                  0x100000001;
        uVar85 = CONCAT44(-(uint)(1.4210855e-14 < fVar37),-(uint)(1.4210855e-14 < fVar36)) &
                 0x100000001;
        auVar150._0_4_ = local_120 * fVar143;
        auVar150._4_4_ = fStack_11c * fVar220;
        auVar150._8_4_ = fStack_118 * fVar143;
        auVar150._12_4_ = fStack_114 * fVar220;
        iVar217 = (int)uVar172;
        iVar247 = (int)(uVar172 >> 0x20);
        iVar219 = (int)uVar85;
        iVar216 = (int)(uVar85 >> 0x20);
        auVar195._0_4_ = (iVar219 << 0x1f) >> 0x1f;
        auVar195._4_4_ = (iVar216 << 0x1f) >> 0x1f;
        auVar195._8_4_ = (iVar219 << 0x1f) >> 0x1f;
        auVar195._12_4_ = (iVar216 << 0x1f) >> 0x1f;
        auVar119._0_4_ = local_130 * fVar39;
        auVar119._4_4_ = fStack_12c * fVar114;
        auVar119._8_4_ = fStack_128 * fVar39;
        auVar119._12_4_ = fStack_124 * fVar114;
        auVar224._12_4_ = DAT_03cab628._4_4_;
        auVar224._8_4_ = (uint)DAT_03cab628;
        auVar224._4_4_ = DAT_03cab620._4_4_;
        auVar224._0_4_ = (uint)DAT_03cab620;
        auVar223._0_4_ = (iVar217 << 0x1f) >> 0x1f;
        auVar223._4_4_ = (iVar247 << 0x1f) >> 0x1f;
        auVar223._8_4_ = (iVar217 << 0x1f) >> 0x1f;
        auVar223._12_4_ = (iVar247 << 0x1f) >> 0x1f;
        auVar105 = auVar224 ^ (auVar224 ^ auVar150) & auVar195;
        auVar224 = auVar224 ^ (auVar224 ^ auVar119) & auVar223;
        fVar36 = fVar36 * fVar143;
        fVar40 = fVar40 * fVar39;
        auVar176._0_12_ = auVar105._0_12_;
        auVar176._12_4_ = fVar36;
        auVar56 = NEON_ext(auVar105,auVar105,8,1);
        auVar120._0_12_ = auVar224._0_12_;
        auVar120._12_4_ = fVar40;
        uVar116 = NEON_ext(auVar105._0_8_,auVar56._0_8_,4,1);
        *(long *)(pfVar31 + 6) = auVar176._8_8_;
        *(long *)(pfVar31 + 4) = auVar105._0_8_;
        *(long *)(pfVar31 + 10) = auVar120._8_8_;
        *(long *)(pfVar31 + 8) = auVar224._0_8_;
        auVar56 = NEON_ext(auVar224,auVar224,8,1);
        uVar222 = NEON_ext(auVar224._0_8_,auVar56._0_8_,4,1);
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar37 = *(float *)(lVar29 + 0x70);
        fVar221 = *(float *)(lVar29 + 0x74);
        fVar39 = *(float *)(lVar29 + 0x78);
        fVar114 = *(float *)(lVar29 + 0x7c);
        pfVar31[0x12] = fVar39;
        pfVar31[0x13] = fVar114;
        pfVar31[0x10] = fVar37;
        pfVar31[0x11] = fVar221;
        auVar56 = *(undefined1 (*) [16])(lVar27 + 0x80);
        auVar106 = NEON_ext(auVar56,auVar56,8,1);
        fVar301 = auVar106._4_4_ * auVar106._4_4_;
        uVar173 = NEON_ext(auVar56._0_8_,auVar106._0_8_,4,1);
        fVar114 = auVar105._0_4_;
        fVar248 = auVar56._0_4_;
        fVar143 = auVar105._4_4_;
        fVar115 = auVar56._4_4_;
        fVar220 = auVar105._8_4_;
        fVar145 = auVar56._8_4_;
        fVar314 = auVar56._12_4_;
        *(long *)(pfVar31 + 0x16) = auVar56._8_8_;
        *(long *)(pfVar31 + 0x14) = auVar56._0_8_;
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x80);
        fVar265 = fVar220 * fVar145 + fVar114 * fVar248 + fVar143 * fVar115;
        *(long *)(pfVar31 + 0x1a) = auVar56._8_8_;
        *(long *)(pfVar31 + 0x18) = auVar56._0_8_;
        fVar318 = fVar301 + -0.5;
        auVar151._0_4_ = fVar114 * (float)uVar173 - (float)uVar116 * fVar248;
        auVar151._4_4_ =
             fVar143 * (float)((ulong)uVar173 >> 0x20) - (float)((ulong)uVar116 >> 0x20) * fVar115;
        auVar151._8_4_ = fVar220 * fVar248 - fVar114 * fVar145;
        auVar151._12_4_ = fVar36 * fVar115 - fVar143 * fVar314;
        auVar105 = NEON_ext(auVar151,auVar151,4,1);
        auVar106 = NEON_ext(auVar56,auVar56,8,1);
        fVar300 = auVar106._4_4_ * auVar106._4_4_;
        uVar116 = NEON_ext(auVar56._0_8_,auVar106._0_8_,4,1);
        fVar171 = fVar300 + -0.5;
        fVar84 = auVar105._0_4_ * fVar314 + fVar114 * fVar318 + fVar248 * fVar265;
        fVar115 = auVar105._4_4_ * fVar314 +
                  fVar143 * (fVar301 + -0.5) +
                  fVar115 * (fVar220 * fVar145 + fVar114 * fVar248 + fVar143 * fVar115);
        fVar145 = auVar151._0_4_ * fVar314 + fVar220 * fVar318 + fVar145 * fVar265;
        fVar114 = auVar224._0_4_;
        fVar314 = auVar56._0_4_;
        fVar220 = auVar224._4_4_;
        fVar318 = auVar56._4_4_;
        fVar248 = auVar224._8_4_;
        fVar301 = auVar56._8_4_;
        fVar265 = auVar56._12_4_;
        fVar299 = fVar248 * fVar301 + fVar114 * fVar314 + fVar220 * fVar318;
        auVar121._0_4_ = fVar114 * (float)uVar116 - (float)uVar222 * fVar314;
        auVar121._4_4_ =
             fVar220 * (float)((ulong)uVar116 >> 0x20) - (float)((ulong)uVar222 >> 0x20) * fVar318;
        auVar121._8_4_ = fVar248 * fVar314 - fVar114 * fVar301;
        auVar121._12_4_ = fVar40 * fVar318 - fVar220 * fVar265;
        auVar56 = NEON_ext(auVar121,auVar121,4,1);
        fVar143 = fVar114 * fVar171 + fVar314 * fVar299 + auVar56._0_4_ * fVar265;
        fVar114 = fVar220 * (fVar300 + -0.5) +
                  fVar318 * (fVar248 * fVar301 + fVar114 * fVar314 + fVar220 * fVar318) +
                  auVar56._4_4_ * fVar265;
        fVar220 = fVar248 * fVar171 + fVar301 * fVar299 + auVar121._0_4_ * fVar265;
        auVar86._0_8_ =
             CONCAT44(fVar221 + ((fVar114 + fVar114) * fVar40 - (fVar115 + fVar115) * fVar36),
                      fVar37 + ((fVar143 + fVar143) * fVar40 - (fVar84 + fVar84) * fVar36));
        auVar86._8_4_ = fVar39 + ((fVar220 + fVar220) * fVar40 - (fVar145 + fVar145) * fVar36);
        auVar89._12_4_ = pfVar31[0x1f];
        auVar89._0_12_ = auVar86;
        *(long *)(pfVar31 + 0x1e) = auVar89._8_8_;
        *(undefined8 *)(pfVar31 + 0x1c) = auVar86._0_8_;
        auVar56 = *(undefined1 (*) [16])(lVar27 + 0x30);
        uVar116 = NEON_fmaxp(auVar56._0_8_,auVar56._0_8_,4);
        uVar222 = NEON_fmax(CONCAT44(auVar56._8_4_,auVar56._8_4_),uVar116,4);
        auVar105 = *(undefined1 (*) [16])(lVar29 + 0x30);
        uVar116 = NEON_fmaxp(auVar105._0_8_,auVar105._0_8_,4);
        fVar37 = pfVar22[3];
        uVar194 = NEON_fmax(CONCAT44(auVar105._8_4_,auVar105._8_4_),uVar116,4);
        fVar39 = (float)uVar222 * fVar36 * fVar37;
        fVar221 = (float)uVar194 * fVar40 * fVar37;
        uVar173 = NEON_fmov(0x3f800000,4);
        uVar116 = uVar173;
        if (1.1920929e-07 < fVar39) {
          uVar116 = CONCAT44(auVar56._12_4_ / ((float)((ulong)uVar222 >> 0x20) * fVar36 * fVar37),
                             auVar56._12_4_ / fVar39);
        }
        uVar222 = uVar173;
        if (1.1920929e-07 < fVar221) {
          uVar222 = CONCAT44(auVar105._12_4_ / ((float)((ulong)uVar194 >> 0x20) * fVar40 * fVar37),
                             auVar105._12_4_ / fVar221);
        }
        uVar116 = NEON_fmin(uVar116,uVar173,4);
        uVar173 = NEON_fmin(uVar222,uVar173,4);
        fVar39 = pfVar22[1];
        fVar221 = *(float *)(param_6 + 0x70);
        fVar37 = *(float *)(param_6 + 8);
        lVar27 = 0;
        if (*(char *)((long)pfVar22 + 3) != '\0') {
          lVar27 = 0xf0;
        }
        uVar11 = *(uint *)(PTR_DAT_047d19e0 + lVar27);
        pfVar31[2] = 0.0;
        pfVar31[1] = (float)(((uint)local_108 ^ 0x7f7fffee) & uVar11 ^ 0x7f7fffee);
        *(ulong *)(pfVar31 + 0xe) = CONCAT44(fVar40 * (float)uVar173,fVar36 * (float)uVar116);
        *(ulong *)(pfVar31 + 0xc) = CONCAT44((int)local_100,fVar37 * fVar221 * fVar39);
        auVar90._12_4_ = *(float *)(param_6 + 0x74) * pfVar22[2];
        auVar90._0_12_ = auVar86;
        *pfVar31 = *pfVar31 + 1.1920929e-07;
        *(long *)(pfVar31 + 0x1e) = auVar90._8_8_;
        *(undefined8 *)(pfVar31 + 0x1c) = auVar86._0_8_;
        pfVar25 = pfVar31 + 0x20;
        *(undefined1 *)pfVar31 = 0x11;
        goto LAB_02f29eb0;
      case 6:
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar36 = *(float *)(lVar29 + 0x70);
        fVar37 = *(float *)(lVar29 + 0x74);
        fVar40 = *(float *)(lVar29 + 0x78);
        fVar221 = *(float *)(lVar29 + 0x7c);
        pfVar25 = (float *)*param_7;
        pfVar25[0x16] = fVar40;
        pfVar25[0x17] = fVar221;
        pfVar25[0x14] = fVar36;
        pfVar25[0x15] = fVar37;
        uVar116 = *(undefined8 *)(lVar27 + 0x80);
        *(undefined8 *)(pfVar25 + 0x12) = *(undefined8 *)(lVar27 + 0x88);
        *(undefined8 *)(pfVar25 + 0x10) = uVar116;
        uVar116 = *(undefined8 *)(lVar29 + 0x80);
        *(undefined8 *)(pfVar25 + 0x1a) = *(undefined8 *)(lVar29 + 0x88);
        *(undefined8 *)(pfVar25 + 0x18) = uVar116;
        auVar56 = *(undefined1 (*) [16])(lVar27 + 0x80);
        auVar105 = NEON_ext(auVar56,auVar56,8,1);
        fVar221 = auVar105._4_4_ * auVar105._4_4_;
        uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
        fVar84 = fVar221 + -0.5;
        auVar16._8_4_ = fStack_118;
        auVar16._0_8_ = CONCAT44(fStack_11c,local_120);
        auVar16._12_4_ = fStack_114;
        fVar39 = auVar56._0_4_;
        fVar143 = auVar56._4_4_;
        fVar220 = auVar56._8_4_;
        fVar248 = auVar56._12_4_;
        fVar115 = fVar39 * local_120 + fVar143 * fStack_11c + fVar220 * fStack_118;
        auVar56 = NEON_ext(auVar16,auVar16,8,1);
        uVar173 = NEON_ext(CONCAT44(fStack_11c,local_120),auVar56._0_8_,4,1);
        auVar122._0_4_ = local_120 * (float)uVar116 - fVar39 * (float)uVar173;
        auVar122._4_4_ =
             fStack_11c * (float)((ulong)uVar116 >> 0x20) -
             fVar143 * (float)((ulong)uVar173 >> 0x20);
        auVar122._8_4_ = fStack_118 * fVar39 - fVar220 * local_120;
        auVar122._12_4_ = fStack_114 * fVar143 - fVar248 * fStack_11c;
        auVar56 = NEON_ext(auVar122,auVar122,4,1);
        fVar114 = local_120 * fVar84 + fVar39 * fVar115 + auVar56._0_4_ * fVar248;
        fVar221 = fStack_11c * (fVar221 + -0.5) +
                  fVar143 * (fVar39 * local_120 + fVar143 * fStack_11c + fVar220 * fStack_118) +
                  auVar56._4_4_ * fVar248;
        fVar143 = fStack_118 * fVar84 + fVar220 * fVar115 + auVar122._0_4_ * fVar248;
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x80);
        auVar105 = NEON_ext(auVar56,auVar56,8,1);
        fVar39 = auVar105._4_4_ * auVar105._4_4_;
        uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
        fVar220 = fVar39 + -0.5;
        auVar15._8_4_ = fStack_128;
        auVar15._0_8_ = CONCAT44(fStack_12c,local_130);
        auVar15._12_4_ = fStack_124;
        fVar84 = auVar56._0_4_;
        fVar115 = auVar56._4_4_;
        fVar145 = auVar56._8_4_;
        fVar171 = auVar56._12_4_;
        fVar300 = fVar84 * local_130 + fVar115 * fStack_12c + fVar145 * fStack_128;
        auVar56 = NEON_ext(auVar15,auVar15,8,1);
        uVar173 = NEON_ext(CONCAT44(fStack_12c,local_130),auVar56._0_8_,4,1);
        auVar196._0_4_ = local_130 * (float)uVar116 - fVar84 * (float)uVar173;
        auVar196._4_4_ =
             fStack_12c * (float)((ulong)uVar116 >> 0x20) -
             fVar115 * (float)((ulong)uVar173 >> 0x20);
        auVar196._8_4_ = fStack_128 * fVar84 - fVar145 * local_130;
        auVar196._12_4_ = fStack_124 * fVar115 - fVar171 * fStack_12c;
        auVar56 = NEON_ext(auVar196,auVar196,4,1);
        fVar248 = local_130 * fVar220 + fVar84 * fVar300 + auVar56._0_4_ * fVar171;
        fVar39 = fStack_12c * (fVar39 + -0.5) +
                 fVar115 * (fVar84 * local_130 + fVar115 * fStack_12c + fVar145 * fStack_128) +
                 auVar56._4_4_ * fVar171;
        fVar220 = fStack_128 * fVar220 + fVar145 * fVar300 + auVar196._0_4_ * fVar171;
        fVar36 = (fVar114 + fVar114) - (fVar36 + fVar248 + fVar248);
        fVar37 = (fVar221 + fVar221) - (fVar37 + fVar39 + fVar39);
        fVar40 = (fVar143 + fVar143) - (fVar40 + fVar220 + fVar220);
        fVar36 = fVar36 * fVar36 + fVar37 * fVar37 + fVar40 * fVar40;
        if (fVar36 == 0.0) {
          fVar37 = 0.0;
        }
        else {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar37 = (float)uVar116 / SQRT(fVar36);
        }
        iVar219 = -(uint)(fVar36 < 1.4210855e-14);
        fVar36 = fVar36 * fVar37;
        fVar40 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar219 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar219 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar219 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar219)));
        fVar36 = pfVar22[5];
        fVar37 = pfVar22[4];
        pfVar25[0x17] =
             (float)((uint)fVar37 ^
                    ((uint)fVar37 ^
                    (uint)fVar36 ^ ((uint)fVar36 ^ (uint)fVar40) & ~-(uint)(fVar36 < fVar40)) &
                    ~-(uint)(fVar40 < fVar37)) - fVar40;
        fVar143 = SQRT(fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c);
        fVar220 = SQRT(fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c);
        fVar248 = SQRT(fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c);
        fVar84 = SQRT(fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c);
        uVar172 = CONCAT44(-(uint)(1.1920929e-07 < fVar220),-(uint)(1.1920929e-07 < fVar143)) &
                  0x100000001;
        uVar85 = CONCAT44(-(uint)(1.1920929e-07 < fVar84),-(uint)(1.1920929e-07 < fVar248)) &
                 0x100000001;
        iVar219 = (int)uVar172;
        fVar36 = local_120 / fVar143;
        fVar37 = fStack_11c / fVar220;
        fVar40 = fStack_118 / fVar143;
        auVar174._0_4_ = (iVar219 << 0x1f) >> 0x1f;
        auVar174._4_4_ = ((int)(uVar172 >> 0x20) << 0x1f) >> 0x1f;
        auVar174._8_4_ = (iVar219 << 0x1f) >> 0x1f;
        fVar221 = local_130 / fVar248;
        fVar39 = fStack_12c / fVar84;
        fVar114 = fStack_128 / fVar248;
        iVar219 = -(uint)(fVar143 == 0.0);
        iVar216 = -(uint)(fVar220 == 0.0);
        iVar217 = -(uint)(fVar143 == 0.0);
        iVar247 = -(uint)(fVar248 == 0.0);
        iVar263 = -(uint)(fVar84 == 0.0);
        iVar264 = -(uint)(fVar248 == 0.0);
        auVar41[0] = SUB41(fVar36,0) & ~(byte)iVar219;
        auVar41[1] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar219 >> 8);
        auVar41[2] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar219 >> 0x10);
        auVar41[3] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar219 >> 0x18);
        auVar41[4] = SUB41(fVar37,0) & ~(byte)iVar216;
        auVar41[5] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar216 >> 8);
        auVar41[6] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar216 >> 0x10);
        auVar41[7] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar216 >> 0x18);
        auVar41[8] = SUB41(fVar40,0) & ~(byte)iVar217;
        auVar41[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar217 >> 8);
        auVar41[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar217 >> 0x10);
        auVar41[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar217 >> 0x18);
        auVar197._12_4_ = DAT_03cab628._4_4_;
        auVar197._8_4_ = (uint)DAT_03cab628;
        auVar197._4_4_ = DAT_03cab620._4_4_;
        auVar197._0_4_ = (uint)DAT_03cab620;
        auVar44._0_12_ = auVar41 ^ (auVar41 ^ auVar197._0_12_) & ~auVar174;
        iVar219 = (int)uVar85;
        auVar146._0_4_ = (iVar219 << 0x1f) >> 0x1f;
        auVar146._4_4_ = ((int)(uVar85 >> 0x20) << 0x1f) >> 0x1f;
        auVar146._8_4_ = (iVar219 << 0x1f) >> 0x1f;
        auVar60[0] = SUB41(fVar221,0) & ~(byte)iVar247;
        auVar60[1] = (byte)((uint)fVar221 >> 8) & ~(byte)((uint)iVar247 >> 8);
        auVar60[2] = (byte)((uint)fVar221 >> 0x10) & ~(byte)((uint)iVar247 >> 0x10);
        auVar60[3] = (byte)((uint)fVar221 >> 0x18) & ~(byte)((uint)iVar247 >> 0x18);
        auVar60[4] = SUB41(fVar39,0) & ~(byte)iVar263;
        auVar60[5] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar263 >> 8);
        auVar60[6] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar263 >> 0x10);
        auVar60[7] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar263 >> 0x18);
        auVar60[8] = SUB41(fVar114,0) & ~(byte)iVar264;
        auVar60[9] = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar264 >> 8);
        auVar60[10] = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar264 >> 0x10);
        auVar60[0xb] = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar264 >> 0x18);
        auVar44._12_4_ = fVar143;
        pfVar25[6] = *(float *)(param_6 + 0x74) * pfVar22[9];
        auVar63._0_12_ = auVar60 ^ (auVar60 ^ auVar197._0_12_) & ~auVar146;
        auVar63._12_4_ = fVar248;
        *(long *)(pfVar25 + 10) = auVar44._8_8_;
        *(long *)(pfVar25 + 8) = auVar44._0_8_;
        *(long *)(pfVar25 + 0xe) = auVar63._8_8_;
        *(long *)(pfVar25 + 0xc) = auVar63._0_8_;
        fVar37 = *(float *)(param_6 + 8) * *(float *)(param_6 + 0x70) * pfVar22[8];
        fVar36 = *pfVar25;
        pfVar25[2] = pfVar25[2];
        pfVar25[3] = fVar37;
        *pfVar25 = fVar36;
        pfVar25[1] = pfVar25[1];
        auVar91._0_8_ = CONCAT44(pfVar22[4],fVar36);
        auVar91._8_4_ = pfVar22[5];
        auVar91._12_4_ = fVar37;
        *(long *)(pfVar25 + 2) = auVar91._8_8_;
        *(undefined8 *)pfVar25 = auVar91._0_8_;
        *(bool *)(pfVar25 + 7) = 0.0 <= pfVar22[7];
        pfVar25[4] = pfVar22[6];
        pfVar25[5] = pfVar22[7];
        *pfVar25 = fVar36 + 1.1920929e-07;
        param_1 = pfVar22 + 0xc;
        pfVar22 = pfVar25 + 0x1c;
        *(undefined1 *)pfVar25 = 0x12;
        goto LAB_02f281c8;
      case 7:
        if ((pfVar22[1] < 0.0) || (pfVar22[2] < 0.0)) {
          local_b0 = *(undefined8 *)param_4[3];
          uStack_b8 = SUB168(param_3[3],8);
          local_c0 = SUB168(param_3[3],0);
          fStack_a8 = (float)*(undefined8 *)(param_4[3] + 8);
          fStack_a4 = (float)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
          uStack_98 = SUB168(param_4[*(byte *)((long)pfVar22 + 2)],8);
          local_a0 = SUB168(param_4[*(byte *)((long)pfVar22 + 2)],0);
          FUN_02f261d0(&local_c0,param_6,param_7);
        }
        else {
          local_c0 = *(undefined8 *)param_3[3];
          uStack_b8 = *(long *)(param_3[3] + 8);
          local_b0 = *(undefined8 *)param_4[3];
          fStack_a8 = (float)*(undefined8 *)(param_4[3] + 8);
          fStack_a4 = (float)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
          local_a0 = *(undefined8 *)param_4[*(byte *)((long)pfVar22 + 2)];
          uStack_98 = *(undefined8 *)(param_4[*(byte *)((long)pfVar22 + 2)] + 8);
          local_90 = CONCAT44(pfVar22[2] * *(float *)(param_6 + 0x74),
                              pfVar22[1] * *(float *)(param_6 + 0x70));
          FUN_02f26300(&local_c0,param_6,param_7);
        }
        param_1 = pfVar22 + 4;
        goto LAB_02f2a21c;
      case 9:
        local_c0 = *(undefined8 *)param_3[3];
        uStack_b8 = *(long *)(param_3[3] + 8);
        local_b0 = *(undefined8 *)param_4[3];
        fStack_a8 = (float)*(undefined8 *)(param_4[3] + 8);
        fStack_a4 = (float)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
        local_90 = *(undefined8 *)(pfVar22 + 1);
        local_88 = *(float *)(param_6 + 0x70) * pfVar22[3];
        local_84 = *(float *)(param_6 + 0x74) * pfVar22[4];
        uStack_98 = SUB168(param_4[*(byte *)((long)pfVar22 + 2)],8);
        local_a0 = SUB168(param_4[*(byte *)((long)pfVar22 + 2)],0);
        FUN_02f26430(&local_c0,param_6,param_7);
        param_1 = pfVar22 + 8;
        goto LAB_02f281cc;
      case 10:
        if ((*(char *)((long)pfVar22 + 2) == '\0') || (fVar36 = pfVar22[1], fVar36 <= 0.0)) {
          pfVar25 = (float *)*param_7;
          *pfVar25 = *pfVar25 + 1.1920929e-07;
          *(undefined1 *)pfVar25 = 3;
          *(undefined1 *)(pfVar25 + 1) = 2;
          *param_7 = (long)(pfVar25 + 4);
        }
        else {
          auVar56 = param_4[*(byte *)((long)pfVar22 + 3)];
          puVar20 = (undefined8 *)*param_7;
          lVar29 = param_7[1];
          auVar105 = param_3[3];
          lVar27 = *(long *)(param_6 + 0x30);
          lVar33 = *(long *)(param_6 + 0x38);
          auVar106 = NEON_ext(auVar105,auVar105,8,1);
          fVar40 = *(float *)(param_6 + 0x74);
          uVar173 = NEON_ext(auVar105._0_8_,auVar106._0_8_,4,1);
          auVar106 = NEON_ext(auVar56,auVar56,8,1);
          puVar20[1] = auVar56._8_8_;
          uVar116 = auVar56._0_8_;
          *puVar20 = uVar116;
          fVar221 = auVar105._0_4_;
          auVar198._0_4_ = fVar221 - *(float *)(lVar33 + 0x70);
          auVar198._4_4_ = auVar105._4_4_ - *(float *)(lVar33 + 0x74);
          auVar198._8_4_ = auVar105._8_4_ - *(float *)(lVar33 + 0x78);
          auVar198._12_4_ = auVar105._12_4_ - *(float *)(lVar33 + 0x7c);
          uVar222 = NEON_ext(uVar116,auVar106._0_8_,4,1);
          auVar106 = NEON_ext(auVar198,auVar198,4,1);
          fVar37 = auVar56._0_4_;
          fVar143 = (float)((ulong)uVar222 >> 0x20);
          fVar39 = fVar221 * (float)uVar222 - fVar37 * (float)uVar173;
          fVar114 = auVar105._4_4_ * fVar143 - auVar56._4_4_ * (float)((ulong)uVar173 >> 0x20);
          fVar220 = auVar105._8_4_ * fVar37 - auVar56._8_4_ * fVar221;
          fVar84 = fVar37 * auVar106._0_4_ - (float)uVar222 * auVar198._0_4_;
          fVar115 = auVar56._4_4_ * auVar106._4_4_ - fVar143 * auVar198._4_4_;
          fVar145 = auVar56._8_4_ * auVar198._0_4_ - fVar37 * auVar198._8_4_;
          auVar105 = *(undefined1 (*) [16])(lVar33 + 0x60);
          auVar106 = *(undefined1 (*) [16])(lVar33 + 0x30);
          fVar221 = *(float *)(lVar27 + 0x60) * fVar39 +
                    *(float *)(lVar27 + 0x40) * fVar114 + *(float *)(lVar27 + 0x50) * fVar220;
          fVar143 = *(float *)(lVar27 + 100) * fVar39 +
                    *(float *)(lVar27 + 0x44) * fVar114 + *(float *)(lVar27 + 0x54) * fVar220;
          fVar248 = *(float *)(lVar27 + 0x68) * fVar39 +
                    *(float *)(lVar27 + 0x48) * fVar114 + *(float *)(lVar27 + 0x58) * fVar220;
          fVar37 = *(float *)(lVar27 + 0x6c) * fVar39 +
                   *(float *)(lVar27 + 0x4c) * fVar114 + *(float *)(lVar27 + 0x5c) * fVar220;
          auVar225._0_4_ = *(float *)(lVar27 + 0x30) + auVar106._0_4_;
          auVar225._4_4_ = *(float *)(lVar27 + 0x34) + auVar106._4_4_;
          auVar225._8_4_ = *(float *)(lVar27 + 0x38) + auVar106._8_4_;
          auVar225._12_4_ = *(float *)(lVar27 + 0x3c) + auVar106._12_4_;
          fVar39 = auVar105._0_4_ * fVar84 +
                   *(float *)(lVar33 + 0x40) * fVar115 + *(float *)(lVar33 + 0x50) * fVar145;
          fVar114 = auVar105._4_4_ * fVar84 +
                    *(float *)(lVar33 + 0x44) * fVar115 + *(float *)(lVar33 + 0x54) * fVar145;
          auVar152._0_8_ = CONCAT44(fVar114,fVar39);
          auVar152._8_4_ =
               auVar105._8_4_ * fVar84 +
               *(float *)(lVar33 + 0x48) * fVar115 + *(float *)(lVar33 + 0x58) * fVar145;
          fVar220 = auVar105._12_4_ * fVar84 +
                    *(float *)(lVar33 + 0x4c) * fVar115 + *(float *)(lVar33 + 0x5c) * fVar145;
          auVar249._8_4_ = 0x28800000;
          auVar249._0_8_ = 0x2880000028800000;
          auVar249._12_4_ = 0x28800000;
          fVar39 = fVar221 * fVar221 * *(float *)(lVar27 + 0x30) + auVar106._0_4_ * fVar39 * fVar39;
          fVar114 = fVar143 * fVar143 * *(float *)(lVar27 + 0x34) +
                    auVar106._4_4_ * fVar114 * fVar114;
          auVar177._0_8_ = CONCAT44(fVar114,fVar39);
          auVar177._8_4_ =
               fVar248 * fVar248 * *(float *)(lVar27 + 0x38) +
               auVar106._8_4_ * auVar152._8_4_ * auVar152._8_4_;
          auVar177._12_4_ =
               fVar37 * fVar37 * *(float *)(lVar27 + 0x3c) + auVar106._12_4_ * fVar220 * fVar220;
          auVar105 = NEON_fmax(auVar225,auVar249,4);
          auVar226._8_8_ = auVar177._8_8_;
          auVar226._0_8_ = auVar177._0_8_;
          auVar227._0_12_ = auVar226._0_12_;
          auVar227._12_4_ = auVar105._12_4_;
          auVar105 = NEON_ext(auVar227,auVar227,8,1);
          fVar37 = fVar39 + fVar114 + auVar105._0_4_ + auVar105._4_4_;
          auVar152._12_4_ = fVar37;
          *(float *)(puVar20 + 3) = fVar248;
          *(float *)((long)puVar20 + 0x1c) = fVar40 / fVar37;
          *(float *)(puVar20 + 2) = fVar221;
          *(float *)((long)puVar20 + 0x14) = fVar143;
          puVar20[5] = auVar152._8_8_;
          puVar20[4] = auVar152._0_8_;
          auVar64._0_12_ = auVar56._0_12_;
          auVar64._12_4_ = *(float *)(lVar29 + 4) * *(float *)(param_6 + 0x1c);
          puVar20[1] = auVar64._8_8_;
          *puVar20 = uVar116;
          pfVar25 = (float *)*param_7;
          *param_7 = (long)(pfVar25 + 0x10);
          pfVar25[0xc] = fVar36 * *(float *)(param_6 + 4);
          *pfVar25 = *pfVar25 + 1.1920929e-07;
          *(undefined1 *)pfVar25 = 8;
        }
        param_1 = pfVar22 + 4;
        goto LAB_02f2a788;
      case 0xb:
        if (*(char *)((long)pfVar22 + 2) != '\0') {
          lVar27 = *(long *)(pfVar22 + 2);
          if ((lVar27 != 0) && (lVar27 = lVar27 + (long)(pfVar22 + 2), lVar27 != 0)) {
            puVar20 = (undefined8 *)*param_7;
            lVar29 = *(long *)(param_6 + 0x30);
            lVar33 = *(long *)(param_6 + 0x38);
            fVar36 = *(float *)param_3[3];
            fVar37 = *(float *)(param_3[3] + 4);
            fVar40 = *(float *)(param_3[3] + 8);
            fVar221 = *(float *)(param_3[3] + 0xc);
            fVar39 = *(float *)(lVar29 + 0x70);
            fVar114 = *(float *)(lVar29 + 0x74);
            fVar143 = *(float *)(lVar29 + 0x78);
            fVar220 = *(float *)(lVar29 + 0x7c);
            auVar56 = param_4[*(byte *)((long)pfVar22 + 3)];
            puVar20[1] = auVar56._8_8_;
            *puVar20 = auVar56._0_8_;
            auVar45._0_4_ = fVar36 - fVar39;
            auVar45._4_4_ = fVar37 - fVar114;
            auVar45._8_4_ = fVar40 - fVar143;
            auVar45._12_4_ = fVar221 - fVar220;
            auVar105 = NEON_ext(auVar56,auVar56,8,1);
            uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
            auVar105 = NEON_ext(auVar45,auVar45,4,1);
            auVar65._0_4_ = auVar45._0_4_ - *(float *)(lVar33 + 0x70);
            auVar65._4_4_ = auVar45._4_4_ - *(float *)(lVar33 + 0x74);
            auVar65._8_4_ = auVar45._8_4_ - *(float *)(lVar33 + 0x78);
            auVar65._12_4_ = auVar45._12_4_ - *(float *)(lVar33 + 0x7c);
            fVar37 = (float)((ulong)uVar116 >> 0x20);
            fVar221 = auVar56._0_4_;
            fVar36 = auVar45._0_4_ * (float)uVar116 - fVar221 * auVar105._0_4_;
            fVar40 = auVar45._4_4_ * fVar37 - auVar56._4_4_ * auVar105._4_4_;
            fVar39 = auVar45._8_4_ * fVar221 - auVar56._8_4_ * auVar45._0_4_;
            auVar105 = NEON_ext(auVar65,auVar65,4,1);
            fVar143 = fVar221 * auVar105._0_4_ - (float)uVar116 * auVar65._0_4_;
            fVar220 = auVar56._4_4_ * auVar105._4_4_ - fVar37 * auVar65._4_4_;
            fVar248 = auVar56._8_4_ * auVar65._0_4_ - fVar221 * auVar65._8_4_;
            auVar56 = *(undefined1 (*) [16])(lVar33 + 0x60);
            fVar37 = *(float *)(lVar29 + 0x60) * fVar36 +
                     *(float *)(lVar29 + 0x40) * fVar40 + *(float *)(lVar29 + 0x50) * fVar39;
            fVar221 = *(float *)(lVar29 + 100) * fVar36 +
                      *(float *)(lVar29 + 0x44) * fVar40 + *(float *)(lVar29 + 0x54) * fVar39;
            fVar114 = *(float *)(lVar29 + 0x68) * fVar36 +
                      *(float *)(lVar29 + 0x48) * fVar40 + *(float *)(lVar29 + 0x58) * fVar39;
            fVar36 = *(float *)(lVar29 + 0x6c) * fVar36 +
                     *(float *)(lVar29 + 0x4c) * fVar40 + *(float *)(lVar29 + 0x5c) * fVar39;
            fVar40 = auVar56._0_4_ * fVar143 +
                     *(float *)(lVar33 + 0x40) * fVar220 + *(float *)(lVar33 + 0x50) * fVar248;
            fVar39 = auVar56._4_4_ * fVar143 +
                     *(float *)(lVar33 + 0x44) * fVar220 + *(float *)(lVar33 + 0x54) * fVar248;
            fVar84 = auVar56._8_4_ * fVar143 +
                     *(float *)(lVar33 + 0x48) * fVar220 + *(float *)(lVar33 + 0x58) * fVar248;
            fVar143 = auVar56._12_4_ * fVar143 +
                      *(float *)(lVar33 + 0x4c) * fVar220 + *(float *)(lVar33 + 0x5c) * fVar248;
            auVar123._0_4_ = *(float *)(lVar29 + 0x30) + *(float *)(lVar33 + 0x30);
            auVar123._4_4_ = *(float *)(lVar29 + 0x34) + *(float *)(lVar33 + 0x34);
            auVar123._8_4_ = *(float *)(lVar29 + 0x38) + *(float *)(lVar33 + 0x38);
            auVar123._12_4_ = *(float *)(lVar29 + 0x3c) + *(float *)(lVar33 + 0x3c);
            auVar153._8_4_ = 0x28800000;
            auVar153._0_8_ = 0x2880000028800000;
            auVar153._12_4_ = 0x28800000;
            fVar220 = *(float *)(lVar29 + 0x30) * fVar37 * fVar37 +
                      *(float *)(lVar33 + 0x30) * fVar40 * fVar40;
            fVar248 = *(float *)(lVar29 + 0x34) * fVar221 * fVar221 +
                      *(float *)(lVar33 + 0x34) * fVar39 * fVar39;
            auVar92._0_8_ = CONCAT44(fVar248,fVar220);
            auVar92._8_4_ =
                 *(float *)(lVar29 + 0x38) * fVar114 * fVar114 +
                 *(float *)(lVar33 + 0x38) * fVar84 * fVar84;
            auVar92._12_4_ =
                 *(float *)(lVar29 + 0x3c) * fVar36 * fVar36 +
                 *(float *)(lVar33 + 0x3c) * fVar143 * fVar143;
            auVar56 = NEON_fmax(auVar123,auVar153,4);
            auVar154._8_8_ = auVar92._8_8_;
            auVar154._0_8_ = auVar92._0_8_;
            auVar155._0_12_ = auVar154._0_12_;
            auVar155._12_4_ = auVar56._12_4_;
            auVar56 = NEON_ext(auVar155,auVar155,8,1);
            uVar116 = NEON_fmov(0x3f800000,4);
            fVar36 = fVar220 + fVar248 + auVar56._0_4_ + auVar56._4_4_;
            fVar143 = (float)uVar116 / fVar36;
            *(float *)(puVar20 + 3) = fVar114;
            *(float *)((long)puVar20 + 0x1c) = fVar143;
            *(float *)(puVar20 + 2) = fVar37;
            *(float *)((long)puVar20 + 0x14) = fVar221;
            *(float *)(puVar20 + 5) = fVar84;
            *(float *)((long)puVar20 + 0x2c) = fVar36;
            *(float *)(puVar20 + 4) = fVar40;
            *(float *)((long)puVar20 + 0x24) = fVar39;
            local_c0 = CONCAT44(local_c0._4_4_,fVar143);
            lVar29 = param_7[2];
            pfVar25 = (float *)(lVar29 + *(short *)((long)pfVar22 + 6));
            if (*(char *)(lVar29 + *(short *)(pfVar22 + 1)) == '\0') {
              *(undefined1 *)(*(short *)(pfVar22 + 1) + lVar29) = 1;
              pfVar31 = pfVar22 + 4;
            }
            else {
              pfVar31 = pfVar25;
            }
            local_b0 = *(undefined8 *)*plVar1;
            fStack_a8 = pfVar22[4] - *pfVar31;
            pauVar5 = param_4 + *(byte *)((long)pfVar22 + 3);
            auVar78._0_4_ = (*(float *)param_3[3] - *(float *)param_4[3]) * *(float *)*pauVar5;
            auVar78._4_4_ =
                 (*(float *)(param_3[3] + 4) - *(float *)(param_4[3] + 4)) *
                 *(float *)(*pauVar5 + 4);
            auVar78._8_4_ =
                 (*(float *)(param_3[3] + 8) - *(float *)(param_4[3] + 8)) *
                 *(float *)(*pauVar5 + 8);
            auVar78._12_4_ =
                 (*(float *)(param_3[3] + 0xc) - *(float *)(param_4[3] + 0xc)) *
                 *(float *)(*pauVar5 + 0xc);
            auVar56 = NEON_ext(auVar78,auVar78,8,1);
            fStack_a4 = *pfVar31 - (auVar78._0_4_ + auVar78._4_4_ + auVar56._0_4_);
            uStack_b8 = param_6;
            FUN_02f2c780(lVar27,&local_c0,&local_e0);
            if (param_5 != (int *)0x0) {
              iVar219 = *param_5;
              lVar27 = *param_7;
              *(undefined8 *)(param_5 + (long)iVar219 * 6 + 5) = local_d0;
              *(long *)(param_5 + (long)iVar219 * 6 + 3) = local_d8;
              *(ulong *)(param_5 + (long)iVar219 * 6 + 1) = CONCAT44(fStack_dc,local_e0);
              *(long *)(param_5 + (long)*param_5 * 2 + 0x26) = lVar27;
              iVar219 = 6;
              if (*param_5 < 6) {
                iVar219 = *param_5 + 1;
              }
              *param_5 = iVar219;
            }
            *(float *)((long)puVar20 + 0xc) = local_e0 * *(float *)(param_6 + 8);
            pfVar31 = (float *)*param_7;
            *pfVar31 = *pfVar31 + 1.1920929e-07;
            *(undefined1 *)pfVar31 = 9;
            pfVar31[0xc] = (float)local_d8 * *(float *)(param_6 + 4);
            pfVar31[0xd] = local_d8._4_4_ * *(float *)(param_6 + 4);
            pfVar31[0xe] = fStack_dc;
            pfVar31[0xf] = (float)local_d0;
            pfVar31[0x10] = local_d0._4_4_;
            *param_7 = (long)(pfVar31 + 0x14);
            *pfVar25 = pfVar22[4];
            goto LAB_02f2a784;
          }
        }
LAB_02f27e38:
        pfVar25 = (float *)*param_7;
        *pfVar25 = *pfVar25 + 1.1920929e-07;
        *(undefined1 *)pfVar25 = 3;
        *(undefined1 *)(pfVar25 + 1) = 2;
        *param_7 = (long)(pfVar25 + 4);
        goto LAB_02f2a784;
      case 0xc:
        bVar280 = *(byte *)((long)pfVar22 + 2);
        local_c0 = *(undefined8 *)param_3[bVar280];
        uStack_b8 = *(long *)(param_3[bVar280] + 8);
        bVar281 = (&DAT_03d6cdd3)[bVar280];
        local_a0 = *(undefined8 *)(*param_4 + bVar281);
        uStack_98 = *(undefined8 *)((long)(*param_4 + bVar281) + 8);
        bVar280 = (&DAT_03d6cdd4)[bVar280];
        local_90 = CONCAT44(pfVar22[2] * *(float *)(param_6 + 0x74),
                            pfVar22[1] * *(float *)(param_6 + 0x70));
        auVar56 = *(undefined1 (*) [16])(*param_4 + bVar280);
        fStack_a8 = auVar56._8_4_;
        fStack_a4 = auVar56._12_4_;
        local_b0 = auVar56._0_8_;
        FUN_02f25f90(&local_c0,param_6,param_7);
        local_a0 = *(undefined8 *)(*param_4 + bVar280);
        uStack_98 = *(undefined8 *)((long)(*param_4 + bVar280) + 8);
        pfVar25 = (float *)(*param_4 + bVar281);
        local_b0 = CONCAT44(-pfVar25[1],-*pfVar25);
        fStack_a8 = -pfVar25[2];
        fStack_a4 = -pfVar25[3];
        FUN_02f25f90(&local_c0,param_6,param_7);
        lVar27 = param_7[1] + 0x10;
        param_1 = pfVar22 + 4;
        goto LAB_02f2a080;
      case 0xd:
        cVar4 = *(char *)((long)pfVar22 + 5);
        if (cVar4 == '\x02') {
          bVar280 = *(byte *)(pfVar22 + 1);
          local_c0 = *(undefined8 *)param_3[bVar280];
          uStack_b8 = *(long *)(param_3[bVar280] + 8);
          bVar281 = (&DAT_03d6cdd3)[bVar280];
          local_a0 = *(undefined8 *)(*param_4 + bVar281);
          uStack_98 = *(undefined8 *)((long)(*param_4 + bVar281) + 8);
          bVar280 = (&DAT_03d6cdd4)[bVar280];
          local_90 = CONCAT44(pfVar22[3] * *(float *)(param_6 + 0x74),
                              pfVar22[2] * *(float *)(param_6 + 0x70));
          auVar56 = *(undefined1 (*) [16])(*param_4 + bVar280);
          fStack_a8 = auVar56._8_4_;
          fStack_a4 = auVar56._12_4_;
          local_b0 = auVar56._0_8_;
          FUN_02f25f90(&local_c0,param_6,param_7);
          local_a0 = *(undefined8 *)(*param_4 + bVar280);
          uStack_98 = *(undefined8 *)((long)(*param_4 + bVar280) + 8);
          pfVar25 = (float *)(*param_4 + bVar281);
          local_b0 = CONCAT44(-pfVar25[1],-*pfVar25);
          fStack_a8 = -pfVar25[2];
          fStack_a4 = -pfVar25[3];
LAB_02f29414:
          FUN_02f25f90(&local_c0,param_6,param_7);
        }
        else {
          if (cVar4 == '\x01') {
            auVar56 = param_3[*(byte *)((long)pfVar22 + 3)];
            auVar105 = NEON_ext(auVar56,auVar56,8,1);
            uStack_b8 = auVar56._8_8_;
            local_c0 = auVar56._0_8_;
            uVar116 = NEON_ext(local_c0,auVar105._0_8_,4,1);
            auVar105 = param_4[*(byte *)(pfVar22 + 1)];
            auVar106 = NEON_ext(auVar105,auVar105,8,1);
            local_a0 = auVar105._0_8_;
            uVar173 = NEON_ext(local_a0,auVar106._0_8_,4,1);
            auVar46._0_4_ = auVar56._0_4_ * (float)uVar173 - (float)uVar116 * auVar105._0_4_;
            auVar46._4_4_ =
                 auVar56._4_4_ * (float)((ulong)uVar173 >> 0x20) -
                 (float)((ulong)uVar116 >> 0x20) * auVar105._4_4_;
            auVar46._8_4_ = auVar56._8_4_ * auVar105._0_4_ - auVar56._0_4_ * auVar105._8_4_;
            auVar46._12_4_ = auVar56._12_4_ * auVar105._4_4_ - auVar56._4_4_ * auVar105._12_4_;
            auVar56 = NEON_ext(auVar46,auVar46,4,1);
            local_b0 = auVar56._0_8_;
            fStack_a4 = 0.0;
            uStack_98 = auVar105._8_8_;
            local_90 = CONCAT44(*(float *)(param_6 + 0x74) * pfVar22[3],
                                *(float *)(param_6 + 0x70) * pfVar22[2]);
            fStack_a8 = auVar46._0_4_;
            goto LAB_02f29414;
          }
          local_90 = *(undefined8 *)(pfVar22 + 2);
          if (cVar4 != '\0') {
            uVar85 = 0;
            do {
              bVar280 = *(byte *)((long)pfVar22 + uVar85 + 2);
              local_b0 = *(undefined8 *)(*param_3 + (byte)(&DAT_03d6cdd2)[bVar280]);
              uVar116 = *(undefined8 *)((long)(*param_3 + (byte)(&DAT_03d6cdd2)[bVar280]) + 8);
              fStack_a8 = (float)uVar116;
              fStack_a4 = (float)((ulong)uVar116 >> 0x20);
              local_c0 = *(undefined8 *)(*param_3 + (byte)(&DAT_03d6cdd3)[bVar280]);
              uStack_b8 = *(long *)((long)(*param_3 + (byte)(&DAT_03d6cdd3)[bVar280]) + 8);
              uStack_98 = SUB168(*(undefined1 (*) [16])(*param_4 + (byte)(&DAT_03d6cdd4)[bVar280]),8
                                );
              local_a0 = SUB168(*(undefined1 (*) [16])(*param_4 + (byte)(&DAT_03d6cdd4)[bVar280]),0)
              ;
              FUN_02f25f90(&local_c0,param_6,param_7);
              uVar85 = uVar85 + 1;
            } while (uVar85 < *(byte *)((long)pfVar22 + 5));
          }
        }
        lVar27 = *plVar1 + (ulong)*(byte *)((long)pfVar22 + 5) * 8;
        goto LAB_02f294b8;
      case 0xe:
        if (*(char *)((long)pfVar22 + 2) == '\0') goto LAB_02f28a70;
        auVar228._8_4_ = 0x800000;
        auVar228._0_8_ = 0x80000000800000;
        auVar228._12_4_ = 0x800000;
        auVar56 = param_4[*(byte *)((long)pfVar22 + 3)];
        auVar105 = param_4[*(byte *)(pfVar22 + 1)];
        auVar106 = NEON_ext(auVar56,auVar56,8,1);
        pauVar5 = param_3 + *(byte *)(pfVar22 + 1);
        uVar116 = NEON_ext(auVar56._0_8_,auVar106._0_8_,4,1);
        auVar106 = NEON_ext(auVar105,auVar105,8,1);
        uVar173 = NEON_ext(auVar105._0_8_,auVar106._0_8_,4,1);
        fVar36 = auVar105._0_4_;
        fVar40 = auVar105._4_4_;
        fVar248 = auVar56._0_4_;
        fVar84 = auVar56._4_4_;
        fVar37 = auVar56._8_4_;
        auVar124._0_4_ = fVar248 * (float)uVar173 - fVar36 * (float)uVar116;
        auVar124._4_4_ =
             fVar84 * (float)((ulong)uVar173 >> 0x20) - fVar40 * (float)((ulong)uVar116 >> 0x20);
        auVar124._8_4_ = fVar37 * fVar36 - auVar105._8_4_ * fVar248;
        auVar124._12_4_ = auVar56._12_4_ * fVar40 - auVar105._12_4_ * fVar84;
        auVar56 = NEON_ext(auVar124,auVar124,4,1);
        fVar39 = *(float *)*pauVar5 * auVar56._0_4_;
        fVar143 = *(float *)(*pauVar5 + 4) * auVar56._4_4_;
        fVar220 = *(float *)(*pauVar5 + 8) * auVar124._0_4_;
        fVar36 = *(float *)*pauVar5 * fVar36;
        fVar40 = *(float *)(*pauVar5 + 4) * fVar40;
        fVar221 = *(float *)(*pauVar5 + 8) * auVar105._8_4_;
        fVar114 = fVar39 + fVar143 + fVar220;
        fVar220 = fVar39 + fVar143 + fVar220;
        fVar39 = fVar221 + fVar36 + fVar40;
        fVar221 = fVar221 + fVar36 + fVar40;
        auVar93._0_4_ = ABS(fVar39);
        auVar93._4_4_ = ABS(fVar221);
        auVar93._8_4_ = ABS(fVar39);
        auVar93._12_4_ = ABS(fVar221);
        auVar178._0_4_ = ABS(fVar114);
        auVar178._4_4_ = ABS(fVar220);
        auVar178._8_4_ = ABS(fVar114);
        auVar178._12_4_ = ABS(fVar220);
        auVar105 = NEON_fmax(auVar93,auVar178,4);
        auVar56 = NEON_fmin(auVar93,auVar178,4);
        auVar105 = NEON_fmax(auVar105,auVar228,4);
        fVar36 = auVar56._0_4_ / auVar105._0_4_;
        fVar40 = fVar36 * fVar36;
        fVar115 = *(float *)(param_6 + 0x74);
        fVar220 = pfVar22[5];
        fVar36 = fVar36 + (fVar40 * (fVar40 + -1.0048817) + 3.768408) *
                          (fVar40 * (fVar40 + -3.8319519) + 5.503148) *
                          fVar36 * fVar40 * (fVar40 * 0.0028662258 + -0.007186844) *
                          (fVar40 * (fVar40 + 1.7041799) + 2.2365003);
        fVar40 = *(float *)(param_6 + 0x70) * pfVar22[4];
        fVar36 = (float)((uint)fVar36 ^
                        ((uint)fVar36 ^ (uint)(1.5707964 - fVar36)) &
                        -(uint)(auVar93._0_4_ < auVar178._0_4_));
        fVar143 = pfVar22[2];
        fVar221 = pfVar22[3];
        uVar11 = (uint)fVar36 ^ ((uint)fVar36 ^ (uint)(3.1415927 - fVar36)) & -(uint)(fVar39 <= 0.0)
        ;
        fVar36 = (float)CONCAT13((byte)(-(uint)(fVar114 < 0.0) >> 0x18) & 0x80 ^
                                 (byte)(uVar11 >> 0x18),(int3)uVar11);
        if (*plVar1 != 0) {
          fVar39 = -*(float *)(*plVar1 + 4);
          uVar116 = NEON_fminnm(CONCAT44(fVar39,fVar39),0x46f56fdb46f56fdb,4);
          uVar116 = NEON_fmax(uVar116,0xc6f56fdbc6f56fdb,4);
          uVar116 = CONCAT44(fVar36 - (float)((ulong)uVar116 >> 0x20),fVar36 - (float)uVar116);
          fVar39 = 0.0;
          do {
            fVar145 = (float)(int)(((float)uVar116 + 3.1415927) * 0.15915494);
            fVar114 = (float)uVar116 + fVar145 * -6.2831855;
            uVar116 = CONCAT44((float)((ulong)uVar116 >> 0x20) + fVar145 * -6.2831855,fVar114);
            uVar173 = NEON_fminnm(uVar116,0x40490fdb40490fdb,4);
            uVar173 = NEON_fmax(uVar173,0xc0490fdbc0490fdb,4);
            fVar39 = fVar39 + fVar145;
          } while ((float)uVar173 != fVar114);
          fVar36 = fVar36 + fVar39 * -6.2831855;
        }
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x60);
        pfVar25 = (float *)*param_7;
        fVar39 = -fVar248;
        fVar114 = -fVar84;
        fVar145 = -fVar37;
        fVar171 = *(float *)(lVar27 + 0x60) * fVar37 +
                  *(float *)(lVar27 + 0x40) * fVar248 + *(float *)(lVar27 + 0x50) * fVar84;
        fVar300 = *(float *)(lVar27 + 100) * fVar37 +
                  *(float *)(lVar27 + 0x44) * fVar248 + *(float *)(lVar27 + 0x54) * fVar84;
        fVar314 = *(float *)(lVar27 + 0x68) * fVar37 +
                  *(float *)(lVar27 + 0x48) * fVar248 + *(float *)(lVar27 + 0x58) * fVar84;
        fVar318 = *(float *)(lVar27 + 0x6c) * fVar37 +
                  *(float *)(lVar27 + 0x4c) * fVar248 + *(float *)(lVar27 + 0x5c) * fVar84;
        fVar37 = auVar56._0_4_ * fVar145 +
                 *(float *)(lVar29 + 0x40) * fVar39 + *(float *)(lVar29 + 0x50) * fVar114;
        fVar248 = auVar56._4_4_ * fVar145 +
                  *(float *)(lVar29 + 0x44) * fVar39 + *(float *)(lVar29 + 0x54) * fVar114;
        fVar84 = auVar56._8_4_ * fVar145 +
                 *(float *)(lVar29 + 0x48) * fVar39 + *(float *)(lVar29 + 0x58) * fVar114;
        fVar39 = auVar56._12_4_ * fVar145 +
                 *(float *)(lVar29 + 0x4c) * fVar39 + *(float *)(lVar29 + 0x5c) * fVar114;
        pfVar25[6] = fVar84;
        pfVar25[7] = fVar39;
        pfVar25[4] = fVar37;
        pfVar25[5] = fVar248;
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x30);
        auVar47._0_4_ =
             fVar171 * fVar171 * *(float *)(lVar27 + 0x30) + fVar37 * fVar37 * auVar56._0_4_;
        auVar47._4_4_ =
             fVar300 * fVar300 * *(float *)(lVar27 + 0x34) + fVar248 * fVar248 * auVar56._4_4_;
        auVar47._8_4_ =
             fVar314 * fVar314 * *(float *)(lVar27 + 0x38) + fVar84 * fVar84 * auVar56._8_4_;
        auVar47._12_4_ =
             fVar318 * fVar318 * *(float *)(lVar27 + 0x3c) + fVar39 * fVar39 * auVar56._12_4_;
        auVar56 = NEON_ext(auVar47,auVar47,8,1);
        uVar116 = NEON_fmov(0x3f800000,4);
        pfVar25[2] = fVar314;
        pfVar25[3] = (float)uVar116 /
                     (auVar47._0_4_ + auVar47._4_4_ + auVar56._0_4_ + 1.1920929e-07);
        *pfVar25 = fVar171;
        pfVar25[1] = fVar300;
        fVar37 = -*(float *)(param_6 + 8);
        pfVar25[7] = fVar37 * fVar36;
        *param_7 = (long)(pfVar25 + 0xc);
        pfVar25[8] = fVar40 * fVar143 * fVar37;
        pfVar25[9] = fVar40 * fVar221 * fVar37;
        pfVar25[10] = fVar40;
        pfVar25[0xb] = fVar115 * fVar220;
LAB_02f27978:
        *pfVar25 = *pfVar25 + 1.1920929e-07;
        *(undefined1 *)pfVar25 = 0xd;
        goto LAB_02f29380;
      case 0xf:
        if (*(char *)((long)pfVar22 + 2) != '\0') {
          fVar37 = pfVar22[2];
          fVar36 = pfVar22[3];
          fVar40 = 0.0;
          auVar125 = param_4[*(byte *)((long)pfVar22 + 3)];
          pauVar5 = param_3 + *(byte *)((long)pfVar22 + 3);
          fVar39 = auVar125._0_4_ + *(float *)*pauVar5;
          fVar114 = auVar125._4_4_ + *(float *)(*pauVar5 + 4);
          fVar143 = auVar125._8_4_ + *(float *)(*pauVar5 + 8);
          fVar221 = auVar125._12_4_;
          fVar220 = SQRT(fVar39 * fVar39 + fVar114 * fVar114 + fVar143 * fVar143);
          fVar248 = SQRT(fVar39 * fVar39 + fVar114 * fVar114 + fVar143 * fVar143);
          if (1e-16 < fVar220) {
            fVar40 = fVar220 * 0.5;
            auVar125._0_4_ = fVar39 / fVar220;
            auVar125._4_4_ = fVar114 / fVar248;
            auVar125._8_4_ = fVar143 / fVar220;
            auVar125._12_4_ = (fVar221 + *(float *)(*pauVar5 + 0xc)) / fVar248;
          }
          auVar56 = param_4[*(byte *)(pfVar22 + 1)];
          auVar105 = NEON_ext(auVar56,auVar56,8,1);
          auVar106 = NEON_ext(auVar125,auVar125,4,1);
          uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
          fVar115 = auVar125._0_4_;
          fVar145 = auVar125._4_4_;
          fVar221 = auVar125._8_4_;
          fVar220 = fVar115 * (float)uVar116 - auVar56._0_4_ * auVar106._0_4_;
          auVar199._0_8_ =
               CONCAT44(fVar145 * (float)((ulong)uVar116 >> 0x20) - auVar56._4_4_ * auVar106._4_4_,
                        fVar220);
          auVar199._8_4_ = fVar221 * auVar56._0_4_ - auVar56._8_4_ * fVar115;
          auVar199._12_4_ = auVar125._12_4_ * auVar56._4_4_ - auVar56._12_4_ * fVar145;
          auVar56 = NEON_ext(auVar199,auVar199,4,1);
          uVar116 = NEON_ext(auVar56._0_8_,auVar199._0_8_,4,1);
          fVar39 = auVar56._0_4_;
          fVar114 = auVar56._4_4_;
          auVar200._0_4_ = auVar106._0_4_ * fVar39 - fVar115 * (float)uVar116;
          auVar200._4_4_ = auVar106._4_4_ * fVar114 - fVar145 * (float)((ulong)uVar116 >> 0x20);
          auVar200._8_4_ = fVar115 * fVar220 - fVar221 * fVar39;
          auVar200._12_4_ = fVar145 * 0.0 - auVar125._12_4_ * fVar114;
          auVar56 = NEON_ext(auVar200,auVar200,4,1);
          pauVar5 = param_3 + *(byte *)(pfVar22 + 1);
          lVar27 = *(long *)(param_6 + 0x30);
          lVar29 = *(long *)(param_6 + 0x38);
          fVar39 = *(float *)*pauVar5 * fVar39;
          fVar114 = *(float *)(*pauVar5 + 4) * fVar114;
          fVar220 = *(float *)(*pauVar5 + 8) * fVar220;
          fVar143 = fVar39 + fVar114 + fVar220;
          fVar220 = fVar39 + fVar114 + fVar220;
          fVar39 = *(float *)*pauVar5 * auVar56._0_4_;
          fVar114 = *(float *)(*pauVar5 + 4) * auVar56._4_4_;
          fVar84 = *(float *)(*pauVar5 + 8) * auVar200._0_4_;
          fVar248 = fVar39 + fVar114 + fVar84;
          fVar84 = fVar39 + fVar114 + fVar84;
          auVar229._0_4_ = ABS(fVar143);
          auVar229._4_4_ = ABS(fVar220);
          auVar229._8_4_ = ABS(fVar143);
          auVar229._12_4_ = ABS(fVar220);
          fVar39 = -fVar115;
          fVar114 = -fVar145;
          fVar220 = -fVar221;
          auVar268._0_4_ = ABS(fVar248);
          auVar268._4_4_ = ABS(fVar84);
          auVar268._8_4_ = ABS(fVar248);
          auVar268._12_4_ = ABS(fVar84);
          auVar303._8_4_ = 0x800000;
          auVar303._0_8_ = 0x80000000800000;
          auVar303._12_4_ = 0x800000;
          auVar56 = NEON_fmax(auVar268,auVar229,4);
          fVar171 = *(float *)(lVar27 + 0x60) * fVar221 +
                    *(float *)(lVar27 + 0x40) * fVar115 + *(float *)(lVar27 + 0x50) * fVar145;
          fVar300 = *(float *)(lVar27 + 100) * fVar221 +
                    *(float *)(lVar27 + 0x44) * fVar115 + *(float *)(lVar27 + 0x54) * fVar145;
          auVar250._0_8_ = CONCAT44(fVar300,fVar171);
          auVar250._8_4_ =
               *(float *)(lVar27 + 0x68) * fVar221 +
               *(float *)(lVar27 + 0x48) * fVar115 + *(float *)(lVar27 + 0x58) * fVar145;
          fVar314 = *(float *)(lVar27 + 0x6c) * fVar221 +
                    *(float *)(lVar27 + 0x4c) * fVar115 + *(float *)(lVar27 + 0x5c) * fVar145;
          auVar56 = NEON_fmax(auVar56,auVar303,4);
          auVar105 = NEON_fmin(auVar268,auVar229,4);
          fVar221 = auVar105._0_4_ / auVar56._0_4_;
          fVar115 = fVar221 * fVar221;
          fVar84 = (fVar37 + fVar36) * 0.5;
          fVar221 = fVar221 + (fVar115 * (fVar115 + -1.0048817) + 3.768408) *
                              (fVar115 * (fVar115 + -3.8319519) + 5.503148) *
                              fVar221 * fVar115 * (fVar115 * 0.0028662258 + -0.007186844) *
                              (fVar115 * (fVar115 + 1.7041799) + 2.2365003);
          fVar221 = (float)((uint)fVar221 ^
                           ((uint)fVar221 ^ (uint)(1.5707964 - fVar221)) &
                           -(uint)(auVar268._0_4_ < auVar229._0_4_));
          fVar301 = *(float *)(param_6 + 0x74);
          pfVar25 = (float *)*param_7;
          uVar11 = (uint)fVar221 ^
                   ((uint)fVar221 ^ (uint)(3.1415927 - fVar221)) & -(uint)(fVar248 <= 0.0);
          fVar115 = (float)CONCAT13((byte)(-(uint)(fVar143 < 0.0) >> 0x18) & 0x80 ^
                                    (byte)(uVar11 >> 0x18),(int3)uVar11);
          fVar145 = (float)((uint)fVar115 ^
                           ((uint)fVar115 ^ (uint)(fVar115 + -6.2831855)) &
                           -(uint)(fVar84 + 3.1415927 < fVar115));
          fVar318 = pfVar22[5];
          fVar221 = *(float *)(lVar29 + 0x60) * fVar220 +
                    *(float *)(lVar29 + 0x40) * fVar39 +
                    (float)*(undefined8 *)(lVar29 + 0x50) * fVar114;
          fVar143 = *(float *)(lVar29 + 100) * fVar220 +
                    *(float *)(lVar29 + 0x44) * fVar39 +
                    (float)((ulong)*(undefined8 *)(lVar29 + 0x50) >> 0x20) * fVar114;
          fVar248 = *(float *)(lVar29 + 0x68) * fVar220 +
                    *(float *)(lVar29 + 0x48) * fVar39 +
                    (float)*(undefined8 *)(lVar29 + 0x58) * fVar114;
          fVar39 = *(float *)(lVar29 + 0x6c) * fVar220 +
                   *(float *)(lVar29 + 0x4c) * fVar39 +
                   (float)((ulong)*(undefined8 *)(lVar29 + 0x58) >> 0x20) * fVar114;
          fVar40 = fVar40 * fVar40 * *(float *)(param_6 + 0x70) * pfVar22[4];
          pfVar25[6] = fVar248;
          pfVar25[7] = fVar39;
          pfVar25[4] = fVar221;
          pfVar25[5] = fVar143;
          auVar126._0_4_ =
               fVar171 * fVar171 * *(float *)(lVar27 + 0x30) +
               fVar221 * fVar221 * *(float *)(lVar29 + 0x30);
          auVar126._4_4_ =
               fVar300 * fVar300 * *(float *)(lVar27 + 0x34) +
               fVar143 * fVar143 * *(float *)(lVar29 + 0x34);
          auVar126._8_4_ =
               auVar250._8_4_ * auVar250._8_4_ * *(float *)(lVar27 + 0x38) +
               fVar248 * fVar248 * *(float *)(lVar29 + 0x38);
          auVar126._12_4_ =
               fVar314 * fVar314 * *(float *)(lVar27 + 0x3c) +
               fVar39 * fVar39 * *(float *)(lVar29 + 0x3c);
          auVar56 = NEON_ext(auVar126,auVar126,8,1);
          uVar116 = NEON_fmov(0x3f800000,4);
          auVar250._12_4_ =
               (float)uVar116 / (auVar126._0_4_ + auVar126._4_4_ + auVar56._0_4_ + 1.1920929e-07);
          *(long *)(pfVar25 + 2) = auVar250._8_8_;
          *(undefined8 *)pfVar25 = auVar250._0_8_;
          fVar221 = -*(float *)(param_6 + 8);
          pfVar25[7] = fVar221 * (float)((uint)fVar145 ^
                                        ((uint)fVar145 ^ (uint)(fVar145 + 6.2831855)) &
                                        -(uint)(fVar115 < fVar84 + -3.1415927));
          *param_7 = (long)(pfVar25 + 0xc);
          pfVar25[8] = fVar40 * fVar37 * fVar221;
          pfVar25[9] = fVar40 * fVar36 * fVar221;
          pfVar25[10] = fVar40;
          pfVar25[0xb] = fVar301 * fVar318;
          goto LAB_02f27978;
        }
LAB_02f28a70:
        pfVar25 = (float *)*param_7;
        *pfVar25 = *pfVar25 + 1.1920929e-07;
        *(undefined1 *)pfVar25 = 3;
        *(undefined1 *)(pfVar25 + 1) = 1;
        *param_7 = (long)(pfVar25 + 4);
        goto LAB_02f29380;
      case 0x10:
        if (*(char *)((long)pfVar22 + 2) == '\0') {
          pfVar25 = (float *)*param_7;
          *pfVar25 = *pfVar25 + 1.1920929e-07;
          *(undefined1 *)pfVar25 = 3;
          *(undefined1 *)(pfVar25 + 1) = 1;
          *param_7 = (long)(pfVar25 + 4);
        }
        else {
          pfVar25 = (float *)*param_7;
          *param_7 = (long)(pfVar25 + 0x14);
          lVar27 = *(long *)(param_6 + 0x30);
          lVar29 = *(long *)(param_6 + 0x38);
          pauVar5 = param_3 + *(byte *)((long)pfVar22 + 3);
          fVar39 = *(float *)*pauVar5;
          fVar114 = *(float *)(*pauVar5 + 4);
          fVar143 = *(float *)(*pauVar5 + 8);
          fVar220 = *(float *)(lVar27 + 0x40);
          fVar248 = *(float *)(lVar27 + 0x44);
          fVar84 = *(float *)(lVar27 + 0x48);
          fVar115 = *(float *)(lVar27 + 0x50);
          fVar145 = *(float *)(lVar27 + 0x54);
          fVar171 = *(float *)(lVar27 + 0x58);
          fVar300 = *(float *)(lVar29 + 0x40);
          fVar314 = *(float *)(lVar29 + 0x44);
          fVar318 = *(float *)(lVar29 + 0x48);
          fVar301 = *(float *)(lVar29 + 0x50);
          fVar265 = *(float *)(lVar29 + 0x54);
          fVar299 = *(float *)(lVar29 + 0x58);
          pauVar5 = param_4 + *(byte *)(pfVar22 + 1);
          fVar218 = *(float *)*pauVar5;
          fVar285 = *(float *)(*pauVar5 + 4);
          fVar38 = *(float *)(*pauVar5 + 8);
          fVar144 = *(float *)(lVar27 + 0x60);
          fVar168 = *(float *)(lVar27 + 100);
          fVar169 = *(float *)(lVar27 + 0x68);
          fVar328 = *(float *)(lVar29 + 0x60);
          fVar329 = *(float *)(lVar29 + 100);
          fVar331 = *(float *)(lVar29 + 0x68);
          fVar344 = fVar144 * fVar331 + fVar220 * fVar318 + fVar115 * fVar299;
          fVar343 = fVar168 * fVar331 + fVar248 * fVar318 + fVar145 * fVar299;
          fVar170 = fVar169 * fVar331 + fVar84 * fVar318 + fVar171 * fVar299;
          fVar192 = pfVar22[2];
          fVar36 = fVar144 * fVar329 + fVar220 * fVar314 + fVar115 * fVar265;
          fVar40 = fVar168 * fVar329 + fVar248 * fVar314 + fVar145 * fVar265;
          fVar221 = fVar169 * fVar329 + fVar84 * fVar314 + fVar171 * fVar265;
          auVar56 = *(undefined1 (*) [16])(pfVar22 + 6);
          fVar336 = fVar144 * fVar328 + fVar220 * fVar300 + fVar115 * fVar301;
          fVar37 = fVar168 * fVar328 + fVar248 * fVar300 + fVar145 * fVar301;
          fVar338 = fVar169 * fVar328 + fVar84 * fVar300 + fVar171 * fVar301;
          fVar193 = *(float *)(param_6 + 0x70);
          if (fVar170 < 0.0) {
            uVar116 = NEON_fmov(0x3f800000,4);
            fVar37 = fVar37 + fVar36;
            fVar36 = (float)uVar116 - fVar170;
            if (fVar336 <= fVar40) {
              fVar36 = fVar36 - (fVar336 - fVar40);
              fVar284 = fVar221 + fVar343;
              fVar170 = fVar344 - fVar338;
              fVar83 = fVar37;
            }
            else {
              fVar284 = fVar338 + fVar344;
              fVar170 = fVar221 - fVar343;
              fVar83 = (fVar336 - fVar40) + fVar36;
              fVar36 = fVar37;
            }
          }
          else {
            uVar116 = NEON_fmov(0x3f800000,4);
            fVar37 = fVar37 - fVar36;
            fVar170 = fVar170 + (float)uVar116;
            if (-fVar40 <= fVar336) {
              fVar170 = fVar336 + fVar40 + fVar170;
              fVar83 = fVar221 - fVar343;
              fVar36 = fVar344 - fVar338;
              fVar284 = fVar37;
            }
            else {
              fVar83 = fVar338 + fVar344;
              fVar36 = fVar221 + fVar343;
              fVar284 = fVar170 - (fVar336 + fVar40);
              fVar170 = fVar37;
            }
          }
          auVar76._0_8_ =
               CONCAT44(fVar168 * fVar143 + fVar248 * fVar39 + fVar145 * fVar114,
                        fVar144 * fVar143 + fVar220 * fVar39 + fVar115 * fVar114);
          auVar76._8_4_ = fVar169 * fVar143 + fVar84 * fVar39 + fVar171 * fVar114;
          fVar220 = fVar143 * fVar38 + fVar39 * fVar218 + fVar114 * fVar285;
          fVar39 = fVar143 * fVar38 + fVar39 * fVar218 + fVar114 * fVar285;
          fVar37 = fVar83 * fVar83 + fVar36 * fVar36;
          fVar221 = fVar284 * fVar284 + fVar170 * fVar170;
          auVar104._0_8_ =
               CONCAT44(fVar329 * fVar38 + fVar314 * fVar218 + fVar265 * fVar285,
                        fVar328 * fVar38 + fVar300 * fVar218 + fVar301 * fVar285);
          auVar104._8_4_ = fVar331 * fVar38 + fVar318 * fVar218 + fVar299 * fVar285;
          fVar40 = fVar37 + fVar221;
          auVar244 = ZEXT816(0);
          if (fVar40 != 0.0) {
            fVar40 = SQRT(fVar40);
            fVar37 = SQRT(fVar37 + fVar221);
            auVar244._0_4_ = fVar83 / fVar40;
            auVar244._4_4_ = fVar36 / fVar37;
            auVar244._8_4_ = fVar284 / fVar40;
            auVar244._12_4_ = fVar170 / fVar37;
          }
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar36 = auVar56._0_4_;
          fVar37 = auVar56._4_4_;
          fVar40 = auVar56._8_4_;
          fVar221 = auVar56._12_4_;
          uVar85 = CONCAT17((char)(-(uint)(fVar37 < 0.0) >> 0x18),
                            (uint7)((byte)(-(uint)(fVar36 < 0.0) >> 0x18) & 0x80) << 0x18) &
                   0x80ffffffffffffff;
          bVar282 = (byte)(-(uint)(fVar40 < 0.0) >> 0x18) & 0x80;
          bVar283 = (byte)(-(uint)(fVar221 < 0.0) >> 0x18) & 0x80;
          uVar116 = NEON_fmax(CONCAT44((float)((ulong)uVar116 >> 0x20) - fVar39 * fVar39,
                                       (float)uVar116 - fVar220 * fVar220),0,4);
          fVar114 = SQRT((float)((ulong)uVar116 >> 0x20));
          auVar104._12_4_ = pfVar22[3] * *(float *)(param_6 + 0x74);
          bVar280 = (byte)(uVar85 >> 0x18);
          bVar313 = (byte)((uint)fVar220 >> 0x18);
          fVar143 = (float)CONCAT13(bVar280 ^ bVar313,SUB43(fVar220,0));
          uVar315 = (undefined1)((uint)fVar39 >> 8);
          uVar316 = (undefined1)((uint)fVar39 >> 0x10);
          bVar281 = (byte)(uVar85 >> 0x38);
          bVar317 = (byte)((uint)fVar39 >> 0x18);
          auVar302._0_8_ =
               CONCAT17(bVar281 ^ bVar317,
                        CONCAT16(uVar316,CONCAT15(uVar315,CONCAT14(SUB41(fVar39,0),fVar143))));
          auVar302[8] = SUB41(fVar220,0);
          auVar302[9] = (char)((uint)fVar220 >> 8);
          auVar302[10] = (char)((uint)fVar220 >> 0x10);
          auVar302[0xb] = bVar282 ^ bVar313;
          auVar311[0xc] = SUB41(fVar39,0);
          auVar311._0_12_ = auVar302;
          auVar311[0xd] = uVar315;
          auVar311[0xe] = uVar316;
          auVar311[0xf] = bVar283 ^ bVar317;
          *(long *)(pfVar25 + 10) = auVar104._8_8_;
          *(undefined8 *)(pfVar25 + 8) = auVar104._0_8_;
          *(long *)(pfVar25 + 0xe) = auVar56._8_8_;
          *(long *)(pfVar25 + 0xc) = auVar56._0_8_;
          fVar248 = (float)CONCAT13(bVar280 | 0x40,0x490fdb);
          auVar319._0_8_ =
               CONCAT17(bVar281,CONCAT16(0x49,CONCAT15(0xf,CONCAT14(0xdb,fVar248)))) |
               0x4000000000000000;
          auVar319[8] = 0xdb;
          auVar319[9] = 0xf;
          auVar319[10] = 0x49;
          auVar319[0xb] = bVar282 | 0x40;
          auVar323[0xc] = 0xdb;
          auVar323._0_12_ = auVar319;
          auVar323[0xd] = 0xf;
          auVar323[0xe] = 0x49;
          auVar323[0xf] = bVar283 | 0x40;
          auVar76._12_4_ = fVar192 * fVar193;
          *(long *)(pfVar25 + 2) = auVar244._8_8_;
          *(long *)pfVar25 = auVar244._0_8_;
          *(long *)(pfVar25 + 6) = auVar76._8_8_;
          *(undefined8 *)(pfVar25 + 4) = auVar76._0_8_;
          auVar294._0_4_ = -(uint)(fVar143 < 0.0);
          auVar294._4_4_ = -(uint)((float)((ulong)auVar302._0_8_ >> 0x20) < 0.0);
          auVar294._8_4_ = -(uint)(auVar302._8_4_ < 0.0);
          auVar294._12_4_ = -(uint)(auVar311._12_4_ < 0.0);
          auVar105 = NEON_ext(auVar56,auVar56,8,1);
          auVar261._0_4_ = fVar36 * SQRT((float)uVar116) - auVar105._0_4_;
          auVar261._4_4_ = fVar37 * fVar114 - auVar105._4_4_;
          auVar261._8_4_ = fVar40 * SQRT((float)uVar116) - auVar105._8_4_;
          auVar261._12_4_ = fVar221 * fVar114 - auVar105._12_4_;
          auVar324._0_4_ = fVar248 - auVar261._0_4_;
          auVar324._4_4_ = (float)(auVar319._0_8_ >> 0x20) - auVar261._4_4_;
          auVar324._8_4_ = auVar319._8_4_ - auVar261._8_4_;
          auVar324._12_4_ = auVar323._12_4_ - auVar261._12_4_;
          auVar56 = NEON_fmov(0x3f800000,4);
          auVar185._0_4_ = fVar36 * (fVar36 - (fVar220 + fVar220)) + auVar56._0_4_;
          auVar185._4_4_ = fVar37 * (fVar37 - (fVar39 + fVar39)) + auVar56._4_4_;
          auVar185._8_4_ = fVar40 * (fVar40 - (fVar220 + fVar220)) + auVar56._8_4_;
          auVar185._12_4_ = fVar221 * (fVar221 - (fVar39 + fVar39)) + auVar56._12_4_;
          auVar56 = NEON_fmax(auVar185,ZEXT816(0),4);
          auVar213._0_4_ = -(uint)(ABS(fVar36) < 1.1111112);
          auVar213._4_4_ = -(uint)(ABS(fVar37) < 1.1111112);
          auVar213._8_4_ = -(uint)(ABS(fVar40) < 1.1111112);
          auVar213._12_4_ = -(uint)(ABS(fVar221) < 1.1111112);
          fVar37 = SQRT(auVar56._4_4_);
          fVar40 = SQRT(auVar56._8_4_);
          fVar221 = SQRT(auVar56._12_4_);
          fVar36 = (float)CONCAT13(bVar280 ^ (byte)((uint)SQRT(auVar56._0_4_) >> 0x18),
                                   SUB43(SQRT(auVar56._0_4_),0));
          auVar175._0_8_ =
               CONCAT17(bVar281 ^ (byte)((uint)fVar37 >> 0x18),
                        CONCAT16((char)((uint)fVar37 >> 0x10),
                                 CONCAT15((char)((uint)fVar37 >> 8),CONCAT14(SUB41(fVar37,0),fVar36)
                                         )));
          auVar175[8] = SUB41(fVar40,0);
          auVar175[9] = (undefined1)((uint)fVar40 >> 8);
          auVar175[10] = (undefined1)((uint)fVar40 >> 0x10);
          auVar175[0xb] = bVar282 ^ (byte)((uint)fVar40 >> 0x18);
          auVar186[0xc] = SUB41(fVar221,0);
          auVar186._0_12_ = auVar175;
          auVar186[0xd] = (undefined1)((uint)fVar221 >> 8);
          auVar186[0xe] = (undefined1)((uint)fVar221 >> 0x10);
          auVar186[0xf] = bVar283 ^ (byte)((uint)fVar221 >> 0x18);
          auVar187._0_4_ = fVar36 - auVar105._0_4_;
          auVar187._4_4_ = (float)((ulong)auVar175._0_8_ >> 0x20) - auVar105._4_4_;
          auVar187._8_4_ = auVar175._8_4_ - auVar105._8_4_;
          auVar187._12_4_ = auVar186._12_4_ - auVar105._12_4_;
          auVar187 = auVar187 ^ (auVar187 ^ auVar261 ^ (auVar261 ^ auVar324) & auVar294) & auVar213;
          auVar188._4_12_ = auVar187._4_12_;
          auVar188._0_4_ = -auVar187._0_4_;
          *pfVar25 = auVar244._0_4_ + 1.1920929e-07;
          *(long *)(pfVar25 + 0x12) = auVar187._8_8_;
          *(long *)(pfVar25 + 0x10) = auVar188._0_8_;
          *(undefined1 *)pfVar25 = 0x1e;
        }
        param_1 = pfVar22 + 0xc;
        goto LAB_02f2a21c;
      case 0x11:
        if ((*(char *)((long)pfVar22 + 2) == '\0') || (fVar36 = pfVar22[2], fVar36 == 0.0)) {
          pfVar31 = (float *)*param_7;
          *(char *)(pfVar31 + 1) = *(char *)(pfVar22 + 1) << 1;
          pfVar25 = pfVar31 + 4;
          *pfVar31 = *pfVar31 + 1.1920929e-07;
          *(undefined1 *)pfVar31 = 3;
        }
        else {
          bVar280 = *(byte *)(pfVar22 + 1);
          pfVar25 = (float *)*param_7;
          if (bVar280 != 0) {
            lVar27 = 0;
            bVar281 = *(byte *)((long)pfVar22 + 3);
            lVar29 = *plVar1;
            lVar33 = 0;
            do {
              lVar32 = *(long *)(param_6 + 0x30);
              lVar28 = *(long *)(param_6 + 0x38);
              pfVar31 = (float *)((long)pfVar25 + lVar27);
              pauVar5 = param_3 + (ulong)bVar281 + lVar33;
              fVar37 = *(float *)*pauVar5;
              fVar40 = *(float *)(*pauVar5 + 4);
              fVar221 = *(float *)(*pauVar5 + 8);
              lVar27 = lVar27 + 0x30;
              auVar56 = *(undefined1 (*) [16])(lVar28 + 0x60);
              fVar39 = -fVar37;
              fVar114 = -fVar40;
              fVar143 = -fVar221;
              fVar220 = *(float *)(lVar32 + 0x60) * fVar221 +
                        *(float *)(lVar32 + 0x40) * fVar37 + *(float *)(lVar32 + 0x50) * fVar40;
              fVar248 = *(float *)(lVar32 + 100) * fVar221 +
                        *(float *)(lVar32 + 0x44) * fVar37 + *(float *)(lVar32 + 0x54) * fVar40;
              fVar84 = *(float *)(lVar32 + 0x68) * fVar221 +
                       *(float *)(lVar32 + 0x48) * fVar37 + *(float *)(lVar32 + 0x58) * fVar40;
              fVar115 = *(float *)(lVar32 + 0x6c) * fVar221 +
                        *(float *)(lVar32 + 0x4c) * fVar37 + *(float *)(lVar32 + 0x5c) * fVar40;
              fVar37 = auVar56._0_4_ * fVar143 +
                       *(float *)(lVar28 + 0x40) * fVar39 + *(float *)(lVar28 + 0x50) * fVar114;
              fVar40 = auVar56._4_4_ * fVar143 +
                       *(float *)(lVar28 + 0x44) * fVar39 + *(float *)(lVar28 + 0x54) * fVar114;
              fVar221 = auVar56._8_4_ * fVar143 +
                        *(float *)(lVar28 + 0x48) * fVar39 + *(float *)(lVar28 + 0x58) * fVar114;
              fVar39 = auVar56._12_4_ * fVar143 +
                       *(float *)(lVar28 + 0x4c) * fVar39 + *(float *)(lVar28 + 0x5c) * fVar114;
              pfVar31[6] = fVar221;
              pfVar31[7] = fVar39;
              pfVar31[4] = fVar37;
              pfVar31[5] = fVar40;
              auVar56 = *(undefined1 (*) [16])(lVar28 + 0x30);
              uVar116 = NEON_fmov(0x3f800000,4);
              auVar127._0_4_ =
                   fVar220 * fVar220 * *(float *)(lVar32 + 0x30) + fVar37 * fVar37 * auVar56._0_4_;
              auVar127._4_4_ =
                   fVar248 * fVar248 * *(float *)(lVar32 + 0x34) + fVar40 * fVar40 * auVar56._4_4_;
              auVar127._8_4_ =
                   fVar84 * fVar84 * *(float *)(lVar32 + 0x38) + fVar221 * fVar221 * auVar56._8_4_;
              auVar127._12_4_ =
                   fVar115 * fVar115 * *(float *)(lVar32 + 0x3c) + fVar39 * fVar39 * auVar56._12_4_;
              auVar56 = NEON_ext(auVar127,auVar127,8,1);
              pfVar31[2] = fVar84;
              pfVar31[3] = (float)uVar116 /
                           (auVar127._0_4_ + auVar127._4_4_ + auVar56._0_4_ + 1.1920929e-07);
              *pfVar31 = fVar220;
              pfVar31[1] = fVar248;
              fVar39 = *(float *)(param_6 + 0x1c);
              fVar114 = *(float *)(lVar29 + 4);
              lVar29 = lVar29 + 0x10;
              pfVar31[6] = fVar221;
              pfVar31[7] = fVar114 * fVar39;
              pfVar31[4] = fVar37;
              pfVar31[5] = fVar40;
              fVar37 = *(float *)(param_6 + 4);
              pfVar31[9] = (float)lVar33;
              lVar33 = lVar33 + 1;
              *pfVar31 = fVar220 + 1.1920929e-07;
              *(undefined1 *)pfVar31 = 0xe;
              pfVar31[8] = fVar36 * fVar37;
            } while ((uint)bVar280 * 0x30 != (int)lVar27);
            pfVar25 = (float *)((long)pfVar25 + lVar27);
          }
        }
        *param_7 = (long)pfVar25;
        lVar27 = *plVar1 + (ulong)*(byte *)(pfVar22 + 1) * 0x10;
LAB_02f294b8:
        param_1 = pfVar22 + 4;
        *plVar1 = lVar27;
        break;
      case 0x12:
        lVar27 = *(long *)(pfVar22 + 2);
        if (((lVar27 == 0) || (lVar27 = lVar27 + (long)(pfVar22 + 2), lVar27 == 0)) ||
           (*(char *)((long)pfVar22 + 2) == '\0')) goto LAB_02f27e38;
        bVar280 = *(byte *)((long)pfVar22 + 3);
        auVar56 = param_4[bVar280];
        auVar106 = NEON_ext(auVar56,auVar56,8,1);
        auVar105 = *(undefined1 (*) [16])(*param_4 + (byte)(&DAT_03d6cdd4)[bVar280]);
        uVar173 = NEON_ext(auVar56._0_8_,auVar106._0_8_,4,1);
        pfVar25 = (float *)(*param_3 + (byte)(&DAT_03d6cdd3)[bVar280]);
        auVar106 = NEON_ext(auVar105,auVar105,8,1);
        uVar116 = NEON_ext(auVar105._0_8_,auVar106._0_8_,4,1);
        auVar201._8_4_ = 0x800000;
        auVar201._0_8_ = 0x80000000800000;
        auVar201._12_4_ = 0x800000;
        lVar29 = param_7[2];
        fVar36 = auVar105._0_4_;
        fVar221 = fVar36 * *pfVar25;
        fVar37 = auVar105._4_4_;
        fVar39 = fVar37 * pfVar25[1];
        fVar40 = auVar105._8_4_ * pfVar25[2];
        auVar48._0_4_ = fVar36 * (float)uVar173 - (float)uVar116 * auVar56._0_4_;
        auVar48._4_4_ =
             fVar37 * (float)((ulong)uVar173 >> 0x20) -
             (float)((ulong)uVar116 >> 0x20) * auVar56._4_4_;
        auVar48._8_4_ = auVar105._8_4_ * auVar56._0_4_ - fVar36 * auVar56._8_4_;
        auVar48._12_4_ = auVar105._12_4_ * auVar56._4_4_ - fVar37 * auVar56._12_4_;
        auVar56 = NEON_ext(auVar48,auVar48,4,1);
        fVar37 = fVar221 + fVar39 + fVar40;
        fVar40 = fVar221 + fVar39 + fVar40;
        fVar36 = *pfVar25 * auVar56._0_4_;
        fVar39 = pfVar25[1] * auVar56._4_4_;
        fVar114 = pfVar25[2] * auVar48._0_4_;
        fVar221 = fVar36 + fVar39 + fVar114;
        fVar114 = fVar36 + fVar39 + fVar114;
        auVar128._0_4_ = ABS(fVar37);
        auVar128._4_4_ = ABS(fVar40);
        auVar128._8_4_ = ABS(fVar37);
        auVar128._12_4_ = ABS(fVar40);
        auVar94._0_4_ = ABS(fVar221);
        auVar94._4_4_ = ABS(fVar114);
        auVar94._8_4_ = ABS(fVar221);
        auVar94._12_4_ = ABS(fVar114);
        auVar105 = NEON_fmax(auVar94,auVar128,4);
        auVar56 = NEON_fmin(auVar94,auVar128,4);
        auVar105 = NEON_fmax(auVar105,auVar201,4);
        fVar36 = auVar56._0_4_ / auVar105._0_4_;
        fVar40 = fVar36 * fVar36;
        fVar36 = fVar36 + (fVar40 * (fVar40 + -1.0048817) + 3.768408) *
                          (fVar40 * (fVar40 + -3.8319519) + 5.503148) *
                          fVar36 * fVar40 * (fVar40 * 0.0028662258 + -0.007186844) *
                          (fVar40 * (fVar40 + 1.7041799) + 2.2365003);
        fVar36 = (float)((uint)fVar36 ^
                        ((uint)fVar36 ^ (uint)(1.5707964 - fVar36)) &
                        -(uint)(auVar94._0_4_ < auVar128._0_4_));
        uVar11 = (uint)fVar36 ^
                 ((uint)fVar36 ^ (uint)(3.1415927 - fVar36)) & -(uint)(fVar221 <= 0.0);
        fStack_a4 = (float)CONCAT13((byte)(-(uint)(fVar37 < 0.0) >> 0x18) & 0x80 ^
                                    (byte)(uVar11 >> 0x18),(int3)uVar11);
        if ((long)*(short *)(pfVar22 + 5) != 0) {
          fVar36 = -*(float *)(lVar29 + *(short *)(pfVar22 + 5) + 4);
          uVar116 = NEON_fminnm(CONCAT44(fVar36,fVar36),0x46f56fdb46f56fdb,4);
          uVar116 = NEON_fmax(uVar116,0xc6f56fdbc6f56fdb,4);
          uVar116 = CONCAT44(fStack_a4 - (float)((ulong)uVar116 >> 0x20),fStack_a4 - (float)uVar116)
          ;
          fVar36 = 0.0;
          do {
            fVar40 = (float)(int)(((float)uVar116 + 3.1415927) * 0.15915494);
            fVar37 = (float)uVar116 + fVar40 * -6.2831855;
            uVar116 = CONCAT44((float)((ulong)uVar116 >> 0x20) + fVar40 * -6.2831855,fVar37);
            uVar173 = NEON_fminnm(uVar116,0x40490fdb40490fdb,4);
            uVar173 = NEON_fmax(uVar173,0xc0490fdbc0490fdb,4);
            fVar36 = fVar36 + fVar40;
          } while ((float)uVar173 != fVar37);
          fStack_a4 = fStack_a4 + fVar36 * -6.2831855;
        }
        lVar33 = (long)*(short *)((long)pfVar22 + 6);
        if (*(char *)(lVar29 + *(short *)(pfVar22 + 1)) == '\0') {
          *(undefined1 *)(*(short *)(pfVar22 + 1) + lVar29) = 1;
          fStack_a8 = fStack_a4;
        }
        else {
          fStack_a8 = *(float *)(lVar29 + lVar33);
        }
        puVar20 = (undefined8 *)*param_7;
        fStack_a4 = fStack_a8 - fStack_a4;
        pauVar5 = param_3 + *(byte *)((long)pfVar22 + 3);
        fVar36 = *(float *)*pauVar5;
        fVar37 = *(float *)(*pauVar5 + 4);
        fVar40 = *(float *)(*pauVar5 + 8);
        lVar32 = *(long *)(param_6 + 0x30);
        lVar28 = *(long *)(param_6 + 0x38);
        auVar56 = *(undefined1 (*) [16])(lVar28 + 0x60);
        fVar221 = -fVar36;
        fVar39 = -fVar37;
        fVar114 = -fVar40;
        fVar143 = *(float *)(lVar32 + 0x60) * fVar40 +
                  *(float *)(lVar32 + 0x40) * fVar36 + *(float *)(lVar32 + 0x50) * fVar37;
        fVar220 = *(float *)(lVar32 + 100) * fVar40 +
                  *(float *)(lVar32 + 0x44) * fVar36 + *(float *)(lVar32 + 0x54) * fVar37;
        auVar140._0_8_ = CONCAT44(fVar220,fVar143);
        auVar140._8_4_ =
             *(float *)(lVar32 + 0x68) * fVar40 +
             *(float *)(lVar32 + 0x48) * fVar36 + *(float *)(lVar32 + 0x58) * fVar37;
        fVar248 = *(float *)(lVar32 + 0x6c) * fVar40 +
                  *(float *)(lVar32 + 0x4c) * fVar36 + *(float *)(lVar32 + 0x5c) * fVar37;
        fVar36 = auVar56._0_4_ * fVar114 +
                 *(float *)(lVar28 + 0x40) * fVar221 + *(float *)(lVar28 + 0x50) * fVar39;
        fVar37 = auVar56._4_4_ * fVar114 +
                 *(float *)(lVar28 + 0x44) * fVar221 + *(float *)(lVar28 + 0x54) * fVar39;
        fVar40 = auVar56._8_4_ * fVar114 +
                 *(float *)(lVar28 + 0x48) * fVar221 + *(float *)(lVar28 + 0x58) * fVar39;
        fVar221 = auVar56._12_4_ * fVar114 +
                  *(float *)(lVar28 + 0x4c) * fVar221 + *(float *)(lVar28 + 0x5c) * fVar39;
        *(float *)(puVar20 + 3) = fVar40;
        *(float *)((long)puVar20 + 0x1c) = fVar221;
        *(float *)(puVar20 + 2) = fVar36;
        *(float *)((long)puVar20 + 0x14) = fVar37;
        auVar56 = *(undefined1 (*) [16])(lVar28 + 0x30);
        auVar107._0_4_ =
             fVar143 * fVar143 * *(float *)(lVar32 + 0x30) + fVar36 * fVar36 * auVar56._0_4_;
        auVar107._4_4_ =
             fVar220 * fVar220 * *(float *)(lVar32 + 0x34) + fVar37 * fVar37 * auVar56._4_4_;
        auVar107._8_4_ =
             auVar140._8_4_ * auVar140._8_4_ * *(float *)(lVar32 + 0x38) +
             fVar40 * fVar40 * auVar56._8_4_;
        auVar107._12_4_ =
             fVar248 * fVar248 * *(float *)(lVar32 + 0x3c) + fVar221 * fVar221 * auVar56._12_4_;
        auVar56 = NEON_ext(auVar107,auVar107,8,1);
        uVar116 = NEON_fmov(0x3f800000,4);
        fVar36 = (float)uVar116 / (auVar107._0_4_ + auVar107._4_4_ + auVar56._0_4_ + 1.1920929e-07);
        auVar140._12_4_ = fVar36;
        puVar20[1] = auVar140._8_8_;
        *puVar20 = auVar140._0_8_;
        local_c0 = CONCAT44(local_c0._4_4_,fVar36);
        local_b0 = *(undefined8 *)param_7[1];
        fStack_a8 = pfVar22[4] - fStack_a8;
        uStack_b8 = param_6;
        FUN_02f2c780(lVar27,&local_c0,&local_e0);
        if (param_5 != (int *)0x0) {
          iVar219 = *param_5;
          lVar27 = *param_7;
          *(undefined8 *)(param_5 + (long)iVar219 * 6 + 5) = local_d0;
          *(long *)(param_5 + (long)iVar219 * 6 + 3) = local_d8;
          *(ulong *)(param_5 + (long)iVar219 * 6 + 1) = CONCAT44(fStack_dc,local_e0);
          *(long *)(param_5 + (long)*param_5 * 2 + 0x26) = lVar27;
          iVar219 = 6;
          if (*param_5 < 6) {
            iVar219 = *param_5 + 1;
          }
          *param_5 = iVar219;
        }
        *(float *)((long)puVar20 + 0x1c) = local_e0 * *(float *)(param_6 + 8);
        pfVar25 = (float *)*param_7;
        *pfVar25 = *pfVar25 + 1.1920929e-07;
        *(undefined1 *)pfVar25 = 0xf;
        pfVar25[8] = (float)local_d8 * *(float *)(param_6 + 4);
        pfVar25[9] = local_d8._4_4_ * *(float *)(param_6 + 4);
        pfVar25[10] = fStack_dc;
        pfVar25[0xb] = (float)local_d0;
        pfVar25[0xc] = local_d0._4_4_;
        *param_7 = (long)(pfVar25 + 0x10);
        if (*(float *)(lVar33 + lVar29) != pfVar22[4]) {
          *(float *)(lVar33 + lVar29) = pfVar22[4];
        }
LAB_02f2a784:
        param_1 = pfVar22 + 8;
        goto LAB_02f2a788;
      case 0x13:
        if (*(char *)((long)pfVar22 + 2) == '\0') {
          pfVar25 = (float *)*param_7;
          *pfVar25 = *pfVar25 + 1.1920929e-07;
          *(undefined1 *)pfVar25 = 3;
          *(undefined1 *)(pfVar25 + 1) = 6;
          *param_7 = (long)(pfVar25 + 4);
        }
        else {
          pfVar25 = *(float **)(param_6 + 0x48);
          auVar56 = *(undefined1 (*) [16])(pfVar25 + 8);
          fVar36 = pfVar22[4];
          fVar37 = pfVar22[5];
          fVar40 = pfVar22[6];
          fVar221 = pfVar22[8];
          fVar39 = pfVar22[9];
          fVar114 = pfVar22[10];
          fVar143 = *pfVar25;
          fVar220 = pfVar25[1];
          fVar248 = pfVar25[2];
          fVar84 = pfVar25[3];
          fVar115 = pfVar25[4];
          fVar145 = pfVar25[5];
          fVar171 = pfVar25[6];
          fVar300 = pfVar25[7];
          pcVar2 = (char *)(param_7[2] + (long)*(short *)(pfVar22 + 1));
          pfVar25 = (float *)(param_7[2] + (long)*(short *)((long)pfVar22 + 6));
          fVar144 = auVar56._0_4_;
          fVar168 = auVar56._4_4_;
          fVar169 = auVar56._8_4_;
          fVar328 = auVar56._12_4_;
          fVar265 = fVar144 * fVar40 + fVar143 * fVar36 + fVar115 * fVar37;
          fVar299 = fVar168 * fVar40 + fVar220 * fVar36 + fVar145 * fVar37;
          fVar218 = fVar169 * fVar40 + fVar248 * fVar36 + fVar171 * fVar37;
          fVar285 = fVar144 * fVar114 + fVar143 * fVar221 + fVar115 * fVar39;
          fVar38 = fVar168 * fVar114 + fVar220 * fVar221 + fVar145 * fVar39;
          fStack_a8 = fVar169 * fVar114 + fVar248 * fVar221 + fVar171 * fVar39;
          fVar314 = pfVar22[0xc];
          fVar318 = pfVar22[0xd];
          fVar301 = pfVar22[0xe];
          uStack_b8 = CONCAT44(fVar328 * fVar40 + fVar84 * fVar36 + fVar300 * fVar37,fVar218);
          local_c0 = CONCAT44(fVar299,fVar265);
          fStack_a4 = fVar328 * fVar114 + fVar84 * fVar221 + fVar300 * fVar39;
          local_b0 = CONCAT44(fVar38,fVar285);
          local_d0 = 0;
          auVar147._0_8_ =
               CONCAT44(fVar168 * fVar301 + fVar220 * fVar314 + fVar145 * fVar318,
                        fVar144 * fVar301 + fVar143 * fVar314 + fVar115 * fVar318);
          auVar147._8_4_ = fVar169 * fVar301 + fVar248 * fVar314 + fVar171 * fVar318;
          auVar156._12_4_ = fVar328 * fVar301 + fVar84 * fVar314 + fVar300 * fVar318;
          auVar156._0_12_ = auVar147;
          uStack_98 = auVar156._8_8_;
          local_a0 = auVar147._0_8_;
          local_d8 = param_6;
          if (*(char *)((long)pfVar22 + 3) == '\x01') {
            lVar27 = *(long *)(pfVar22 + 0x10);
            if ((lVar27 == 0) || (lVar27 = lVar27 + (long)(pfVar22 + 0x10), lVar27 == 0)) {
              pfVar25 = (float *)*param_7;
              *pfVar25 = *pfVar25 + 1.1920929e-07;
              *(undefined1 *)pfVar25 = 3;
              *(undefined1 *)(pfVar25 + 1) = 6;
              *param_7 = (long)(pfVar25 + 4);
            }
            else {
              if (*pcVar2 == '\0') {
                *pfVar25 = 0.0;
                *pcVar2 = '\x01';
                auVar17._8_8_ = auVar156._8_8_;
                auVar17._0_8_ = auVar147._0_8_;
                auVar147 = auVar17._0_12_;
              }
              lVar29 = *(long *)(param_6 + 0x30);
              lVar33 = *(long *)(param_6 + 0x38);
              fVar36 = *(float *)param_3[2];
              fVar37 = *(float *)(param_3[2] + 4);
              fVar40 = *(float *)(param_3[2] + 8);
              fVar221 = *(float *)(lVar29 + 0x60);
              fVar39 = *(float *)(lVar29 + 100);
              fVar114 = *(float *)(lVar29 + 0x68);
              plVar24 = (long *)*param_7;
              fVar143 = *(float *)*param_3;
              fVar220 = *(float *)(*param_3 + 4);
              fVar248 = *(float *)(*param_3 + 8);
              fVar84 = *(float *)param_3[1];
              fVar115 = *(float *)(param_3[1] + 4);
              fVar145 = *(float *)(param_3[1] + 8);
              fVar171 = *(float *)(lVar29 + 0x40);
              fVar300 = *(float *)(lVar29 + 0x44);
              fVar314 = *(float *)(lVar29 + 0x48);
              fVar318 = *(float *)(lVar29 + 0x50);
              fVar301 = *(float *)(lVar29 + 0x54);
              fVar144 = *(float *)(lVar29 + 0x58);
              fVar168 = fVar221 * fVar248 + fVar171 * fVar143 + fVar318 * fVar220;
              fVar169 = fVar39 * fVar248 + fVar300 * fVar143 + fVar301 * fVar220;
              fVar328 = fVar114 * fVar248 + fVar314 * fVar143 + fVar144 * fVar220;
              fVar329 = fVar221 * fVar145 + fVar171 * fVar84 + fVar318 * fVar115;
              fVar331 = fVar39 * fVar145 + fVar300 * fVar84 + fVar301 * fVar115;
              fVar170 = fVar114 * fVar145 + fVar314 * fVar84 + fVar144 * fVar115;
              fVar143 = *(float *)(lVar33 + 0x40);
              fVar220 = *(float *)(lVar33 + 0x44);
              fVar248 = *(float *)(lVar33 + 0x48);
              fVar84 = *(float *)(lVar33 + 0x50);
              fVar115 = *(float *)(lVar33 + 0x54);
              fVar145 = *(float *)(lVar33 + 0x58);
              fVar318 = fVar221 * fVar40 + fVar171 * fVar36 + fVar318 * fVar37;
              fVar300 = fVar39 * fVar40 + fVar300 * fVar36 + fVar301 * fVar37;
              fVar36 = fVar114 * fVar40 + fVar314 * fVar36 + fVar144 * fVar37;
              fVar37 = *(float *)(lVar33 + 0x60);
              fVar40 = *(float *)(lVar33 + 100);
              fVar221 = *(float *)(lVar33 + 0x68);
              fVar39 = auVar147._0_4_;
              fVar114 = auVar147._4_4_;
              fVar171 = auVar147._8_4_;
              if (fVar36 < 0.0) {
                uVar116 = NEON_fmov(0x3f800000,4);
                fVar169 = fVar169 + fVar329;
                fVar314 = (float)uVar116 - fVar36;
                if (fVar168 <= fVar331) {
                  fVar314 = fVar314 - (fVar168 - fVar331);
                  fVar301 = fVar170 + fVar300;
                  fVar36 = fVar318 - fVar328;
                  fVar144 = fVar169;
                }
                else {
                  fVar301 = fVar328 + fVar318;
                  fVar36 = fVar170 - fVar300;
                  fVar144 = (fVar168 - fVar331) + fVar314;
                  fVar314 = fVar169;
                }
              }
              else {
                uVar116 = NEON_fmov(0x3f800000,4);
                fVar169 = fVar169 - fVar329;
                fVar36 = fVar36 + (float)uVar116;
                if (-fVar331 <= fVar168) {
                  fVar36 = fVar168 + fVar331 + fVar36;
                  fVar301 = fVar169;
                  fVar144 = fVar170 - fVar300;
                  fVar314 = fVar318 - fVar328;
                }
                else {
                  fVar301 = fVar36 - (fVar168 + fVar331);
                  fVar36 = fVar169;
                  fVar144 = fVar328 + fVar318;
                  fVar314 = fVar170 + fVar300;
                }
              }
              fVar168 = fVar37 * fVar218 + fVar143 * fVar265 + fVar84 * fVar299;
              fVar169 = fVar40 * fVar218 + fVar220 * fVar265 + fVar115 * fVar299;
              fVar299 = fVar221 * fVar218 + fVar248 * fVar265 + fVar145 * fVar299;
              fVar218 = fVar37 * fStack_a8 + fVar143 * fVar285 + fVar84 * fVar38;
              fVar328 = fVar40 * fStack_a8 + fVar220 * fVar285 + fVar115 * fVar38;
              fVar285 = fVar221 * fStack_a8 + fVar248 * fVar285 + fVar145 * fVar38;
              fVar300 = fVar144 * fVar144 + fVar314 * fVar314;
              fVar265 = fVar301 * fVar301 + fVar36 * fVar36;
              fVar318 = fVar300 + fVar265;
              fVar143 = fVar37 * fVar171 + fVar143 * fVar39 + fVar84 * fVar114;
              fVar40 = fVar40 * fVar171 + fVar220 * fVar39 + fVar115 * fVar114;
              fVar37 = fVar221 * fVar171 + fVar248 * fVar39 + fVar145 * fVar114;
              if (fVar318 == 0.0) {
                auVar59 = ZEXT816(0);
              }
              else {
                fVar318 = SQRT(fVar318);
                fVar221 = SQRT(fVar300 + fVar265);
                auVar59._0_4_ = fVar144 / fVar318;
                auVar59._4_4_ = fVar314 / fVar221;
                auVar59._8_4_ = fVar301 / fVar318;
                auVar59._12_4_ = fVar36 / fVar221;
              }
              if (fVar37 < 0.0) {
                fVar169 = fVar169 + fVar218;
                uVar116 = NEON_fmov(0x3f800000,4);
                fVar36 = (float)uVar116 - fVar37;
                if (fVar168 <= fVar328) {
                  fVar36 = fVar36 - (fVar168 - fVar328);
                  fVar39 = fVar285 + fVar40;
                  fVar37 = fVar143 - fVar299;
                  fVar221 = fVar169;
                }
                else {
                  fVar39 = fVar299 + fVar143;
                  fVar37 = fVar285 - fVar40;
                  fVar221 = (fVar168 - fVar328) + fVar36;
                  fVar36 = fVar169;
                }
              }
              else {
                uVar116 = NEON_fmov(0x3f800000,4);
                fVar169 = fVar169 - fVar218;
                fVar37 = fVar37 + (float)uVar116;
                if (-fVar328 <= fVar168) {
                  fVar221 = fVar285 - fVar40;
                  fVar36 = fVar143 - fVar299;
                  fVar37 = fVar168 + fVar328 + fVar37;
                  fVar39 = fVar169;
                }
                else {
                  fVar221 = fVar299 + fVar143;
                  fVar36 = fVar285 + fVar40;
                  fVar39 = fVar37 - (fVar168 + fVar328);
                  fVar37 = fVar169;
                }
              }
              fVar40 = fVar221 * fVar221 + fVar36 * fVar36;
              fVar143 = fVar39 * fVar39 + fVar37 * fVar37;
              fVar114 = fVar40 + fVar143;
              if (fVar114 == 0.0) {
                auVar82 = ZEXT816(0);
              }
              else {
                fVar114 = SQRT(fVar114);
                fVar40 = SQRT(fVar40 + fVar143);
                auVar82._0_4_ = fVar221 / fVar114;
                auVar82._4_4_ = fVar36 / fVar40;
                auVar82._8_4_ = fVar39 / fVar114;
                auVar82._12_4_ = fVar37 / fVar40;
              }
              plVar24[3] = auVar59._8_8_;
              plVar24[2] = auVar59._0_8_;
              plVar24[5] = auVar82._8_8_;
              plVar24[4] = auVar82._0_8_;
              fVar36 = *(float *)(lVar29 + 0x80);
              fVar37 = *(float *)(lVar29 + 0x84);
              fVar40 = *(float *)(lVar29 + 0x88);
              uVar112 = *(undefined4 *)(lVar29 + 0x8c);
              *(float *)(plVar24 + 7) = fVar40;
              *(undefined4 *)((long)plVar24 + 0x3c) = uVar112;
              *(float *)(plVar24 + 6) = fVar36;
              *(float *)((long)plVar24 + 0x34) = fVar37;
              auVar108._0_4_ = -fVar36;
              auVar108._4_4_ = -fVar37;
              auVar108._8_4_ = -fVar40;
              fVar36 = *(float *)(lVar33 + 0x80);
              fVar37 = *(float *)(lVar33 + 0x84);
              fVar40 = *(float *)(lVar33 + 0x88);
              uVar113 = *(undefined4 *)(lVar33 + 0x8c);
              auVar108._12_4_ = uVar112;
              auVar165._8_8_ = _UNK_03caab28;
              auVar165._0_8_ = _DAT_03caab20;
              auVar214._8_8_ = _UNK_03caa778;
              auVar214._0_8_ = _DAT_03caa770;
              auVar246._8_8_ = _UNK_03caa6a8;
              auVar246._0_8_ = _DAT_03caa6a0;
              auVar279._8_8_ = _UNK_03caab38;
              auVar279._0_8_ = _DAT_03caab30;
              *(float *)(plVar24 + 9) = fVar40;
              *(undefined4 *)((long)plVar24 + 0x4c) = uVar113;
              *(float *)(plVar24 + 8) = fVar36;
              *(float *)((long)plVar24 + 0x44) = fVar37;
              auVar163 = a64_TBL(ZEXT816(0),auVar59,auVar246);
              auVar77 = a64_TBL(ZEXT816(0),auVar108,auVar165);
              auVar106 = a64_TBL(ZEXT816(0),auVar108,auVar214);
              auVar56 = a64_TBL(ZEXT816(0),auVar59,auVar279);
              auVar141._0_4_ = -fVar36;
              auVar141._4_4_ = -fVar37;
              auVar141._8_4_ = -fVar40;
              auVar141._12_4_ = uVar113;
              auVar295._0_4_ = auVar106._0_4_ * auVar56._0_4_ - auVar77._0_4_ * auVar163._0_4_;
              auVar295._4_4_ = auVar106._4_4_ * auVar56._4_4_ - auVar77._4_4_ * auVar163._4_4_;
              auVar295._8_4_ = auVar106._8_4_ * auVar56._8_4_ - auVar77._8_4_ * auVar163._8_4_;
              auVar295._12_4_ = auVar106._12_4_ * auVar56._12_4_ - auVar77._12_4_ * auVar163._12_4_;
              auVar312._8_8_ = _UNK_03cab148;
              auVar312._0_8_ = _DAT_03cab140;
              auVar164 = a64_TBL(ZEXT816(0),auVar82,auVar246);
              auVar105 = a64_TBL(ZEXT816(0),auVar82,auVar279);
              auVar189 = a64_TBL(ZEXT816(0),auVar295,auVar312);
              auVar293 = a64_TBL(ZEXT816(0),auVar141,auVar165);
              auVar139 = a64_TBL(ZEXT816(0),auVar141,auVar214);
              auVar57._12_4_ =
                   auVar189._12_4_ -
                   (auVar106._12_4_ * auVar163._12_4_ + auVar77._12_4_ * auVar56._12_4_);
              auVar296._0_4_ = auVar139._0_4_ * auVar105._0_4_ - auVar293._0_4_ * auVar164._0_4_;
              auVar296._4_4_ = auVar139._4_4_ * auVar105._4_4_ - auVar293._4_4_ * auVar164._4_4_;
              auVar296._8_4_ = auVar139._8_4_ * auVar105._8_4_ - auVar293._8_4_ * auVar164._8_4_;
              auVar296._12_4_ =
                   auVar139._12_4_ * auVar105._12_4_ - auVar293._12_4_ * auVar164._12_4_;
              auVar57._0_4_ =
                   --(auVar189._0_4_ -
                     (auVar106._0_4_ * auVar163._0_4_ + auVar77._0_4_ * auVar56._0_4_));
              auVar57._4_4_ =
                   --(auVar189._4_4_ -
                     (auVar106._4_4_ * auVar163._4_4_ + auVar77._4_4_ * auVar56._4_4_));
              auVar57._8_4_ =
                   --(auVar189._8_4_ -
                     (auVar106._8_4_ * auVar163._8_4_ + auVar77._8_4_ * auVar56._8_4_));
              auVar56 = a64_TBL(ZEXT816(0),auVar296,auVar312);
              auVar79._12_4_ =
                   auVar56._12_4_ -
                   (auVar139._12_4_ * auVar164._12_4_ + auVar293._12_4_ * auVar105._12_4_);
              auVar79._0_4_ =
                   -(auVar56._0_4_ -
                    (auVar139._0_4_ * auVar164._0_4_ + auVar293._0_4_ * auVar105._0_4_));
              auVar79._4_4_ =
                   -(auVar56._4_4_ -
                    (auVar139._4_4_ * auVar164._4_4_ + auVar293._4_4_ * auVar105._4_4_));
              auVar79._8_4_ =
                   -(auVar56._8_4_ -
                    (auVar139._8_4_ * auVar164._8_4_ + auVar293._8_4_ * auVar105._8_4_));
              auVar106 = a64_TBL(ZEXT816(0),auVar57,auVar165);
              auVar56 = a64_TBL(ZEXT816(0),auVar57,auVar214);
              auVar139 = a64_TBL(ZEXT816(0),auVar79,auVar246);
              auVar105 = a64_TBL(ZEXT816(0),auVar79,auVar279);
              auVar166._0_4_ = auVar56._0_4_ * auVar105._0_4_ - auVar106._0_4_ * auVar139._0_4_;
              auVar166._4_4_ = auVar56._4_4_ * auVar105._4_4_ - auVar106._4_4_ * auVar139._4_4_;
              auVar166._8_4_ = auVar56._8_4_ * auVar105._8_4_ - auVar106._8_4_ * auVar139._8_4_;
              auVar166._12_4_ = auVar56._12_4_ * auVar105._12_4_ - auVar106._12_4_ * auVar139._12_4_
              ;
              auVar77 = a64_TBL(ZEXT816(0),auVar166,auVar312);
              fVar36 = auVar77._12_4_ -
                       (auVar56._12_4_ * auVar139._12_4_ + auVar106._12_4_ * auVar105._12_4_);
              fVar37 = -(auVar77._0_4_ -
                        (auVar56._0_4_ * auVar139._0_4_ + auVar106._0_4_ * auVar105._0_4_));
              fVar40 = -(auVar77._4_4_ -
                        (auVar56._4_4_ * auVar139._4_4_ + auVar106._4_4_ * auVar105._4_4_));
              fVar221 = -(auVar77._8_4_ -
                         (auVar56._8_4_ * auVar139._8_4_ + auVar106._8_4_ * auVar105._8_4_));
              fVar39 = fVar37 * fVar37 + fVar40 * fVar40 + fVar221 * fVar221;
              fVar114 = fVar37 * fVar37 + fVar40 * fVar40 + fVar221 * fVar221;
              uVar85 = CONCAT44(-(uint)(fVar114 < 1.4210855e-14),-(uint)(fVar39 < 1.4210855e-14)) &
                       0x100000001;
              if (fVar39 == 0.0) {
                fVar39 = 0.0;
                fVar114 = 0.0;
              }
              else {
                uVar116 = NEON_fmov(0x3f800000,4);
                fVar39 = (float)uVar116 / SQRT(fVar39);
                fVar114 = (float)((ulong)uVar116 >> 0x20) / SQRT(fVar114);
              }
              fVar143 = ABS(fVar36);
              iVar219 = (int)uVar85;
              iVar216 = (int)(uVar85 >> 0x20);
              uVar11 = (uint)(fVar37 * fVar39) ^ (uint)DAT_03cab620;
              uVar12 = (uint)(fVar40 * fVar114) ^ DAT_03cab620._4_4_;
              uVar13 = (uint)(fVar36 * fVar114) ^ DAT_03cab628._4_4_;
              auVar105 = NEON_fmov(0x3f800000,4);
              *(uint *)(plVar24 + 0xb) =
                   (uint)(fVar221 * fVar39) ^
                   ((uint)(fVar221 * fVar39) ^ (uint)DAT_03cab628) & (iVar219 << 0x1f) >> 0x1f;
              *(uint *)((long)plVar24 + 0x5c) =
                   (uint)(fVar36 * fVar114) ^ uVar13 & (iVar216 << 0x1f) >> 0x1f;
              *(uint *)(plVar24 + 10) = (uint)(fVar37 * fVar39) ^ uVar11 & (iVar219 << 0x1f) >> 0x1f
              ;
              *(uint *)((long)plVar24 + 0x54) =
                   (uint)(fVar40 * fVar114) ^ uVar12 & (iVar216 << 0x1f) >> 0x1f;
              auVar80._0_4_ = ABS(fVar143);
              auVar80._4_4_ = ABS(ABS(fVar36));
              auVar80._8_4_ = ABS(fVar143);
              auVar80._12_4_ = ABS(ABS(fVar36));
              auVar56 = NEON_fmin(auVar80,auVar105,4);
              fVar36 = auVar56._0_4_;
              fVar37 = auVar56._4_4_;
              fVar40 = auVar56._8_4_;
              fVar221 = auVar56._12_4_;
              auVar109._0_4_ = (auVar105._0_4_ - fVar36) * 0.5;
              auVar109._4_4_ = (auVar105._4_4_ - fVar37) * 0.5;
              auVar109._8_4_ = (auVar105._8_4_ - fVar40) * 0.5;
              auVar109._12_4_ = (auVar105._12_4_ - fVar221) * 0.5;
              auVar215._0_4_ = fVar36 * fVar36;
              auVar215._4_4_ = fVar37 * fVar37;
              auVar215._8_4_ = fVar40 * fVar40;
              auVar215._12_4_ = fVar221 * fVar221;
              auVar149._0_4_ = -(uint)(0.5 < fVar36);
              auVar149._4_4_ = -(uint)(0.5 < fVar37);
              auVar149._8_4_ = -(uint)(0.5 < fVar40);
              auVar167._12_4_ = -(uint)(0.5 < fVar221);
              auVar167._0_12_ = auVar149;
              auVar142._0_4_ = -(uint)(fVar36 < 0.0001);
              auVar142._4_4_ = 0;
              auVar142._8_4_ = -(uint)(fVar40 < 0.0001);
              auVar142._12_4_ = -(uint)(fVar221 < 0.0001);
              auVar190._0_4_ = SQRT(auVar109._0_4_);
              auVar190._4_4_ = SQRT(auVar109._4_4_);
              auVar190._8_4_ = SQRT(auVar109._8_4_);
              auVar190._12_4_ = SQRT(auVar109._12_4_);
              auVar109 = auVar109 ^ (auVar109 ^ auVar215) & ~auVar167;
              fVar36 = auVar109._0_4_;
              fVar37 = auVar109._8_4_;
              fVar40 = auVar109._12_4_;
              auVar190 = auVar190 ^ (auVar190 ^ auVar56) & ~auVar167;
              pfVar31 = (float *)*plVar1;
              auVar110._0_4_ =
                   auVar190._0_4_ +
                   auVar190._0_4_ *
                   fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * 0.0421632 + 0.024181312) +
                                                0.045470025) + 0.074953005) + 0.16666752);
              auVar110._4_4_ = 0;
              auVar110._8_4_ =
                   auVar190._8_4_ +
                   auVar190._8_4_ *
                   fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * 0.0421632 + 0.024181312) +
                                                0.045470025) + 0.074953005) + 0.16666752);
              auVar110._12_4_ =
                   auVar190._12_4_ +
                   auVar190._12_4_ *
                   fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * 0.0421632 + 0.024181312) +
                                                0.045470025) + 0.074953005) + 0.16666752);
              auVar191._0_4_ = 1.5707964 - (auVar110._0_4_ + auVar110._0_4_);
              auVar191._4_4_ = 0;
              auVar191._8_4_ = 1.5707964 - (auVar110._8_4_ + auVar110._8_4_);
              auVar191._12_4_ = 1.5707964 - (auVar110._12_4_ + auVar110._12_4_);
              auVar18._12_4_ = 0;
              auVar18._0_12_ = auVar149;
              auVar56 = auVar56 ^ (auVar56 ^ auVar110 ^ (auVar110 ^ auVar191) & auVar18) & ~auVar142
              ;
              fVar36 = 1.5707964 -
                       (float)CONCAT13((byte)(-(uint)(fVar143 < 0.0) >> 0x18) & 0x80 ^ auVar56[3],
                                       auVar56._0_3_);
              local_d0 = CONCAT44(ABS(pfVar31[1]) + 0.0 + ABS(pfVar31[3]) + ABS(pfVar31[5]),
                                  ABS(*pfVar31) + 0.0 + ABS(pfVar31[2]) + ABS(pfVar31[4]));
              local_c8 = 0.0 - *pfVar25;
              local_c4 = *pfVar25 - (fVar36 + fVar36);
              FUN_02f2c780(lVar27,&local_e0,&local_f8);
              if (param_5 != (int *)0x0) {
                iVar219 = *param_5;
                *(ulong *)(param_5 + (long)iVar219 * 6 + 5) = CONCAT44(fStack_e4,local_e8);
                *(ulong *)(param_5 + (long)iVar219 * 6 + 3) = CONCAT44(local_ec,local_f0);
                *(ulong *)(param_5 + (long)iVar219 * 6 + 1) = CONCAT44(fStack_f4,local_f8);
                *(long **)(param_5 + (long)*param_5 * 2 + 0x26) = plVar24;
                iVar219 = 6;
                if (*param_5 < 6) {
                  iVar219 = *param_5 + 1;
                }
                *param_5 = iVar219;
              }
              *(float *)(plVar24 + 0xc) = ABS(local_f0 * *(float *)(param_6 + 4));
              fVar36 = *(float *)((ulong)&local_f8 | 4);
              *(float *)((long)plVar24 + 100) = ABS(local_ec * *(float *)(param_6 + 4));
              *(float *)(plVar24 + 0xd) = ABS(fVar36);
              *(float *)((long)plVar24 + 0x6c) = local_e8;
              *(float *)(plVar24 + 0xe) = fStack_e4;
              *plVar24 = 0;
              plVar24[1] = 0;
              fVar36 = local_e8 * *(float *)(param_6 + 8);
              lVar27 = (ulong)(uint)fVar36 << 0x20;
              plVar24[1] = 0;
              *plVar24 = lVar27;
              auVar14._4_4_ = -ABS(local_f8);
              auVar14._0_4_ = fVar36;
              plVar24[1] = (ulong)(uint)-ABS(local_f8);
              *plVar24 = lVar27;
              auVar14._8_4_ = *(undefined4 *)(param_6 + 8);
              plVar24[1] = auVar14._4_8_;
              *plVar24 = lVar27;
              *(undefined4 *)plVar24 = 0x34000000;
              *(undefined1 *)plVar24 = 0x10;
              *param_7 = (long)(plVar24 + 0x10);
              fVar36 = *pfVar25;
              if (fVar36 != 0.0) {
                fVar36 = 0.0;
              }
              *pfVar25 = fVar36;
            }
          }
          else {
            lVar29 = 0;
            lVar27 = 0;
            pfVar31 = pfVar22 + 0x10;
            do {
              lVar32 = *(long *)(pfVar22 + 0x10 + lVar27 * 2);
              lVar33 = lVar32 + (long)pfVar31;
              if (lVar32 == 0 || lVar33 == 0) {
                pfVar23 = (float *)*param_7;
                *pfVar23 = *pfVar23 + 1.1920929e-07;
                *(undefined1 *)pfVar23 = 3;
                *(undefined1 *)(pfVar23 + 1) = 2;
                *param_7 = (long)(pfVar23 + 4);
              }
              else {
                lVar28 = (long)*(int *)(&UNK_03d6cddc + lVar27 * 4);
                lVar32 = (long)*(int *)(&UNK_03d6cde8 + lVar27 * 4);
                auVar52 = param_4[lVar28];
                pauVar5 = param_3 + lVar28;
                fVar37 = auVar52._0_4_ + *(float *)*pauVar5;
                fVar40 = auVar52._4_4_ + *(float *)(*pauVar5 + 4);
                fVar221 = auVar52._8_4_ + *(float *)(*pauVar5 + 8);
                fVar36 = auVar52._12_4_;
                fVar39 = SQRT(fVar37 * fVar37 + fVar40 * fVar40 + fVar221 * fVar221);
                fVar114 = SQRT(fVar37 * fVar37 + fVar40 * fVar40 + fVar221 * fVar221);
                auVar73 = auVar52;
                if (1e-16 < fVar39) {
                  auVar73._0_4_ = fVar37 / fVar39;
                  auVar73._4_4_ = fVar40 / fVar114;
                  auVar73._8_4_ = fVar221 / fVar39;
                  auVar73._12_4_ = (fVar36 + *(float *)(*pauVar5 + 0xc)) / fVar114;
                }
                auVar56 = param_4[lVar32];
                auVar105 = NEON_ext(auVar56,auVar56,8,1);
                auVar106 = NEON_ext(auVar73,auVar73,4,1);
                uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
                fVar143 = auVar56._0_4_;
                fVar220 = auVar56._4_4_;
                fVar40 = auVar73._0_4_;
                fVar221 = auVar73._4_4_;
                fVar248 = (float)((ulong)uVar116 >> 0x20);
                fVar37 = fVar40 * (float)uVar116 - fVar143 * auVar106._0_4_;
                auVar208._0_8_ = CONCAT44(fVar221 * fVar248 - fVar220 * auVar106._4_4_,fVar37);
                auVar208._8_4_ = auVar73._8_4_ * fVar143 - auVar56._8_4_ * fVar40;
                auVar208._12_4_ = auVar73._12_4_ * fVar220 - auVar56._12_4_ * fVar221;
                auVar105 = NEON_ext(auVar208,auVar208,4,1);
                uVar173 = NEON_ext(auVar105._0_8_,auVar208._0_8_,4,1);
                fVar39 = auVar105._0_4_;
                fVar84 = auVar105._4_4_;
                auVar74._0_4_ = auVar106._0_4_ * fVar39 - fVar40 * (float)uVar173;
                auVar74._4_4_ = auVar106._4_4_ * fVar84 - fVar221 * (float)((ulong)uVar173 >> 0x20);
                auVar74._8_4_ = fVar40 * fVar37 - auVar73._8_4_ * fVar39;
                auVar74._12_4_ = fVar221 * 0.0 - auVar73._12_4_ * fVar84;
                auVar105 = NEON_ext(auVar74,auVar74,4,1);
                pauVar5 = param_3 + lVar32;
                fVar39 = *(float *)*pauVar5 * fVar39;
                fVar84 = *(float *)(*pauVar5 + 4) * fVar84;
                fVar37 = *(float *)(*pauVar5 + 8) * fVar37;
                fVar114 = fVar39 + fVar84 + fVar37;
                fVar37 = fVar39 + fVar84 + fVar37;
                fVar40 = *(float *)*pauVar5 * auVar105._0_4_;
                fVar221 = *(float *)(*pauVar5 + 4) * auVar105._4_4_;
                fVar84 = *(float *)(*pauVar5 + 8) * auVar74._0_4_;
                fVar115 = fVar40 + fVar221 + fVar84;
                fVar84 = fVar40 + fVar221 + fVar84;
                auVar182._8_4_ = 0x800000;
                auVar182._0_8_ = 0x80000000800000;
                auVar182._12_4_ = 0x800000;
                auVar327._0_4_ = ABS(fVar114);
                auVar327._4_4_ = ABS(fVar37);
                auVar327._8_4_ = ABS(fVar114);
                auVar327._12_4_ = ABS(fVar37);
                fVar37 = ABS(fVar115);
                fVar40 = ABS(fVar84);
                uVar332 = (undefined2)((uint)fVar40 >> 0x10);
                fVar221 = ABS(fVar115);
                uVar333 = (undefined2)((uint)fVar221 >> 0x10);
                fVar39 = ABS(fVar84);
                uVar334 = (undefined2)((uint)fVar39 >> 0x10);
                auVar7._4_2_ = SUB42(fVar40,0);
                auVar7._0_4_ = fVar37;
                auVar7._6_2_ = uVar332;
                auVar7._8_2_ = SUB42(fVar221,0);
                auVar7._10_2_ = uVar333;
                auVar7._12_2_ = SUB42(fVar39,0);
                auVar7._14_2_ = uVar334;
                auVar105 = NEON_fmax(auVar7,auVar327,4);
                auVar8._4_2_ = SUB42(fVar40,0);
                auVar8._0_4_ = fVar37;
                auVar8._6_2_ = uVar332;
                auVar8._8_2_ = SUB42(fVar221,0);
                auVar8._10_2_ = uVar333;
                auVar8._12_2_ = SUB42(fVar39,0);
                auVar8._14_2_ = uVar334;
                auVar106 = NEON_fmin(auVar8,auVar327,4);
                auVar339._0_4_ = -(uint)(fVar37 < auVar327._0_4_);
                auVar339._4_4_ = -(uint)(fVar40 < auVar327._4_4_);
                auVar339._8_4_ = -(uint)(fVar221 < auVar327._8_4_);
                auVar339._12_4_ = -(uint)(fVar39 < auVar327._12_4_);
                auVar105 = NEON_fmax(auVar105,auVar182,4);
                fVar314 = auVar106._0_4_ / auVar105._0_4_;
                fVar318 = auVar106._4_4_ / auVar105._4_4_;
                fVar301 = auVar106._8_4_ / auVar105._8_4_;
                fVar265 = auVar106._12_4_ / auVar105._12_4_;
                fVar37 = fVar314 * fVar314;
                fVar221 = fVar318 * fVar318;
                fVar145 = fVar301 * fVar301;
                fVar300 = fVar265 * fVar265;
                fVar40 = auVar52._0_4_ + (float)(&local_c0)[lVar28 * 2];
                fVar39 = auVar52._4_4_ + (float)((ulong)(&local_c0)[lVar28 * 2] >> 0x20);
                fVar171 = auVar52._8_4_ + (float)(&uStack_b8)[lVar28 * 2];
                auVar337._0_4_ =
                     fVar314 + (fVar37 * (fVar37 + -1.0048817) + 3.768408) *
                               (fVar37 * (fVar37 + -3.8319519) + 5.503148) *
                               fVar314 * fVar37 * (fVar37 * 0.0028662258 + -0.007186844) *
                               (fVar37 * (fVar37 + 1.7041799) + 2.2365003);
                auVar337._4_4_ =
                     fVar318 + (fVar221 * (fVar221 + -1.0048817) + 3.768408) *
                               (fVar221 * (fVar221 + -3.8319519) + 5.503148) *
                               fVar318 * fVar221 * (fVar221 * 0.0028662258 + -0.007186844) *
                               (fVar221 * (fVar221 + 1.7041799) + 2.2365003);
                auVar337._8_4_ =
                     fVar301 + (fVar145 * (fVar145 + -1.0048817) + 3.768408) *
                               (fVar145 * (fVar145 + -3.8319519) + 5.503148) *
                               fVar301 * fVar145 * (fVar145 * 0.0028662258 + -0.007186844) *
                               (fVar145 * (fVar145 + 1.7041799) + 2.2365003);
                auVar337._12_4_ =
                     fVar265 + (fVar300 * (fVar300 + -1.0048817) + 3.768408) *
                               (fVar300 * (fVar300 + -3.8319519) + 5.503148) *
                               fVar265 * fVar300 * (fVar300 * 0.0028662258 + -0.007186844) *
                               (fVar300 * (fVar300 + 1.7041799) + 2.2365003);
                auVar9._4_4_ = 1.5707964 - auVar337._4_4_;
                auVar9._0_4_ = 1.5707964 - auVar337._0_4_;
                auVar9._8_4_ = 1.5707964 - auVar337._8_4_;
                auVar9._12_4_ = 1.5707964 - auVar337._12_4_;
                auVar337 = auVar337 ^ (auVar337 ^ auVar9) & auVar339;
                auVar340._0_4_ = 3.1415927 - auVar337._0_4_;
                auVar340._4_4_ = 0;
                auVar340._8_4_ = 0.0 - auVar337._8_4_;
                auVar340._12_4_ = 0.0 - auVar337._12_4_;
                auVar10._4_4_ = 0;
                auVar10._0_4_ = -(uint)(fVar115 <= 0.0);
                auVar10._8_4_ = -(uint)(fVar115 <= 0.0);
                auVar10._12_4_ = -(uint)(fVar84 <= 0.0);
                auVar337 = auVar337 ^ (auVar337 ^ auVar340) & auVar10;
                local_c4 = (float)CONCAT13((byte)(-(uint)(fVar114 < 0.0) >> 0x18) & 0x80 ^
                                           auVar337[3],auVar337._0_3_);
                fVar37 = SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar171 * fVar171);
                fVar221 = SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar171 * fVar171);
                if (1e-16 < fVar37) {
                  auVar52._0_4_ = fVar40 / fVar37;
                  auVar52._4_4_ = fVar39 / fVar221;
                  auVar52._8_4_ = fVar171 / fVar37;
                  auVar52._12_4_ =
                       (fVar36 + (float)((ulong)(&uStack_b8)[lVar28 * 2] >> 0x20)) / fVar221;
                }
                auVar105 = NEON_ext(auVar52,auVar52,4,1);
                fVar37 = auVar52._0_4_;
                fVar40 = auVar52._4_4_;
                fVar221 = auVar52._8_4_;
                fVar84 = (float)uVar116 * fVar37 - fVar143 * auVar105._0_4_;
                auVar136._0_8_ = CONCAT44(fVar248 * fVar40 - fVar220 * auVar105._4_4_,fVar84);
                auVar136._8_4_ = fVar143 * fVar221 - auVar56._8_4_ * fVar37;
                auVar136._12_4_ = fVar220 * auVar52._12_4_ - auVar56._12_4_ * fVar40;
                auVar56 = NEON_ext(auVar136,auVar136,4,1);
                uVar116 = NEON_ext(auVar56._0_8_,auVar136._0_8_,4,1);
                fVar114 = auVar56._0_4_;
                fVar248 = auVar56._4_4_;
                auVar137._0_4_ = auVar105._0_4_ * fVar114 - fVar37 * (float)uVar116;
                auVar137._4_4_ = auVar105._4_4_ * fVar248 - fVar40 * (float)((ulong)uVar116 >> 0x20)
                ;
                auVar137._8_4_ = fVar37 * fVar84 - fVar221 * fVar114;
                auVar137._12_4_ = fVar40 * 0.0 - auVar52._12_4_ * fVar248;
                auVar56 = NEON_ext(auVar137,auVar137,4,1);
                fVar36 = *(float *)((long)&local_c0 + lVar32 * 0x10 + 4);
                fVar114 = *(float *)(&local_c0 + lVar32 * 2) * fVar114;
                fVar248 = fVar36 * fVar248;
                fVar84 = *(float *)(&uStack_b8 + lVar32 * 2) * fVar84;
                fVar39 = *(float *)(&local_c0 + lVar32 * 2) * auVar56._0_4_;
                fVar36 = fVar36 * auVar56._4_4_;
                fVar143 = *(float *)(&uStack_b8 + lVar32 * 2) * auVar137._0_4_;
                fVar220 = fVar114 + fVar248 + fVar84;
                fVar84 = fVar114 + fVar248 + fVar84;
                fVar114 = fVar39 + fVar36 + fVar143;
                fVar143 = fVar39 + fVar36 + fVar143;
                auVar160._0_4_ = ABS(fVar114);
                auVar160._4_4_ = ABS(fVar143);
                auVar160._8_4_ = ABS(fVar114);
                auVar160._12_4_ = ABS(fVar143);
                auVar335._0_4_ = ABS(fVar220);
                auVar335._4_4_ = ABS(fVar84);
                auVar335._8_4_ = ABS(fVar220);
                auVar335._12_4_ = ABS(fVar84);
                auVar56 = NEON_fmax(auVar160,auVar335,4);
                auVar105 = NEON_fmin(auVar160,auVar335,4);
                auVar100._0_4_ = -(uint)(fVar114 <= 0.0);
                auVar100._4_4_ = 0;
                auVar100._8_4_ = -(uint)(fVar114 <= 0.0);
                auVar100._12_4_ = -(uint)(fVar143 <= 0.0);
                auVar56 = NEON_fmax(auVar56,auVar182,4);
                auVar161._0_4_ = -(uint)(auVar160._0_4_ < auVar335._0_4_);
                auVar161._4_4_ = -(uint)(auVar160._4_4_ < auVar335._4_4_);
                auVar161._8_4_ = -(uint)(auVar160._8_4_ < auVar335._8_4_);
                auVar161._12_4_ = -(uint)(auVar160._12_4_ < auVar335._12_4_);
                fVar36 = auVar105._0_4_ / auVar56._0_4_;
                fVar39 = auVar105._4_4_ / auVar56._4_4_;
                fVar114 = auVar105._8_4_ / auVar56._8_4_;
                fVar143 = auVar105._12_4_ / auVar56._12_4_;
                fVar248 = fVar36 * fVar36;
                fVar84 = fVar39 * fVar39;
                fVar115 = fVar114 * fVar114;
                fVar145 = fVar143 * fVar143;
                auVar162._0_4_ =
                     fVar36 + (fVar248 * (fVar248 + -1.0048817) + 3.768408) *
                              (fVar248 * (fVar248 + -3.8319519) + 5.503148) *
                              fVar36 * fVar248 * (fVar248 * 0.0028662258 + -0.007186844) *
                              (fVar248 * (fVar248 + 1.7041799) + 2.2365003);
                auVar162._4_4_ =
                     fVar39 + (fVar84 * (fVar84 + -1.0048817) + 3.768408) *
                              (fVar84 * (fVar84 + -3.8319519) + 5.503148) *
                              fVar39 * fVar84 * (fVar84 * 0.0028662258 + -0.007186844) *
                              (fVar84 * (fVar84 + 1.7041799) + 2.2365003);
                auVar162._8_4_ =
                     fVar114 + (fVar115 * (fVar115 + -1.0048817) + 3.768408) *
                               (fVar115 * (fVar115 + -3.8319519) + 5.503148) *
                               fVar114 * fVar115 * (fVar115 * 0.0028662258 + -0.007186844) *
                               (fVar115 * (fVar115 + 1.7041799) + 2.2365003);
                auVar162._12_4_ =
                     fVar143 + (fVar145 * (fVar145 + -1.0048817) + 3.768408) *
                               (fVar145 * (fVar145 + -3.8319519) + 5.503148) *
                               fVar143 * fVar145 * (fVar145 * 0.0028662258 + -0.007186844) *
                               (fVar145 * (fVar145 + 1.7041799) + 2.2365003);
                auVar209._0_4_ = 1.5707964 - auVar162._0_4_;
                auVar209._4_4_ = 1.5707964 - auVar162._4_4_;
                auVar209._8_4_ = 1.5707964 - auVar162._8_4_;
                auVar209._12_4_ = 1.5707964 - auVar162._12_4_;
                auVar162 = auVar162 ^ (auVar162 ^ auVar209) & auVar161;
                auVar210._0_4_ = 3.1415927 - auVar162._0_4_;
                auVar210._4_4_ = 0;
                auVar210._8_4_ = 0.0 - auVar162._8_4_;
                auVar210._12_4_ = 0.0 - auVar162._12_4_;
                auVar162 = auVar162 ^ (auVar162 ^ auVar210) & auVar100;
                fVar39 = (float)CONCAT13((byte)(-(uint)(fVar220 < 0.0) >> 0x18) & 0x80 ^ auVar162[3]
                                         ,auVar162._0_3_);
                fVar36 = fVar39 - local_c4;
                if (3.1415927 < ABS(fVar36)) {
                  local_c4 = local_c4 + (float)(&DAT_03cb56a0)[0.0 < fVar36];
                  pfVar25[lVar27] = (float)(&DAT_03cb56a0)[0.0 < fVar36] + pfVar25[lVar27];
                }
                if (pcVar2[lVar27] == '\0') {
                  pfVar25[lVar27] = local_c4;
                  pcVar2[lVar27] = '\x01';
                }
                lVar32 = *(long *)(param_6 + 0x30);
                lVar28 = *(long *)(param_6 + 0x38);
                auVar56 = *(undefined1 (*) [16])(lVar28 + 0x60);
                fVar36 = -fVar37;
                fVar114 = -fVar40;
                fVar143 = -fVar221;
                puVar20 = (undefined8 *)*param_7;
                fVar220 = *(float *)(lVar32 + 0x60) * fVar221 +
                          *(float *)(lVar32 + 0x40) * fVar37 + *(float *)(lVar32 + 0x50) * fVar40;
                fVar248 = *(float *)(lVar32 + 100) * fVar221 +
                          *(float *)(lVar32 + 0x44) * fVar37 + *(float *)(lVar32 + 0x54) * fVar40;
                auVar101._0_8_ = CONCAT44(fVar248,fVar220);
                auVar101._8_4_ =
                     *(float *)(lVar32 + 0x68) * fVar221 +
                     *(float *)(lVar32 + 0x48) * fVar37 + *(float *)(lVar32 + 0x58) * fVar40;
                fVar84 = *(float *)(lVar32 + 0x6c) * fVar221 +
                         *(float *)(lVar32 + 0x4c) * fVar37 + *(float *)(lVar32 + 0x5c) * fVar40;
                fVar37 = auVar56._0_4_ * fVar143 +
                         *(float *)(lVar28 + 0x40) * fVar36 + *(float *)(lVar28 + 0x50) * fVar114;
                fVar40 = auVar56._4_4_ * fVar143 +
                         *(float *)(lVar28 + 0x44) * fVar36 + *(float *)(lVar28 + 0x54) * fVar114;
                fVar221 = auVar56._8_4_ * fVar143 +
                          *(float *)(lVar28 + 0x48) * fVar36 + *(float *)(lVar28 + 0x58) * fVar114;
                fVar36 = auVar56._12_4_ * fVar143 +
                         *(float *)(lVar28 + 0x4c) * fVar36 + *(float *)(lVar28 + 0x5c) * fVar114;
                *(float *)(puVar20 + 3) = fVar221;
                *(float *)((long)puVar20 + 0x1c) = fVar36;
                *(float *)(puVar20 + 2) = fVar37;
                *(float *)((long)puVar20 + 0x14) = fVar40;
                auVar56 = *(undefined1 (*) [16])(lVar28 + 0x30);
                auVar53._0_4_ =
                     fVar220 * fVar220 * *(float *)(lVar32 + 0x30) + fVar37 * fVar37 * auVar56._0_4_
                ;
                auVar53._4_4_ =
                     fVar248 * fVar248 * *(float *)(lVar32 + 0x34) + fVar40 * fVar40 * auVar56._4_4_
                ;
                auVar53._8_4_ =
                     auVar101._8_4_ * auVar101._8_4_ * *(float *)(lVar32 + 0x38) +
                     fVar221 * fVar221 * auVar56._8_4_;
                auVar53._12_4_ =
                     fVar84 * fVar84 * *(float *)(lVar32 + 0x3c) + fVar36 * fVar36 * auVar56._12_4_;
                auVar56 = NEON_ext(auVar53,auVar53,8,1);
                uVar116 = NEON_fmov(0x3f800000,4);
                local_e0 = (float)uVar116 /
                           (auVar53._0_4_ + auVar53._4_4_ + auVar56._0_4_ + 1.1920929e-07);
                auVar101._12_4_ = local_e0;
                puVar20[1] = auVar101._8_8_;
                *puVar20 = auVar101._0_8_;
                *(int *)((long)puVar20 + 0x34) = (int)lVar27;
                local_d0 = *(undefined8 *)(param_7[1] + lVar29);
                local_c8 = fVar39 - pfVar25[lVar27];
                local_c4 = pfVar25[lVar27] - local_c4;
                FUN_02f2c780(lVar33,&local_e0,&local_f8);
                if (param_5 != (int *)0x0) {
                  iVar219 = *param_5;
                  lVar33 = *param_7;
                  *(ulong *)(param_5 + (long)iVar219 * 6 + 5) = CONCAT44(fStack_e4,local_e8);
                  *(ulong *)(param_5 + (long)iVar219 * 6 + 3) = CONCAT44(local_ec,local_f0);
                  *(ulong *)(param_5 + (long)iVar219 * 6 + 1) = CONCAT44(fStack_f4,local_f8);
                  *(long *)(param_5 + (long)*param_5 * 2 + 0x26) = lVar33;
                  iVar219 = 6;
                  if (*param_5 < 6) {
                    iVar219 = *param_5 + 1;
                  }
                  *param_5 = iVar219;
                }
                *(float *)((long)puVar20 + 0x1c) = local_f8 * *(float *)(param_6 + 8);
                pfVar23 = (float *)*param_7;
                *pfVar23 = *pfVar23 + 1.1920929e-07;
                *(undefined1 *)pfVar23 = 0xf;
                pfVar23[8] = local_f0 * *(float *)(param_6 + 4);
                pfVar23[9] = local_ec * *(float *)(param_6 + 4);
                pfVar23[10] = fStack_f4;
                pfVar23[0xb] = local_e8;
                pfVar23[0xc] = fStack_e4;
                *param_7 = (long)(pfVar23 + 0x10);
                if (pfVar25[lVar27] != fVar39) {
                  pfVar25[lVar27] = fVar39;
                }
              }
              lVar27 = lVar27 + 1;
              lVar29 = lVar29 + 0x10;
              pfVar31 = pfVar31 + 2;
            } while (lVar27 != 3);
          }
        }
        param_1 = pfVar22 + 0x18;
        lVar27 = *plVar1 + 0x30;
        goto LAB_02f2ad2c;
      case 0x14:
        fVar36 = pfVar22[7];
        fVar37 = pfVar22[0xb];
        pdVar30 = *(double **)(param_6 + 0x88);
        dVar266 = pdVar30[3];
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar39 = (float)((double)pfVar22[8] - *pdVar30);
        fVar221 = (float)((double)pfVar22[4] - *pdVar30);
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x70);
        fVar220 = (float)((double)pfVar22[5] - pdVar30[1]);
        fVar114 = (float)((double)pfVar22[9] - pdVar30[1]);
        auVar61._0_8_ = CONCAT44(fVar220,fVar221);
        puVar21 = (undefined4 *)*param_7;
        fVar248 = (float)((double)pfVar22[10] - pdVar30[2]);
        fVar143 = (float)((double)pfVar22[6] - pdVar30[2]);
        auVar61._8_4_ = fVar143;
        *(long *)(puVar21 + 6) = auVar56._8_8_;
        *(long *)(puVar21 + 4) = auVar56._0_8_;
        uVar116 = *(undefined8 *)(lVar27 + 0x80);
        auVar66._12_4_ = (float)((double)fVar36 - dVar266);
        auVar66._0_12_ = auVar61;
        *(undefined8 *)(puVar21 + 0x1a) = *(undefined8 *)(lVar27 + 0x88);
        *(undefined8 *)(puVar21 + 0x18) = uVar116;
        uVar116 = *(undefined8 *)(lVar29 + 0x80);
        *(undefined8 *)(puVar21 + 0x1e) = *(undefined8 *)(lVar29 + 0x88);
        *(undefined8 *)(puVar21 + 0x1c) = uVar116;
        *(long *)(puVar21 + 10) = auVar66._8_8_;
        *(undefined8 *)(puVar21 + 8) = auVar61._0_8_;
        puVar21[0xe] = fVar248;
        puVar21[0xf] = (float)((double)fVar37 - dVar266);
        puVar21[0xc] = fVar39;
        puVar21[0xd] = fVar114;
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar36 = *(float *)param_3[3];
        fVar37 = *(float *)(param_3[3] + 4);
        fVar40 = *(float *)(param_3[3] + 8);
        fVar84 = *(float *)param_4[3] - auVar56._0_4_;
        fVar115 = *(float *)(param_4[3] + 4) - auVar56._4_4_;
        fVar145 = *(float *)(param_4[3] + 8) - auVar56._8_4_;
        fVar221 = fVar221 - fVar36;
        fVar220 = fVar220 - fVar37;
        fVar143 = fVar143 - fVar40;
        fVar171 = (auVar56._0_4_ + fVar84) - fVar39;
        fVar300 = (auVar56._4_4_ + fVar115) - fVar114;
        fVar314 = (auVar56._8_4_ + fVar145) - fVar248;
        auVar117._0_8_ =
             CONCAT44(*(float *)(lVar27 + 100) * fVar40 +
                      *(float *)(lVar27 + 0x44) * fVar36 + *(float *)(lVar27 + 0x54) * fVar37,
                      *(float *)(lVar27 + 0x60) * fVar40 +
                      *(float *)(lVar27 + 0x40) * fVar36 + *(float *)(lVar27 + 0x50) * fVar37);
        auVar117._8_4_ =
             *(float *)(lVar27 + 0x68) * fVar40 +
             *(float *)(lVar27 + 0x48) * fVar36 + *(float *)(lVar27 + 0x58) * fVar37;
        auVar129._12_4_ =
             *(float *)(lVar27 + 0x6c) * fVar40 +
             *(float *)(lVar27 + 0x4c) * fVar36 + *(float *)(lVar27 + 0x5c) * fVar37;
        auVar129._0_12_ = auVar117;
        *(long *)(puVar21 + 0x12) = auVar129._8_8_;
        *(undefined8 *)(puVar21 + 0x10) = auVar117._0_8_;
        auVar148._0_8_ =
             CONCAT44(*(float *)(lVar29 + 100) * fVar145 +
                      *(float *)(lVar29 + 0x44) * fVar84 + *(float *)(lVar29 + 0x54) * fVar115,
                      *(float *)(lVar29 + 0x60) * fVar145 +
                      *(float *)(lVar29 + 0x40) * fVar84 + *(float *)(lVar29 + 0x50) * fVar115);
        auVar148._8_4_ =
             *(float *)(lVar29 + 0x68) * fVar145 +
             *(float *)(lVar29 + 0x48) * fVar84 + *(float *)(lVar29 + 0x58) * fVar115;
        auVar157._12_4_ =
             *(float *)(lVar29 + 0x6c) * fVar145 +
             *(float *)(lVar29 + 0x4c) * fVar84 + *(float *)(lVar29 + 0x5c) * fVar115;
        auVar157._0_12_ = auVar148;
        *(long *)(puVar21 + 0x16) = auVar157._8_8_;
        *(undefined8 *)(puVar21 + 0x14) = auVar148._0_8_;
        fVar40 = *(float *)(param_6 + 8);
        auVar49._0_12_ = auVar56._0_12_;
        auVar49._12_4_ = pfVar22[0xd];
        fVar84 = pfVar22[0xe];
        fVar115 = pfVar22[0xf];
        param_1 = pfVar22 + 0x10;
        auVar130._12_4_ = pfVar22[0xc];
        auVar130._0_12_ = auVar117;
        fVar36 = (SQRT(fVar143 * fVar143 + fVar221 * fVar221 + fVar220 * fVar220) +
                 pfVar22[0xd] * SQRT(fVar314 * fVar314 + fVar171 * fVar171 + fVar300 * fVar300)) -
                 pfVar22[0xc];
        fVar37 = *(float *)(param_6 + 0x70);
        fVar221 = *(float *)(param_6 + 0x74);
        *puVar21 = 0x34000000;
        puVar21[1] = 0;
        auVar158._12_4_ = fVar36;
        auVar158._0_12_ = auVar148;
        *(undefined8 *)(puVar21 + 2) = 0;
        *(long *)(puVar21 + 0x16) = auVar158._8_8_;
        *(undefined8 *)(puVar21 + 0x14) = auVar148._0_8_;
        puVar21[0xe] = fVar248;
        puVar21[0xf] = fVar221 * fVar115;
        puVar21[0xc] = fVar39;
        puVar21[0xd] = fVar114;
        *(long *)(puVar21 + 0x12) = auVar130._8_8_;
        *(undefined8 *)(puVar21 + 0x10) = auVar117._0_8_;
        auVar67._12_4_ = fVar84 * fVar37 * fVar40 * fVar36;
        auVar67._0_12_ = auVar61;
        *(long *)(puVar21 + 6) = auVar49._8_8_;
        *(long *)(puVar21 + 4) = auVar56._0_8_;
        *(long *)(puVar21 + 10) = auVar67._8_8_;
        *(undefined8 *)(puVar21 + 8) = auVar61._0_8_;
        pfVar22 = (float *)(puVar21 + 0x20);
        *(undefined1 *)puVar21 = 0x20;
LAB_02f281c8:
        *param_7 = (long)pfVar22;
LAB_02f281cc:
        lVar27 = param_7[1] + 8;
        goto LAB_02f2a080;
      case 0x15:
        pfVar23 = (float *)*param_7;
        lVar29 = (long)*(char *)((long)pfVar22 + 0x11);
        lVar32 = (long)*(char *)((long)pfVar22 + 0x12);
        lVar33 = (long)*(char *)((long)pfVar22 + 0x13);
        *param_7 = (long)(pfVar23 + 0x10);
        auVar56 = param_3[3];
        fVar37 = *(float *)param_4[3];
        fVar40 = *(float *)(param_4[3] + 4);
        fVar221 = *(float *)(param_4[3] + 8);
        fVar39 = *(float *)(param_4[3] + 0xc);
        auVar105 = *param_3;
        auVar106 = *param_4;
        lVar27 = param_7[2];
        fVar36 = auVar106._0_4_;
        fVar114 = auVar106._4_4_;
        fVar143 = auVar106._8_4_;
        fVar220 = auVar106._12_4_;
        fVar248 = auVar105._0_4_;
        fVar84 = auVar105._4_4_;
        if (*(char *)(pfVar22 + 4) == '\0') {
          auVar139 = NEON_ext(auVar106,auVar106,4,1);
          auVar77 = NEON_ext(auVar105,auVar105,4,1);
          auVar70._0_4_ = fVar36 * auVar77._0_4_ - fVar248 * auVar139._0_4_;
          auVar70._4_4_ = fVar114 * auVar77._4_4_ - fVar84 * auVar139._4_4_;
          auVar70._8_4_ = fVar143 * fVar248 - auVar105._8_4_ * fVar36;
          auVar70._12_4_ = fVar220 * fVar84 - auVar105._12_4_ * fVar114;
          auVar139 = NEON_ext(auVar70,auVar70,4,1);
          fVar145 = auVar139._0_4_;
          fVar300 = auVar139._4_4_;
          fVar115 = SQRT(auVar70._0_4_ * auVar70._0_4_ + fVar145 * fVar145 + fVar300 * fVar300);
          fVar171 = SQRT(auVar70._0_4_ * auVar70._0_4_ + fVar145 * fVar145 + fVar300 * fVar300);
          fVar145 = fVar145 / fVar115;
          fVar300 = fVar300 / fVar171;
          auVar62._0_8_ = CONCAT44(fVar300,fVar145);
          auVar62._8_4_ = auVar70._0_4_ / fVar115;
          auVar71._12_4_ = 0.0 / fVar171;
          auVar71._0_12_ = auVar62;
          fVar115 = pfVar22[1];
          fVar145 = fVar145 * fVar115;
          fVar300 = fVar300 * fVar115;
          auVar205._8_8_ = auVar71._8_8_;
          auVar205._0_8_ = auVar62._0_8_;
          auVar97._0_4_ = auVar56._0_4_ + fVar145;
          auVar97._4_4_ = auVar56._4_4_ + fVar300;
          auVar97._8_4_ = auVar56._8_4_ + auVar62._8_4_ * fVar115;
          auVar97._12_4_ = auVar56._12_4_ + auVar71._12_4_ * fVar115;
          fVar37 = fVar37 + fVar145;
          fVar40 = fVar40 + fVar300;
          fVar221 = fVar221 + auVar62._8_4_ * fVar115;
          fVar39 = fVar39 + auVar71._12_4_ * fVar115;
        }
        else {
          auVar62 = SUB1612(param_4[1],0);
          auVar205 = ZEXT816(0);
          auVar97 = auVar56;
        }
        fVar145 = auVar62._0_4_ * *(float *)param_3[1];
        fVar318 = auVar62._4_4_ * *(float *)(param_3[1] + 4);
        fVar301 = auVar62._8_4_ * *(float *)(param_3[1] + 8);
        fVar115 = auVar62._0_4_ * *(float *)param_3[2];
        fVar171 = auVar62._4_4_ * *(float *)(param_3[2] + 4);
        fVar300 = auVar62._8_4_ * *(float *)(param_3[2] + 8);
        fVar314 = fVar145 + fVar318 + fVar301;
        fVar301 = fVar145 + fVar318 + fVar301;
        fVar145 = fVar115 + fVar171 + fVar300;
        fVar300 = fVar115 + fVar171 + fVar300;
        auVar230._0_4_ = ABS(fVar145);
        auVar230._4_4_ = ABS(fVar300);
        auVar230._8_4_ = ABS(fVar145);
        auVar230._12_4_ = ABS(fVar300);
        auVar251._0_4_ = ABS(fVar314);
        auVar251._4_4_ = ABS(fVar301);
        auVar251._8_4_ = ABS(fVar314);
        auVar251._12_4_ = ABS(fVar301);
        auVar139 = NEON_fmax(auVar230,auVar251,4);
        auVar305._8_4_ = 0x800000;
        auVar305._0_8_ = 0x80000000800000;
        auVar305._12_4_ = 0x800000;
        auVar56 = NEON_fmin(auVar230,auVar251,4);
        auVar139 = NEON_fmax(auVar139,auVar305,4);
        auVar72._0_4_ = -(uint)(fVar145 <= 0.0);
        auVar72._4_4_ = 0;
        auVar72._8_4_ = -(uint)(fVar145 <= 0.0);
        auVar72._12_4_ = -(uint)(fVar300 <= 0.0);
        fVar115 = auVar56._0_4_ / auVar139._0_4_;
        fVar145 = auVar56._4_4_ / auVar139._4_4_;
        fVar171 = auVar56._8_4_ / auVar139._8_4_;
        fVar300 = auVar56._12_4_ / auVar139._12_4_;
        auVar231._0_4_ = -(uint)(auVar230._0_4_ < auVar251._0_4_);
        auVar231._4_4_ = -(uint)(auVar230._4_4_ < auVar251._4_4_);
        auVar231._8_4_ = -(uint)(auVar230._8_4_ < auVar251._8_4_);
        auVar231._12_4_ = -(uint)(auVar230._12_4_ < auVar251._12_4_);
        fVar318 = fVar115 * fVar115;
        fVar301 = fVar145 * fVar145;
        fVar265 = fVar171 * fVar171;
        fVar299 = fVar300 * fVar300;
        auVar232._0_4_ =
             fVar115 + (fVar318 * (fVar318 + -1.0048817) + 3.768408) *
                       (fVar318 * (fVar318 + -3.8319519) + 5.503148) *
                       fVar115 * fVar318 * (fVar318 * 0.0028662258 + -0.007186844) *
                       (fVar318 * (fVar318 + 1.7041799) + 2.2365003);
        auVar232._4_4_ =
             fVar145 + (fVar301 * (fVar301 + -1.0048817) + 3.768408) *
                       (fVar301 * (fVar301 + -3.8319519) + 5.503148) *
                       fVar145 * fVar301 * (fVar301 * 0.0028662258 + -0.007186844) *
                       (fVar301 * (fVar301 + 1.7041799) + 2.2365003);
        auVar232._8_4_ =
             fVar171 + (fVar265 * (fVar265 + -1.0048817) + 3.768408) *
                       (fVar265 * (fVar265 + -3.8319519) + 5.503148) *
                       fVar171 * fVar265 * (fVar265 * 0.0028662258 + -0.007186844) *
                       (fVar265 * (fVar265 + 1.7041799) + 2.2365003);
        auVar232._12_4_ =
             fVar300 + (fVar299 * (fVar299 + -1.0048817) + 3.768408) *
                       (fVar299 * (fVar299 + -3.8319519) + 5.503148) *
                       fVar300 * fVar299 * (fVar299 * 0.0028662258 + -0.007186844) *
                       (fVar299 * (fVar299 + 1.7041799) + 2.2365003);
        auVar252._0_4_ = 1.5707964 - auVar232._0_4_;
        auVar252._4_4_ = 1.5707964 - auVar232._4_4_;
        auVar252._8_4_ = 1.5707964 - auVar232._8_4_;
        auVar252._12_4_ = 1.5707964 - auVar232._12_4_;
        auVar232 = auVar232 ^ (auVar232 ^ auVar252) & auVar231;
        auVar253._0_4_ = 3.1415927 - auVar232._0_4_;
        auVar253._4_4_ = 0;
        auVar253._8_4_ = 0.0 - auVar232._8_4_;
        auVar253._12_4_ = 0.0 - auVar232._12_4_;
        auVar232 = auVar232 ^ (auVar232 ^ auVar253) & auVar72;
        fVar145 = auVar97._0_4_;
        fVar171 = auVar97._4_4_;
        fVar300 = auVar97._8_4_;
        auVar233._0_4_ = fVar36 * (fVar37 - fVar145);
        auVar233._4_4_ = fVar114 * (fVar40 - fVar171);
        auVar233._8_4_ = fVar143 * (fVar221 - fVar300);
        auVar233._12_4_ = fVar220 * (fVar39 - auVar97._12_4_);
        fVar314 = (float)CONCAT13((byte)(-(uint)(fVar314 < 0.0) >> 0x18) & 0x80 ^ auVar232[3],
                                  auVar232._0_3_);
        auVar56 = NEON_ext(auVar233,auVar233,8,1);
        fVar115 = auVar56._0_4_ + auVar233._0_4_ + auVar233._4_4_;
        if (*(float *)(lVar29 + lVar27) == 0.0) {
          fVar318 = fVar314 - fVar115 / pfVar22[1];
          if (fVar318 == 0.0) {
            fVar318 = 1.1920929e-08;
          }
          *(float *)(lVar29 + lVar27) = fVar318;
          *(float *)(lVar32 + lVar27) = fVar314;
          fVar318 = fVar314;
        }
        else {
          fVar318 = *(float *)(lVar32 + lVar27);
        }
        fVar318 = fVar314 - fVar318;
        if (3.1415927 < fVar318) {
          *(int *)(lVar33 + lVar27) = *(int *)(lVar33 + lVar27) + -1;
          fVar318 = fVar314 - *(float *)(lVar32 + lVar27);
        }
        if (fVar318 < -3.1415927) {
          *(int *)(lVar33 + lVar27) = *(int *)(lVar33 + lVar27) + 1;
        }
        *(float *)(lVar32 + lVar27) = fVar314;
        fVar318 = *(float *)(lVar29 + lVar27);
        iVar219 = *(int *)(lVar33 + lVar27);
        fVar301 = pfVar22[1];
        if (*(char *)(pfVar22 + 4) == '\0') {
          auVar56 = NEON_ext(auVar105,auVar105,4,1);
          auVar139 = NEON_ext(auVar205,auVar205,4,1);
          lVar27 = *(long *)(param_6 + 0x30);
          lVar29 = *(long *)(param_6 + 0x38);
          auVar180._0_4_ = fVar248 * auVar139._0_4_ - auVar56._0_4_ * auVar205._0_4_;
          auVar180._4_4_ = fVar84 * auVar139._4_4_ - auVar56._4_4_ * auVar205._4_4_;
          auVar180._8_4_ = auVar105._8_4_ * auVar205._0_4_ - fVar248 * auVar205._8_4_;
          auVar180._12_4_ = auVar105._12_4_ * auVar205._4_4_ - fVar84 * auVar205._12_4_;
          auVar56 = NEON_ext(auVar180,auVar180,4,1);
          auVar105 = NEON_ext(auVar106,auVar106,4,1);
          auVar181._0_4_ = fVar36 * auVar56._0_4_;
          auVar181._4_4_ = fVar114 * auVar56._4_4_;
          auVar181._8_4_ = fVar143 * auVar180._0_4_;
          auVar181._12_4_ = fVar220 * 0.0;
          auVar135._0_4_ = fVar37 - *(float *)(lVar29 + 0x70);
          auVar135._4_4_ = fVar40 - *(float *)(lVar29 + 0x74);
          auVar135._8_4_ = fVar221 - *(float *)(lVar29 + 0x78);
          auVar135._12_4_ = fVar39 - *(float *)(lVar29 + 0x7c);
          auVar56 = NEON_ext(auVar97,auVar97,4,1);
          fVar37 = auVar105._0_4_ * fVar145 - fVar36 * auVar56._0_4_;
          fVar221 = auVar105._4_4_ * fVar171 - fVar114 * auVar56._4_4_;
          fVar220 = fVar36 * fVar300 - fVar143 * fVar145;
          auVar56 = NEON_ext(auVar135,auVar135,4,1);
          fVar248 = fVar36 * auVar56._0_4_ - auVar105._0_4_ * auVar135._0_4_;
          fVar84 = fVar114 * auVar56._4_4_ - auVar105._4_4_ * auVar135._4_4_;
          fVar145 = fVar143 * auVar135._0_4_ - fVar36 * auVar135._8_4_;
          fVar40 = *(float *)(lVar27 + 0x60) * fVar37 +
                   *(float *)(lVar27 + 0x40) * fVar221 + *(float *)(lVar27 + 0x50) * fVar220;
          fVar39 = *(float *)(lVar27 + 100) * fVar37 +
                   *(float *)(lVar27 + 0x44) * fVar221 + *(float *)(lVar27 + 0x54) * fVar220;
          fVar221 = *(float *)(lVar27 + 0x68) * fVar37 +
                    *(float *)(lVar27 + 0x48) * fVar221 + *(float *)(lVar27 + 0x58) * fVar220;
          auVar56 = NEON_ext(auVar181,auVar181,8,1);
          fVar114 = *(float *)(lVar29 + 0x60) * fVar248 +
                    *(float *)(lVar29 + 0x40) * fVar84 + *(float *)(lVar29 + 0x50) * fVar145;
          fVar143 = *(float *)(lVar29 + 100) * fVar248 +
                    *(float *)(lVar29 + 0x44) * fVar84 + *(float *)(lVar29 + 0x54) * fVar145;
          fVar220 = *(float *)(lVar29 + 0x68) * fVar248 +
                    *(float *)(lVar29 + 0x48) * fVar84 + *(float *)(lVar29 + 0x58) * fVar145;
          fVar248 = auVar56._0_4_ + auVar181._0_4_ + auVar181._4_4_;
          auVar239._0_4_ = *(float *)(lVar27 + 0x30) + *(float *)(lVar29 + 0x30);
          auVar239._4_4_ = *(float *)(lVar27 + 0x34) + *(float *)(lVar29 + 0x34);
          auVar239._8_4_ = *(float *)(lVar27 + 0x38) + *(float *)(lVar29 + 0x38);
          auVar239._12_4_ = *(float *)(lVar27 + 0x3c) + *(float *)(lVar29 + 0x3c);
          auVar256._8_4_ = 0x28800000;
          auVar256._0_8_ = 0x2880000028800000;
          auVar256._12_4_ = 0x28800000;
          fVar37 = fVar40 * fVar40 * *(float *)(lVar27 + 0x30) +
                   *(float *)(lVar29 + 0x30) * fVar114 * fVar114;
          fVar145 = fVar39 * fVar39 * *(float *)(lVar27 + 0x34) +
                    *(float *)(lVar29 + 0x34) * fVar143 * fVar143;
          auVar257._4_4_ = fVar145;
          auVar257._0_4_ = fVar37;
          auVar257._8_4_ =
               fVar221 * fVar221 * *(float *)(lVar27 + 0x38) +
               *(float *)(lVar29 + 0x38) * fVar220 * fVar220;
          fVar84 = *(float *)(param_6 + 0x74);
          auVar56 = NEON_fmax(auVar239,auVar256,4);
          auVar257._12_4_ = auVar56._12_4_;
          auVar56 = NEON_ext(auVar257,auVar257,8,1);
          fVar37 = fVar37 + fVar145 + auVar56._0_4_ + auVar56._4_4_;
        }
        else {
          lVar27 = *(long *)(param_6 + 0x38);
          auVar139 = NEON_ext(auVar106,auVar106,4,1);
          auVar134._0_4_ = fVar37 - *(float *)(lVar27 + 0x70);
          auVar134._4_4_ = fVar40 - *(float *)(lVar27 + 0x74);
          auVar134._8_4_ = fVar221 - *(float *)(lVar27 + 0x78);
          auVar134._12_4_ = fVar39 - *(float *)(lVar27 + 0x7c);
          auVar56 = NEON_ext(auVar97,auVar97,4,1);
          lVar29 = *(long *)(param_6 + 0x30);
          auVar98._0_4_ = auVar139._0_4_ * fVar145 - fVar36 * auVar56._0_4_;
          auVar98._4_4_ = auVar139._4_4_ * fVar171 - fVar114 * auVar56._4_4_;
          auVar98._8_4_ = fVar36 * fVar300 - fVar143 * fVar145;
          auVar98._12_4_ = fVar114 * auVar97._12_4_ - fVar220 * fVar171;
          auVar105 = NEON_ext(auVar98,auVar98,4,1);
          auVar56 = NEON_ext(auVar134,auVar134,4,1);
          auVar99._0_4_ = fVar36 * auVar56._0_4_ - auVar139._0_4_ * auVar134._0_4_;
          auVar99._4_4_ = fVar114 * auVar56._4_4_ - auVar139._4_4_ * auVar134._4_4_;
          auVar99._8_4_ = fVar143 * auVar134._0_4_ - fVar36 * auVar134._8_4_;
          auVar99._12_4_ = fVar220 * auVar134._4_4_ - fVar114 * auVar134._12_4_;
          auVar56 = NEON_ext(auVar99,auVar99,4,1);
          fVar37 = auVar105._0_4_ + fVar36 * fVar301;
          fVar220 = auVar105._4_4_ + fVar114 * fVar301;
          fVar171 = auVar98._0_4_ + fVar143 * fVar301;
          fVar248 = auVar56._0_4_ - fVar36 * fVar301;
          fVar84 = auVar56._4_4_ - fVar114 * fVar301;
          fVar145 = auVar99._0_4_ - fVar143 * fVar301;
          auVar56 = *(undefined1 (*) [16])(lVar27 + 0x60);
          fVar40 = *(float *)(lVar29 + 0x60) * fVar171 +
                   *(float *)(lVar29 + 0x40) * fVar37 + *(float *)(lVar29 + 0x50) * fVar220;
          fVar39 = *(float *)(lVar29 + 100) * fVar171 +
                   *(float *)(lVar29 + 0x44) * fVar37 + *(float *)(lVar29 + 0x54) * fVar220;
          fVar221 = *(float *)(lVar29 + 0x68) * fVar171 +
                    *(float *)(lVar29 + 0x48) * fVar37 + *(float *)(lVar29 + 0x58) * fVar220;
          fVar37 = *(float *)(lVar29 + 0x6c) * fVar171 +
                   *(float *)(lVar29 + 0x4c) * fVar37 + *(float *)(lVar29 + 0x5c) * fVar220;
          fVar114 = auVar56._0_4_ * fVar145 +
                    *(float *)(lVar27 + 0x40) * fVar248 + *(float *)(lVar27 + 0x50) * fVar84;
          fVar143 = auVar56._4_4_ * fVar145 +
                    *(float *)(lVar27 + 0x44) * fVar248 + *(float *)(lVar27 + 0x54) * fVar84;
          fVar220 = auVar56._8_4_ * fVar145 +
                    *(float *)(lVar27 + 0x48) * fVar248 + *(float *)(lVar27 + 0x58) * fVar84;
          fVar248 = auVar56._12_4_ * fVar145 +
                    *(float *)(lVar27 + 0x4c) * fVar248 + *(float *)(lVar27 + 0x5c) * fVar84;
          auVar207._0_4_ = *(float *)(lVar29 + 0x30) + *(float *)(lVar27 + 0x30);
          auVar207._4_4_ = *(float *)(lVar29 + 0x34) + *(float *)(lVar27 + 0x34);
          auVar207._8_4_ = *(float *)(lVar29 + 0x38) + *(float *)(lVar27 + 0x38);
          auVar207._12_4_ = *(float *)(lVar29 + 0x3c) + *(float *)(lVar27 + 0x3c);
          auVar236._8_4_ = 0x28800000;
          auVar236._0_8_ = 0x2880000028800000;
          auVar236._12_4_ = 0x28800000;
          fVar145 = fVar40 * fVar40 * *(float *)(lVar29 + 0x30) +
                    *(float *)(lVar27 + 0x30) * fVar114 * fVar114;
          fVar171 = fVar39 * fVar39 * *(float *)(lVar29 + 0x34) +
                    *(float *)(lVar27 + 0x34) * fVar143 * fVar143;
          auVar179._0_8_ = CONCAT44(fVar171,fVar145);
          auVar179._8_4_ =
               fVar221 * fVar221 * *(float *)(lVar29 + 0x38) +
               *(float *)(lVar27 + 0x38) * fVar220 * fVar220;
          auVar179._12_4_ =
               fVar37 * fVar37 * *(float *)(lVar29 + 0x3c) +
               *(float *)(lVar27 + 0x3c) * fVar248 * fVar248;
          auVar56 = NEON_fmax(auVar207,auVar236,4);
          auVar237._8_8_ = auVar179._8_8_;
          auVar237._0_8_ = auVar179._0_8_;
          auVar238._0_12_ = auVar237._0_12_;
          auVar238._12_4_ = auVar56._12_4_;
          fVar84 = *(float *)(param_6 + 0x74);
          auVar56 = NEON_ext(auVar238,auVar238,8,1);
          fVar37 = fVar145 + fVar171 + auVar56._0_4_ + auVar56._4_4_;
          fVar248 = 0.15915494;
        }
        fVar145 = *(float *)(param_6 + 0x1c);
        pfVar23[6] = fVar221;
        pfVar23[7] = fVar84 / fVar37;
        pfVar23[4] = fVar40;
        pfVar23[5] = fVar39;
        pfVar23[10] = fVar220;
        pfVar23[0xb] = fVar37;
        pfVar23[8] = fVar114;
        pfVar23[9] = fVar143;
        auVar240._0_12_ = auVar106._0_12_;
        auVar240._12_4_ = fVar115 * fVar145;
        *(long *)(pfVar23 + 2) = auVar240._8_8_;
        *(long *)pfVar23 = auVar106._0_8_;
        pfVar23[3] = (fVar115 -
                     fVar301 * ((fVar314 - fVar318) + (float)iVar219 * 6.2831855) * fVar248) *
                     *(float *)(param_6 + 0x1c);
        fVar37 = *(float *)(param_6 + 0x74);
        fVar40 = pfVar22[3];
        pfVar23[0xc] = *(float *)(param_6 + 0x70) * pfVar22[2];
        pfVar23[0xd] = fVar37 * fVar40;
        goto LAB_02f29374;
      case 0x16:
        pfVar23 = (float *)*param_7;
        cVar4 = *(char *)((long)pfVar22 + 0x15);
        lVar29 = (long)*(char *)((long)pfVar22 + 0x16);
        lVar27 = (long)*(char *)((long)pfVar22 + 0x17);
        *param_7 = (long)(pfVar23 + 0x10);
        fVar36 = *(float *)param_3[3];
        fVar37 = *(float *)(param_3[3] + 4);
        fVar40 = *(float *)(param_3[3] + 8);
        fVar221 = *(float *)(param_3[3] + 0xc);
        fVar39 = *(float *)param_4[3];
        fVar114 = *(float *)(param_4[3] + 4);
        fVar143 = *(float *)(param_4[3] + 8);
        fVar220 = *(float *)(param_4[3] + 0xc);
        auVar269._0_4_ = fVar39 - fVar36;
        auVar269._4_4_ = fVar114 - fVar37;
        auVar269._8_4_ = fVar143 - fVar40;
        auVar269._12_4_ = fVar220 - fVar221;
        auVar139 = NEON_ext(auVar269,auVar269,4,1);
        auVar56 = *param_3;
        auVar105 = NEON_ext(auVar56,auVar56,8,1);
        uVar116 = NEON_ext(auVar56._0_8_,auVar105._0_8_,4,1);
        fVar218 = (float)uVar116;
        fVar285 = (float)((ulong)uVar116 >> 0x20);
        fVar38 = auVar56._0_4_;
        fVar144 = auVar56._4_4_;
        fVar265 = auVar56._8_4_;
        fVar299 = auVar56._12_4_;
        lVar33 = param_7[2];
        fVar248 = auVar269._0_4_ * fVar218 - fVar38 * auVar139._0_4_;
        auVar159._0_8_ = CONCAT44(auVar269._4_4_ * fVar285 - fVar144 * auVar139._4_4_,fVar248);
        auVar159._8_4_ = auVar269._8_4_ * fVar38 - fVar265 * auVar269._0_4_;
        auVar159._12_4_ = auVar269._12_4_ * fVar144 - fVar299 * auVar269._4_4_;
        auVar105 = NEON_ext(auVar159,auVar159,4,1);
        uVar173 = NEON_ext(auVar105._0_8_,auVar159._0_8_,4,1);
        pfVar25 = (float *)(lVar33 + lVar29);
        auVar56 = *param_4;
        auVar106 = NEON_ext(auVar56,auVar56,8,1);
        fVar115 = auVar56._0_4_;
        fVar145 = auVar56._4_4_;
        fVar171 = auVar56._8_4_;
        fVar300 = auVar56._12_4_;
        uVar116 = NEON_ext(auVar56._0_8_,auVar106._0_8_,4,1);
        auVar325._0_4_ = fVar38 * (float)uVar173 - fVar218 * auVar105._0_4_;
        auVar325._4_4_ = fVar144 * (float)((ulong)uVar173 >> 0x20) - fVar285 * auVar105._4_4_;
        auVar325._8_4_ = fVar265 * auVar105._0_4_ - fVar38 * fVar248;
        auVar325._12_4_ = fVar299 * auVar105._4_4_ - fVar144 * 0.0;
        auVar105 = NEON_ext(auVar325,auVar325,4,1);
        fVar314 = (float)uVar116;
        fVar318 = (float)((ulong)uVar116 >> 0x20);
        fVar248 = fVar115 * auVar139._0_4_ - auVar269._0_4_ * fVar314;
        auVar270._0_8_ = CONCAT44(fVar145 * auVar139._4_4_ - auVar269._4_4_ * fVar318,fVar248);
        auVar270._8_4_ = fVar171 * auVar269._0_4_ - auVar269._8_4_ * fVar115;
        auVar270._12_4_ = fVar300 * auVar269._4_4_ - auVar269._12_4_ * fVar145;
        auVar56 = NEON_ext(auVar270,auVar270,4,1);
        uVar116 = NEON_ext(auVar56._0_8_,auVar270._0_8_,4,1);
        fVar329 = auVar105._0_4_;
        fVar331 = auVar105._4_4_;
        auVar271._0_4_ = fVar115 * (float)uVar116 - fVar314 * auVar56._0_4_;
        auVar271._4_4_ = fVar145 * (float)((ulong)uVar116 >> 0x20) - fVar318 * auVar56._4_4_;
        auVar271._8_4_ = fVar171 * auVar56._0_4_ - fVar115 * fVar248;
        auVar271._12_4_ = fVar300 * auVar56._4_4_ - fVar145 * 0.0;
        auVar56 = NEON_ext(auVar271,auVar271,4,1);
        fVar169 = auVar56._0_4_;
        fVar328 = auVar56._4_4_;
        fVar301 = SQRT(fVar329 * fVar329 + fVar331 * fVar331 + auVar325._0_4_ * auVar325._0_4_);
        fVar168 = SQRT(fVar329 * fVar329 + fVar331 * fVar331 + auVar325._0_4_ * auVar325._0_4_);
        fVar248 = SQRT(fVar169 * fVar169 + fVar328 * fVar328 + auVar271._0_4_ * auVar271._0_4_);
        fVar84 = SQRT(fVar169 * fVar169 + fVar328 * fVar328 + auVar271._0_4_ * auVar271._0_4_);
        auVar286._0_4_ = fVar329 / fVar301;
        auVar286._4_4_ = fVar331 / fVar168;
        auVar286._8_4_ = auVar325._0_4_ / fVar301;
        auVar286._12_4_ = 0.0 / fVar168;
        auVar304._0_4_ = *(float *)param_3[1] * auVar286._0_4_;
        auVar304._4_4_ = *(float *)(param_3[1] + 4) * auVar286._4_4_;
        auVar304._8_4_ = *(float *)(param_3[1] + 8) * auVar286._8_4_;
        auVar304._12_4_ = *(float *)(param_3[1] + 0xc) * auVar286._12_4_;
        auVar272._0_4_ = fVar169 / fVar248;
        auVar272._4_4_ = fVar328 / fVar84;
        auVar272._8_4_ = auVar271._0_4_ / fVar248;
        auVar272._12_4_ = 0.0 / fVar84;
        auVar56 = NEON_ext(auVar304,auVar304,8,1);
        auVar68._0_4_ = *(float *)param_3[2] * auVar286._0_4_;
        auVar68._4_4_ = *(float *)(param_3[2] + 4) * auVar286._4_4_;
        auVar68._8_4_ = *(float *)(param_3[2] + 8) * auVar286._8_4_;
        auVar68._12_4_ = *(float *)(param_3[2] + 0xc) * auVar286._12_4_;
        fVar168 = auVar304._0_4_ + auVar304._4_4_ + auVar56._0_4_;
        auVar56 = NEON_ext(auVar68,auVar68,8,1);
        auVar320._0_4_ = *(float *)param_4[1] * auVar272._0_4_;
        auVar320._4_4_ = *(float *)(param_4[1] + 4) * auVar272._4_4_;
        auVar320._8_4_ = *(float *)(param_4[1] + 8) * auVar272._8_4_;
        auVar320._12_4_ = *(float *)(param_4[1] + 0xc) * auVar272._12_4_;
        fVar248 = auVar68._0_4_ + auVar68._4_4_ + auVar56._0_4_;
        auVar56 = NEON_ext(auVar320,auVar320,8,1);
        fVar169 = auVar320._0_4_ + auVar320._4_4_ + auVar56._0_4_;
        auVar202._0_4_ = *(float *)param_4[2] * auVar272._0_4_;
        auVar202._4_4_ = *(float *)(param_4[2] + 4) * auVar272._4_4_;
        auVar202._8_4_ = *(float *)(param_4[2] + 8) * auVar272._8_4_;
        auVar202._12_4_ = *(float *)(param_4[2] + 0xc) * auVar272._12_4_;
        auVar56 = NEON_ext(auVar202,auVar202,8,1);
        fVar84 = auVar202._0_4_ + auVar202._4_4_ + auVar56._0_4_;
        auVar321._0_4_ = ABS(fVar168);
        auVar321._4_4_ = ABS(fVar169);
        auVar321._8_8_ = 0;
        auVar203._0_4_ = ABS(fVar248);
        auVar203._4_4_ = ABS(fVar84);
        auVar203._8_8_ = 0;
        auVar69._0_4_ = -(uint)(fVar248 <= 0.0);
        auVar69._4_4_ = -(uint)(fVar84 <= 0.0);
        auVar69._8_4_ = 0xffffffff;
        auVar69._12_4_ = 0xffffffff;
        auVar105 = NEON_fmax(auVar203,auVar321,4);
        auVar56 = NEON_fmin(auVar203,auVar321,4);
        auVar6._10_2_ = 0x80;
        auVar6._0_10_ = (unkuint10)0x80000000800000;
        auVar6._12_2_ = 0;
        auVar6._14_2_ = 0x80;
        auVar105 = NEON_fmax(auVar105,auVar6,4);
        auVar204._0_4_ = -(uint)(auVar203._0_4_ < auVar321._0_4_);
        auVar204._4_4_ = -(uint)(auVar203._4_4_ < auVar321._4_4_);
        auVar204._8_8_ = 0;
        fVar248 = auVar56._0_4_ / auVar105._0_4_;
        fVar84 = auVar56._4_4_ / auVar105._4_4_;
        fVar301 = auVar56._8_4_ / auVar105._8_4_;
        fVar328 = auVar56._12_4_ / auVar105._12_4_;
        fVar329 = fVar248 * fVar248;
        fVar331 = fVar84 * fVar84;
        fVar170 = fVar301 * fVar301;
        fVar192 = fVar328 * fVar328;
        pfVar31 = (float *)(lVar33 + cVar4);
        auVar326._0_4_ =
             fVar248 + (fVar329 * (fVar329 + -1.0048817) + 3.768408) *
                       (fVar329 * (fVar329 + -3.8319519) + 5.503148) *
                       fVar248 * fVar329 * (fVar329 * 0.0028662258 + -0.007186844) *
                       (fVar329 * (fVar329 + 1.7041799) + 2.2365003);
        auVar326._4_4_ =
             fVar84 + (fVar331 * (fVar331 + -1.0048817) + 3.768408) *
                      (fVar331 * (fVar331 + -3.8319519) + 5.503148) *
                      fVar84 * fVar331 * (fVar331 * 0.0028662258 + -0.007186844) *
                      (fVar331 * (fVar331 + 1.7041799) + 2.2365003);
        auVar326._8_4_ =
             fVar301 + (fVar170 * (fVar170 + -1.0048817) + 3.768408) *
                       (fVar170 * (fVar170 + -3.8319519) + 5.503148) *
                       fVar301 * fVar170 * (fVar170 * 0.0028662258 + -0.007186844) *
                       (fVar170 * (fVar170 + 1.7041799) + 2.2365003);
        auVar326._12_4_ =
             fVar328 + (fVar192 * (fVar192 + -1.0048817) + 3.768408) *
                       (fVar192 * (fVar192 + -3.8319519) + 5.503148) *
                       fVar328 * fVar192 * (fVar192 * 0.0028662258 + -0.007186844) *
                       (fVar192 * (fVar192 + 1.7041799) + 2.2365003);
        auVar322._0_4_ = 1.5707964 - auVar326._0_4_;
        auVar322._4_4_ = 1.5707964 - auVar326._4_4_;
        auVar322._8_4_ = 1.5707964 - auVar326._8_4_;
        auVar322._12_4_ = 1.5707964 - auVar326._12_4_;
        auVar326 = auVar326 ^ (auVar326 ^ auVar322) & auVar204;
        auVar330._0_4_ = 3.1415927 - auVar326._0_4_;
        auVar330._4_4_ = 3.1415927 - auVar326._4_4_;
        auVar330._8_4_ = 3.1415927 - auVar326._8_4_;
        auVar330._12_4_ = 3.1415927 - auVar326._12_4_;
        fVar328 = pfVar22[1];
        fVar301 = pfVar22[2];
        auVar326 = auVar326 ^ (auVar326 ^ auVar330) & auVar69;
        uVar85 = CONCAT17((char)(-(uint)(fVar169 < 0.0) >> 0x18),
                          (uint7)((byte)(-(uint)(fVar168 < 0.0) >> 0x18) & 0x80) << 0x18) &
                 0x80ffffffffffffff;
        fVar248 = (float)CONCAT13((byte)(uVar85 >> 0x18) ^ auVar326[3],auVar326._0_3_);
        fVar84 = (float)(CONCAT17((byte)(uVar85 >> 0x38) ^ auVar326[7],
                                  CONCAT16(auVar326[6],
                                           CONCAT15(auVar326[5],CONCAT14(auVar326[4],fVar248)))) >>
                        0x20);
        if (*pfVar31 == 0.0) {
          fVar168 = fVar248;
          if (fVar248 == 0.0) {
            fVar168 = 1.1920929e-08;
          }
          fVar169 = fVar84;
          if (fVar84 == 0.0) {
            fVar169 = 1.1920929e-08;
          }
          *(float *)(cVar4 + lVar33) = fVar168;
          pfVar31[1] = fVar169;
          *(float *)(lVar29 + lVar33) = fVar248;
          pfVar25[1] = fVar84;
          fVar168 = fVar248;
        }
        else {
          fVar168 = *(float *)(lVar29 + lVar33);
        }
        fVar168 = fVar248 - fVar168;
        if (3.1415927 < fVar168) {
          *(int *)(lVar27 + lVar33) = *(int *)(lVar27 + lVar33) + -1;
          fVar168 = fVar248 - *pfVar25;
        }
        piVar3 = (int *)(lVar33 + lVar27);
        if (fVar168 < -3.1415927) {
          *(int *)(lVar27 + lVar33) = *(int *)(lVar27 + lVar33) + 1;
        }
        fVar168 = fVar84 - pfVar25[1];
        if (3.1415927 < fVar168) {
          piVar3[1] = piVar3[1] + -1;
          fVar168 = fVar84 - pfVar25[1];
        }
        if (fVar168 < -3.1415927) {
          piVar3[1] = piVar3[1] + 1;
        }
        *pfVar25 = fVar248;
        pfVar25[1] = fVar84;
        auVar50._0_4_ = fVar36 + auVar286._0_4_ * fVar328;
        auVar50._4_4_ = fVar37 + auVar286._4_4_ * fVar328;
        auVar50._8_4_ = fVar40 + auVar286._8_4_ * fVar328;
        auVar50._12_4_ = fVar221 + auVar286._12_4_ * fVar328;
        fVar39 = fVar39 + auVar272._0_4_ * fVar301;
        fVar114 = fVar114 + auVar272._4_4_ * fVar301;
        fVar143 = fVar143 + auVar272._8_4_ * fVar301;
        fVar220 = fVar220 + auVar272._12_4_ * fVar301;
        iVar219 = *piVar3;
        fVar301 = *pfVar31;
        auVar56 = NEON_ext(auVar286,auVar286,4,1);
        auVar105 = NEON_ext(auVar272,auVar272,4,1);
        auVar254._0_4_ = fVar38 * auVar56._0_4_ - fVar218 * auVar286._0_4_;
        auVar254._4_4_ = fVar144 * auVar56._4_4_ - fVar285 * auVar286._4_4_;
        auVar254._8_4_ = fVar265 * auVar286._0_4_ - fVar38 * auVar286._8_4_;
        auVar254._12_4_ = fVar299 * auVar286._4_4_ - fVar144 * auVar286._12_4_;
        auVar56 = NEON_ext(auVar254,auVar254,4,1);
        fVar40 = pfVar22[1];
        auVar306._0_4_ = fVar115 * auVar105._0_4_ - fVar314 * auVar272._0_4_;
        auVar306._4_4_ = fVar145 * auVar105._4_4_ - fVar318 * auVar272._4_4_;
        auVar306._8_4_ = fVar171 * auVar272._0_4_ - fVar115 * auVar272._8_4_;
        auVar306._12_4_ = fVar300 * auVar272._4_4_ - fVar145 * auVar272._12_4_;
        fVar221 = pfVar22[2] * ((fVar84 - pfVar31[1]) + (float)piVar3[1] * 6.2831855);
        auVar105 = NEON_ext(auVar306,auVar306,4,1);
        fVar36 = auVar56._0_4_;
        fVar84 = auVar105._0_4_;
        fVar37 = auVar56._4_4_;
        fVar115 = auVar105._4_4_;
        if (auVar254._0_4_ * auVar306._0_4_ + fVar36 * fVar84 + fVar37 * fVar115 <= 0.0) {
          fVar36 = fVar36 - fVar84;
          fVar37 = fVar37 - fVar115;
          fVar84 = auVar254._0_4_ - auVar306._0_4_;
          fVar115 = fVar84 * fVar84 + fVar36 * fVar36 + fVar37 * fVar37;
          if (fVar115 == 0.0) {
            auVar111 = ZEXT816(0);
          }
          else {
            fVar115 = SQRT(fVar115);
            fVar145 = SQRT(fVar84 * fVar84 + fVar36 * fVar36 + fVar37 * fVar37);
            auVar111._0_4_ = fVar36 / fVar115;
            auVar111._4_4_ = fVar37 / fVar145;
            auVar111._8_4_ = fVar84 / fVar115;
            auVar111._12_4_ = 0.0 / fVar145;
          }
        }
        else {
          fVar36 = fVar36 + fVar84;
          fVar37 = fVar37 + fVar115;
          fVar84 = auVar254._0_4_ + auVar306._0_4_;
          fVar115 = fVar84 * fVar84 + fVar36 * fVar36 + fVar37 * fVar37;
          if (fVar115 == 0.0) {
            auVar111 = ZEXT816(0);
          }
          else {
            fVar115 = SQRT(fVar115);
            fVar145 = SQRT(fVar84 * fVar84 + fVar36 * fVar36 + fVar37 * fVar37);
            auVar111._0_4_ = fVar36 / fVar115;
            auVar111._4_4_ = fVar37 / fVar145;
            auVar111._8_4_ = fVar84 / fVar115;
            auVar111._12_4_ = 0.0 / fVar145;
          }
          fVar221 = -fVar221;
        }
        auVar56 = NEON_ext(auVar50,auVar50,4,1);
        auVar105 = NEON_ext(auVar111,auVar111,4,1);
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        auVar234._0_4_ = fVar39 - *(float *)(lVar29 + 0x70);
        auVar234._4_4_ = fVar114 - *(float *)(lVar29 + 0x74);
        auVar234._8_4_ = fVar143 - *(float *)(lVar29 + 0x78);
        auVar234._12_4_ = fVar220 - *(float *)(lVar29 + 0x7c);
        fVar36 = auVar111._0_4_;
        fVar37 = auVar111._4_4_;
        fVar84 = auVar111._8_4_;
        fVar115 = auVar50._0_4_ * auVar105._0_4_ - auVar56._0_4_ * fVar36;
        fVar145 = auVar50._4_4_ * auVar105._4_4_ - auVar56._4_4_ * fVar37;
        fVar300 = auVar50._8_4_ * fVar36 - auVar50._0_4_ * fVar84;
        auVar56 = NEON_ext(auVar234,auVar234,4,1);
        auVar51._0_4_ = (fVar39 - auVar50._0_4_) * fVar36;
        auVar51._4_4_ = (fVar114 - auVar50._4_4_) * fVar37;
        auVar51._8_4_ = (fVar143 - auVar50._8_4_) * fVar84;
        auVar51._12_4_ = (fVar220 - auVar50._12_4_) * auVar111._12_4_;
        fVar39 = fVar36 * auVar56._0_4_ - auVar105._0_4_ * auVar234._0_4_;
        fVar114 = fVar37 * auVar56._4_4_ - auVar105._4_4_ * auVar234._4_4_;
        fVar220 = fVar84 * auVar234._0_4_ - fVar36 * auVar234._8_4_;
        fVar84 = *(float *)(lVar27 + 0x60) * fVar115 +
                 *(float *)(lVar27 + 0x40) * fVar145 + *(float *)(lVar27 + 0x50) * fVar300;
        fVar171 = *(float *)(lVar27 + 100) * fVar115 +
                  *(float *)(lVar27 + 0x44) * fVar145 + *(float *)(lVar27 + 0x54) * fVar300;
        auVar255._0_8_ = CONCAT44(fVar171,fVar84);
        auVar255._8_4_ =
             *(float *)(lVar27 + 0x68) * fVar115 +
             *(float *)(lVar27 + 0x48) * fVar145 + *(float *)(lVar27 + 0x58) * fVar300;
        fVar115 = *(float *)(lVar27 + 0x6c) * fVar115 +
                  *(float *)(lVar27 + 0x4c) * fVar145 + *(float *)(lVar27 + 0x5c) * fVar300;
        fVar37 = *(float *)(lVar29 + 0x60) * fVar39 +
                 *(float *)(lVar29 + 0x40) * fVar114 + *(float *)(lVar29 + 0x50) * fVar220;
        fVar143 = *(float *)(lVar29 + 100) * fVar39 +
                  *(float *)(lVar29 + 0x44) * fVar114 + *(float *)(lVar29 + 0x54) * fVar220;
        auVar235._0_8_ = CONCAT44(fVar143,fVar37);
        auVar235._8_4_ =
             *(float *)(lVar29 + 0x68) * fVar39 +
             *(float *)(lVar29 + 0x48) * fVar114 + *(float *)(lVar29 + 0x58) * fVar220;
        fVar114 = *(float *)(lVar29 + 0x6c) * fVar39 +
                  *(float *)(lVar29 + 0x4c) * fVar114 + *(float *)(lVar29 + 0x5c) * fVar220;
        auVar287._0_4_ = *(float *)(lVar27 + 0x30) + *(float *)(lVar29 + 0x30);
        auVar287._4_4_ = *(float *)(lVar27 + 0x34) + *(float *)(lVar29 + 0x34);
        auVar287._8_4_ = *(float *)(lVar27 + 0x38) + *(float *)(lVar29 + 0x38);
        auVar287._12_4_ = *(float *)(lVar27 + 0x3c) + *(float *)(lVar29 + 0x3c);
        fVar37 = fVar84 * fVar84 * *(float *)(lVar27 + 0x30) +
                 *(float *)(lVar29 + 0x30) * fVar37 * fVar37;
        fVar39 = fVar171 * fVar171 * *(float *)(lVar27 + 0x34) +
                 *(float *)(lVar29 + 0x34) * fVar143 * fVar143;
        auVar206._0_8_ = CONCAT44(fVar39,fVar37);
        auVar206._8_4_ =
             auVar255._8_4_ * auVar255._8_4_ * *(float *)(lVar27 + 0x38) +
             *(float *)(lVar29 + 0x38) * auVar235._8_4_ * auVar235._8_4_;
        auVar206._12_4_ =
             fVar115 * fVar115 * *(float *)(lVar27 + 0x3c) +
             *(float *)(lVar29 + 0x3c) * fVar114 * fVar114;
        auVar307._8_4_ = 0x28800000;
        auVar307._0_8_ = 0x2880000028800000;
        auVar307._12_4_ = 0x28800000;
        auVar56 = NEON_fmax(auVar287,auVar307,4);
        auVar288._8_8_ = auVar206._8_8_;
        auVar288._0_8_ = auVar206._0_8_;
        auVar289._0_12_ = auVar288._0_12_;
        auVar289._12_4_ = auVar56._12_4_;
        auVar56 = NEON_ext(auVar289,auVar289,8,1);
        fVar37 = fVar37 + fVar39 + auVar56._0_4_ + auVar56._4_4_;
        auVar235._12_4_ = fVar37;
        auVar255._12_4_ = *(float *)(param_6 + 0x74) / fVar37;
        auVar56 = NEON_ext(auVar51,auVar51,8,1);
        *(long *)(pfVar23 + 6) = auVar255._8_8_;
        *(undefined8 *)(pfVar23 + 4) = auVar255._0_8_;
        *(long *)(pfVar23 + 10) = auVar235._8_8_;
        *(undefined8 *)(pfVar23 + 8) = auVar235._0_8_;
        auVar133._0_12_ = auVar111._0_12_;
        auVar133._12_4_ =
             *(float *)(param_6 + 0x1c) * (auVar56._0_4_ + auVar51._0_4_ + auVar51._4_4_);
        *(long *)(pfVar23 + 2) = auVar133._8_8_;
        *(long *)pfVar23 = auVar111._0_8_;
        pfVar23[3] = *(float *)(param_6 + 0x1c) *
                     -(((fVar248 - fVar301) + (float)iVar219 * 6.2831855) * fVar40 + fVar221);
        fVar37 = *(float *)(param_6 + 0x74);
        fVar40 = pfVar22[4];
        pfVar23[0xc] = *(float *)(param_6 + 0x70) * pfVar22[3];
        pfVar23[0xd] = fVar37 * fVar40;
LAB_02f29374:
        *pfVar23 = fVar36 + 1.1920929e-07;
        *(undefined1 *)pfVar23 = 6;
LAB_02f29380:
        param_1 = pfVar22 + 8;
LAB_02f2a21c:
        lVar27 = *plVar1 + 8;
        goto LAB_02f2ad2c;
      case 0x17:
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar36 = *(float *)param_3[3];
        fVar37 = *(float *)(param_3[3] + 4);
        fVar40 = *(float *)(param_3[3] + 8);
        local_120 = *(float *)(lVar27 + 0x60) * fVar40 +
                    *(float *)(lVar27 + 0x40) * fVar36 + *(float *)(lVar27 + 0x50) * fVar37;
        fStack_11c = *(float *)(lVar27 + 100) * fVar40 +
                     *(float *)(lVar27 + 0x44) * fVar36 + *(float *)(lVar27 + 0x54) * fVar37;
        fStack_118 = *(float *)(lVar27 + 0x68) * fVar40 +
                     *(float *)(lVar27 + 0x48) * fVar36 + *(float *)(lVar27 + 0x58) * fVar37;
        fStack_114 = *(float *)(lVar27 + 0x6c) * fVar40 +
                     *(float *)(lVar27 + 0x4c) * fVar36 + *(float *)(lVar27 + 0x5c) * fVar37;
        fVar36 = *(float *)param_4[3] - *(float *)(lVar29 + 0x70);
        fVar37 = *(float *)(param_4[3] + 4) - *(float *)(lVar29 + 0x74);
        fVar40 = *(float *)(param_4[3] + 8) - *(float *)(lVar29 + 0x78);
        local_130 = *(float *)(lVar29 + 0x60) * fVar40 +
                    *(float *)(lVar29 + 0x40) * fVar36 + *(float *)(lVar29 + 0x50) * fVar37;
        fStack_12c = *(float *)(lVar29 + 100) * fVar40 +
                     *(float *)(lVar29 + 0x44) * fVar36 + *(float *)(lVar29 + 0x54) * fVar37;
        fStack_128 = *(float *)(lVar29 + 0x68) * fVar40 +
                     *(float *)(lVar29 + 0x48) * fVar36 + *(float *)(lVar29 + 0x58) * fVar37;
        fStack_124 = *(float *)(lVar29 + 0x6c) * fVar40 +
                     *(float *)(lVar29 + 0x4c) * fVar36 + *(float *)(lVar29 + 0x5c) * fVar37;
        uVar116 = NEON_fmaxp(*(undefined8 *)(lVar27 + 0x30),*(undefined8 *)(lVar27 + 0x30),4);
        uVar112 = (undefined4)*(undefined8 *)(lVar27 + 0x38);
        uVar173 = NEON_fmaxp(*(undefined8 *)(lVar29 + 0x30),*(undefined8 *)(lVar29 + 0x30),4);
        uVar113 = (undefined4)*(undefined8 *)(lVar29 + 0x38);
        fVar39 = fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar40 = 0.0;
        fVar221 = 0.0;
        if (fVar39 != 0.0) {
          uVar222 = NEON_fmov(0x3f800000,4);
          fVar40 = (float)uVar222 / SQRT(fVar39);
          fVar221 = (float)((ulong)uVar222 >> 0x20) /
                    SQRT(fStack_118 * fStack_118 + local_120 * local_120 + fStack_11c * fStack_11c);
        }
        uVar116 = NEON_fmax(CONCAT44(uVar112,uVar112),uVar116,4);
        uVar173 = NEON_fmax(CONCAT44(uVar113,uVar113),uVar173,4);
        fVar39 = fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c;
        if (fVar39 != 0.0) {
          uVar222 = NEON_fmov(0x3f800000,4);
          fVar36 = (float)uVar222 / SQRT(fVar39);
          fVar37 = (float)((ulong)uVar222 >> 0x20) /
                   SQRT(fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c);
        }
        uVar222 = NEON_fmax(uVar116,uVar173,4);
        uVar116 = NEON_fmax(CONCAT44((float)((ulong)uVar116 >> 0x20) * fVar221,
                                     (float)uVar116 * fVar40),
                            CONCAT44((float)((ulong)uVar173 >> 0x20) * fVar37,
                                     (float)uVar173 * fVar36),4);
        uVar173 = NEON_fmax(uVar222,0x3400000034000000,4);
        uVar116 = NEON_fmax(uVar116,0x3400000034000000,4);
        fVar36 = *(float *)(param_6 + 8) * pfVar22[3];
        param_1 = pfVar22 + 4;
        local_100 = NEON_fmin(CONCAT44(fVar36 / (float)((ulong)uVar173 >> 0x20),
                                       fVar36 / (float)uVar173),CONCAT44(pfVar22[2],pfVar22[2]),4);
        local_108 = NEON_fmin(CONCAT44(fVar36 / (float)((ulong)uVar116 >> 0x20),
                                       fVar36 / (float)uVar116),CONCAT44(pfVar22[1],pfVar22[1]),4);
        break;
      case 0x18:
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        fVar36 = *(float *)param_3[2];
        fVar37 = *(float *)(param_3[2] + 4);
        fVar40 = *(float *)(param_3[2] + 8);
        fVar221 = *(float *)(lVar27 + 0x60);
        fVar39 = *(float *)(lVar27 + 100);
        fVar114 = *(float *)(lVar27 + 0x68);
        plVar24 = (long *)*param_7;
        fVar143 = *(float *)*param_3;
        fVar220 = *(float *)(*param_3 + 4);
        fVar248 = *(float *)(*param_3 + 8);
        fVar84 = *(float *)param_3[1];
        fVar115 = *(float *)(param_3[1] + 4);
        fVar145 = *(float *)(param_3[1] + 8);
        fVar171 = *(float *)(lVar27 + 0x40);
        fVar300 = *(float *)(lVar27 + 0x44);
        fVar314 = *(float *)(lVar27 + 0x48);
        fVar318 = *(float *)(lVar27 + 0x50);
        fVar301 = *(float *)(lVar27 + 0x54);
        fVar265 = *(float *)(lVar27 + 0x58);
        fVar336 = fVar221 * fVar40 + fVar171 * fVar36 + fVar318 * fVar37;
        fVar338 = fVar39 * fVar40 + fVar300 * fVar36 + fVar301 * fVar37;
        fVar36 = fVar114 * fVar40 + fVar314 * fVar36 + fVar265 * fVar37;
        fVar170 = fVar221 * fVar248 + fVar171 * fVar143 + fVar318 * fVar220;
        fVar192 = fVar39 * fVar248 + fVar300 * fVar143 + fVar301 * fVar220;
        fVar193 = fVar114 * fVar248 + fVar314 * fVar143 + fVar265 * fVar220;
        fVar37 = *(float *)(lVar29 + 0x40);
        fVar40 = *(float *)(lVar29 + 0x44);
        fVar143 = *(float *)(lVar29 + 0x48);
        fVar220 = *(float *)(lVar29 + 0x50);
        fVar248 = *(float *)(lVar29 + 0x54);
        fVar299 = *(float *)(lVar29 + 0x58);
        fVar218 = *(float *)*param_4;
        fVar285 = *(float *)(*param_4 + 4);
        fVar38 = *(float *)(*param_4 + 8);
        fVar144 = *(float *)param_4[1];
        fVar168 = *(float *)(param_4[1] + 4);
        fVar169 = *(float *)(param_4[1] + 8);
        fVar328 = *(float *)(lVar29 + 0x60);
        fVar329 = *(float *)(lVar29 + 100);
        fVar331 = *(float *)(lVar29 + 0x68);
        fVar171 = fVar221 * fVar145 + fVar171 * fVar84 + fVar318 * fVar115;
        fVar300 = fVar39 * fVar145 + fVar300 * fVar84 + fVar301 * fVar115;
        fVar84 = fVar114 * fVar145 + fVar314 * fVar84 + fVar265 * fVar115;
        fVar221 = *(float *)param_4[2];
        fVar39 = *(float *)(param_4[2] + 4);
        fVar114 = *(float *)(param_4[2] + 8);
        if (fVar36 < 0.0) {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar192 = fVar192 + fVar171;
          fVar115 = (float)uVar116 - fVar36;
          if (fVar170 <= fVar300) {
            fVar115 = fVar115 - (fVar170 - fVar300);
            fVar145 = fVar84 + fVar338;
            fVar36 = fVar336 - fVar193;
            fVar171 = fVar192;
          }
          else {
            fVar145 = fVar193 + fVar336;
            fVar36 = fVar84 - fVar338;
            fVar171 = (fVar170 - fVar300) + fVar115;
            fVar115 = fVar192;
          }
        }
        else {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar192 = fVar192 - fVar171;
          fVar36 = fVar36 + (float)uVar116;
          if (-fVar300 <= fVar170) {
            fVar171 = fVar84 - fVar338;
            fVar115 = fVar336 - fVar193;
            fVar36 = fVar170 + fVar300 + fVar36;
            fVar145 = fVar192;
          }
          else {
            fVar171 = fVar193 + fVar336;
            fVar115 = fVar84 + fVar338;
            fVar145 = fVar36 - (fVar170 + fVar300);
            fVar36 = fVar192;
          }
        }
        fVar318 = fVar328 * fVar38 + fVar37 * fVar218 + fVar220 * fVar285;
        fVar301 = fVar329 * fVar38 + fVar40 * fVar218 + fVar248 * fVar285;
        fVar265 = fVar331 * fVar38 + fVar143 * fVar218 + fVar299 * fVar285;
        fVar218 = fVar328 * fVar169 + fVar37 * fVar144 + fVar220 * fVar168;
        fVar285 = fVar329 * fVar169 + fVar40 * fVar144 + fVar248 * fVar168;
        fVar38 = fVar331 * fVar169 + fVar143 * fVar144 + fVar299 * fVar168;
        fVar84 = fVar171 * fVar171 + fVar115 * fVar115;
        fVar314 = fVar145 * fVar145 + fVar36 * fVar36;
        fVar300 = fVar84 + fVar314;
        fVar220 = fVar328 * fVar114 + fVar37 * fVar221 + fVar220 * fVar39;
        fVar40 = fVar329 * fVar114 + fVar40 * fVar221 + fVar248 * fVar39;
        fVar37 = fVar331 * fVar114 + fVar143 * fVar221 + fVar299 * fVar39;
        if (fVar300 == 0.0) {
          auVar58 = ZEXT816(0);
        }
        else {
          fVar300 = SQRT(fVar300);
          fVar221 = SQRT(fVar84 + fVar314);
          auVar58._0_4_ = fVar171 / fVar300;
          auVar58._4_4_ = fVar115 / fVar221;
          auVar58._8_4_ = fVar145 / fVar300;
          auVar58._12_4_ = fVar36 / fVar221;
        }
        if (fVar37 < 0.0) {
          fVar301 = fVar301 + fVar218;
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar36 = (float)uVar116 - fVar37;
          if (fVar318 <= fVar285) {
            fVar36 = fVar36 - (fVar318 - fVar285);
            fVar39 = fVar38 + fVar40;
            fVar37 = fVar220 - fVar265;
            fVar221 = fVar301;
          }
          else {
            fVar39 = fVar265 + fVar220;
            fVar37 = fVar38 - fVar40;
            fVar221 = (fVar318 - fVar285) + fVar36;
            fVar36 = fVar301;
          }
        }
        else {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar301 = fVar301 - fVar218;
          fVar37 = fVar37 + (float)uVar116;
          if (-fVar285 <= fVar318) {
            fVar221 = fVar38 - fVar40;
            fVar36 = fVar220 - fVar265;
            fVar37 = fVar318 + fVar285 + fVar37;
            fVar39 = fVar301;
          }
          else {
            fVar221 = fVar265 + fVar220;
            fVar36 = fVar38 + fVar40;
            fVar39 = fVar37 - (fVar318 + fVar285);
            fVar37 = fVar301;
          }
        }
        fVar40 = fVar221 * fVar221 + fVar36 * fVar36;
        fVar143 = fVar39 * fVar39 + fVar37 * fVar37;
        fVar114 = fVar40 + fVar143;
        if (fVar114 == 0.0) {
          auVar81 = ZEXT816(0);
        }
        else {
          fVar114 = SQRT(fVar114);
          fVar40 = SQRT(fVar40 + fVar143);
          auVar81._0_4_ = fVar221 / fVar114;
          auVar81._4_4_ = fVar36 / fVar40;
          auVar81._8_4_ = fVar39 / fVar114;
          auVar81._12_4_ = fVar37 / fVar40;
        }
        plVar24[3] = auVar58._8_8_;
        plVar24[2] = auVar58._0_8_;
        plVar24[5] = auVar81._8_8_;
        plVar24[4] = auVar81._0_8_;
        fVar36 = *(float *)(param_6 + 8);
        fVar37 = pfVar22[1];
        fVar40 = *(float *)(param_6 + 0x70);
        plVar24[1] = CONCAT44(pfVar22[2] * *(float *)(param_6 + 0x74),(int)local_100);
        *plVar24 = (ulong)(uint)(fVar36 * fVar37 * fVar40) << 0x20;
        fVar36 = *(float *)(lVar27 + 0x80);
        fVar37 = *(float *)(lVar27 + 0x84);
        fVar40 = *(float *)(lVar27 + 0x88);
        uVar112 = *(undefined4 *)(lVar27 + 0x8c);
        *(float *)(plVar24 + 7) = fVar40;
        *(undefined4 *)((long)plVar24 + 0x3c) = uVar112;
        *(float *)(plVar24 + 6) = fVar36;
        *(float *)((long)plVar24 + 0x34) = fVar37;
        auVar102._0_4_ = -fVar36;
        auVar102._4_4_ = -fVar37;
        auVar102._8_4_ = -fVar40;
        auVar102._12_4_ = uVar112;
        auVar138._8_8_ = _UNK_03caab28;
        auVar138._0_8_ = _DAT_03caab20;
        auVar183._8_8_ = _UNK_03caa778;
        auVar183._0_8_ = _DAT_03caa770;
        auVar211._8_8_ = _UNK_03caa6a8;
        auVar211._0_8_ = _DAT_03caa6a0;
        auVar258._8_8_ = _UNK_03caab38;
        auVar258._0_8_ = _DAT_03caab30;
        auVar163 = a64_TBL(ZEXT816(0),auVar58,auVar211);
        auVar293 = a64_TBL(ZEXT816(0),auVar102,auVar138);
        auVar139 = a64_TBL(ZEXT816(0),auVar102,auVar183);
        auVar105 = a64_TBL(ZEXT816(0),auVar58,auVar258);
        auVar56 = *(undefined1 (*) [16])(lVar29 + 0x80);
        auVar241._0_4_ = -auVar56._0_4_;
        auVar241._4_4_ = -auVar56._4_4_;
        auVar241._8_4_ = -auVar56._8_4_;
        auVar273._0_4_ = auVar139._0_4_ * auVar105._0_4_ - auVar293._0_4_ * auVar163._0_4_;
        auVar273._4_4_ = auVar139._4_4_ * auVar105._4_4_ - auVar293._4_4_ * auVar163._4_4_;
        auVar273._8_4_ = auVar139._8_4_ * auVar105._8_4_ - auVar293._8_4_ * auVar163._8_4_;
        auVar273._12_4_ = auVar139._12_4_ * auVar105._12_4_ - auVar293._12_4_ * auVar163._12_4_;
        auVar290._8_8_ = _UNK_03cab148;
        auVar290._0_8_ = _DAT_03cab140;
        auVar241._12_4_ = auVar56._12_4_;
        auVar189 = a64_TBL(ZEXT816(0),auVar273,auVar290);
        auVar54._12_4_ =
             auVar189._12_4_ -
             (auVar139._12_4_ * auVar163._12_4_ + auVar293._12_4_ * auVar105._12_4_);
        *(undefined4 *)plVar24 = 0x34000000;
        auVar77 = a64_TBL(ZEXT816(0),auVar241,auVar138);
        auVar164 = a64_TBL(ZEXT816(0),auVar241,auVar183);
        auVar274 = a64_TBL(ZEXT816(0),auVar81,auVar211);
        auVar106 = a64_TBL(ZEXT816(0),auVar81,auVar258);
        auVar308._0_4_ = auVar164._0_4_ * auVar106._0_4_ - auVar77._0_4_ * auVar274._0_4_;
        auVar308._4_4_ = auVar164._4_4_ * auVar106._4_4_ - auVar77._4_4_ * auVar274._4_4_;
        auVar308._8_4_ = auVar164._8_4_ * auVar106._8_4_ - auVar77._8_4_ * auVar274._8_4_;
        auVar308._12_4_ = auVar164._12_4_ * auVar106._12_4_ - auVar77._12_4_ * auVar274._12_4_;
        auVar309 = a64_TBL(ZEXT816(0),auVar308,auVar290);
        auVar54._0_4_ =
             --(auVar189._0_4_ - (auVar139._0_4_ * auVar163._0_4_ + auVar293._0_4_ * auVar105._0_4_)
               );
        auVar54._4_4_ =
             --(auVar189._4_4_ - (auVar139._4_4_ * auVar163._4_4_ + auVar293._4_4_ * auVar105._4_4_)
               );
        auVar54._8_4_ =
             --(auVar189._8_4_ - (auVar139._8_4_ * auVar163._8_4_ + auVar293._8_4_ * auVar105._8_4_)
               );
        auVar75._12_4_ =
             auVar309._12_4_ -
             (auVar164._12_4_ * auVar274._12_4_ + auVar77._12_4_ * auVar106._12_4_);
        auVar75._0_4_ =
             -(auVar309._0_4_ - (auVar164._0_4_ * auVar274._0_4_ + auVar77._0_4_ * auVar106._0_4_));
        auVar75._4_4_ =
             -(auVar309._4_4_ - (auVar164._4_4_ * auVar274._4_4_ + auVar77._4_4_ * auVar106._4_4_));
        auVar75._8_4_ =
             -(auVar309._8_4_ - (auVar164._8_4_ * auVar274._8_4_ + auVar77._8_4_ * auVar106._8_4_));
        auVar139 = a64_TBL(ZEXT816(0),auVar54,auVar138);
        auVar105 = a64_TBL(ZEXT816(0),auVar54,auVar183);
        auVar77 = a64_TBL(ZEXT816(0),auVar75,auVar211);
        auVar106 = a64_TBL(ZEXT816(0),auVar75,auVar258);
        auVar184._0_4_ = auVar105._0_4_ * auVar106._0_4_ - auVar139._0_4_ * auVar77._0_4_;
        auVar184._4_4_ = auVar105._4_4_ * auVar106._4_4_ - auVar139._4_4_ * auVar77._4_4_;
        auVar184._8_4_ = auVar105._8_4_ * auVar106._8_4_ - auVar139._8_4_ * auVar77._8_4_;
        auVar184._12_4_ = auVar105._12_4_ * auVar106._12_4_ - auVar139._12_4_ * auVar77._12_4_;
        auVar293 = a64_TBL(ZEXT816(0),auVar184,auVar290);
        auVar55._12_4_ =
             auVar293._12_4_ -
             (auVar105._12_4_ * auVar77._12_4_ + auVar139._12_4_ * auVar106._12_4_);
        auVar55._0_8_ =
             CONCAT44(-(auVar293._4_4_ -
                       (auVar105._4_4_ * auVar77._4_4_ + auVar139._4_4_ * auVar106._4_4_)),
                      -(auVar293._0_4_ -
                       (auVar105._0_4_ * auVar77._0_4_ + auVar139._0_4_ * auVar106._0_4_)));
        auVar55._8_4_ =
             -(auVar293._8_4_ - (auVar105._8_4_ * auVar77._8_4_ + auVar139._8_4_ * auVar106._8_4_));
        plVar24[9] = auVar56._8_8_;
        plVar24[8] = auVar56._0_8_;
        plVar24[0xb] = auVar55._8_8_;
        plVar24[10] = auVar55._0_8_;
        pfVar25 = (float *)(plVar24 + 0xc);
        *(undefined1 *)plVar24 = 0x17;
LAB_02f29eb0:
        param_1 = pfVar22 + 4;
        *param_7 = (long)pfVar25;
LAB_02f2a078:
        lVar27 = param_7[1] + 0x18;
LAB_02f2a080:
        param_7[1] = lVar27;
        break;
      case 0x19:
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        uVar116 = *(undefined8 *)(lVar29 + 0x70);
        pfVar25 = (float *)*param_7;
        *(undefined8 *)(pfVar25 + 0x22) = *(undefined8 *)(lVar29 + 0x78);
        *(undefined8 *)(pfVar25 + 0x20) = uVar116;
        uVar116 = *(undefined8 *)(lVar27 + 0x80);
        *(undefined8 *)(pfVar25 + 0x26) = *(undefined8 *)(lVar27 + 0x88);
        *(undefined8 *)(pfVar25 + 0x24) = uVar116;
        uVar116 = *(undefined8 *)(lVar29 + 0x80);
        *(undefined8 *)(pfVar25 + 0x2a) = *(undefined8 *)(lVar29 + 0x88);
        *(undefined8 *)(pfVar25 + 0x28) = uVar116;
        fVar36 = pfVar22[8];
        fVar37 = pfVar22[9];
        fVar40 = pfVar22[0xb];
        fVar221 = pfVar22[0xc];
        fVar39 = pfVar22[0xd];
        fVar114 = pfVar22[0xe];
        fVar143 = pfVar22[0xf];
        fVar318 = *(float *)(param_6 + 4);
        fVar220 = pfVar22[0x10];
        fVar248 = pfVar22[0x11];
        fVar84 = pfVar22[0x12];
        fVar115 = pfVar22[0x13];
        fVar145 = pfVar22[0x14];
        fVar171 = pfVar22[0x15];
        fVar300 = pfVar22[0x16];
        fVar314 = pfVar22[0x17];
        pfVar25[2] = pfVar22[10] * fVar318;
        pfVar25[3] = fVar40 * fVar318;
        *pfVar25 = fVar36 * fVar318;
        pfVar25[1] = fVar37 * fVar318;
        pfVar25[6] = fVar114 * fVar318;
        pfVar25[7] = fVar143 * fVar318;
        pfVar25[4] = fVar221 * fVar318;
        pfVar25[5] = fVar39 * fVar318;
        pfVar25[10] = fVar84 * fVar318;
        pfVar25[0xb] = fVar115 * fVar318;
        pfVar25[8] = fVar220 * fVar318;
        pfVar25[9] = fVar248 * fVar318;
        pfVar25[0xe] = fVar300 * fVar318;
        pfVar25[0xf] = fVar314 * fVar318;
        pfVar25[0xc] = fVar145 * fVar318;
        pfVar25[0xd] = fVar171 * fVar318;
        fVar36 = *(float *)param_3[3] - *(float *)(lVar27 + 0x70);
        fVar40 = *(float *)(param_3[3] + 4) - *(float *)(lVar27 + 0x74);
        fVar39 = *(float *)(param_3[3] + 8) - *(float *)(lVar27 + 0x78);
        fVar114 = *(float *)param_4[3] - *(float *)(lVar29 + 0x70);
        fVar143 = *(float *)(param_4[3] + 4) - *(float *)(lVar29 + 0x74);
        fVar115 = *(float *)(param_4[3] + 8) - *(float *)(lVar29 + 0x78);
        fVar37 = *(float *)(lVar27 + 0x60) * fVar39 +
                 *(float *)(lVar27 + 0x40) * fVar36 + *(float *)(lVar27 + 0x50) * fVar40;
        fVar221 = *(float *)(lVar27 + 100) * fVar39 +
                  *(float *)(lVar27 + 0x44) * fVar36 + *(float *)(lVar27 + 0x54) * fVar40;
        fVar36 = *(float *)(lVar27 + 0x68) * fVar39 +
                 *(float *)(lVar27 + 0x48) * fVar36 + *(float *)(lVar27 + 0x58) * fVar40;
        fVar40 = *(float *)(lVar29 + 0x60) * fVar115 +
                 *(float *)(lVar29 + 0x40) * fVar114 + *(float *)(lVar29 + 0x50) * fVar143;
        fVar39 = *(float *)(lVar29 + 100) * fVar115 +
                 *(float *)(lVar29 + 0x44) * fVar114 + *(float *)(lVar29 + 0x54) * fVar143;
        fVar114 = *(float *)(lVar29 + 0x68) * fVar115 +
                  *(float *)(lVar29 + 0x48) * fVar114 + *(float *)(lVar29 + 0x58) * fVar143;
        pfVar25[0x12] = fVar36;
        pfVar25[0x13] = SQRT(fVar37 * fVar37 + fVar221 * fVar221 + fVar36 * fVar36);
        pfVar25[0x10] = fVar37;
        pfVar25[0x11] = fVar221;
        pfVar25[0x16] = fVar114;
        pfVar25[0x17] = SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar114 * fVar114);
        pfVar25[0x14] = fVar40;
        pfVar25[0x15] = fVar39;
        pfVar31 = *(float **)(param_6 + 0x40);
        fVar36 = pfVar22[4];
        fVar37 = pfVar22[5];
        fVar40 = pfVar22[6];
        fVar221 = pfVar31[8] * fVar40 + *pfVar31 * fVar36 + pfVar31[4] * fVar37;
        fVar39 = pfVar31[9] * fVar40 + pfVar31[1] * fVar36 + pfVar31[5] * fVar37;
        fVar40 = pfVar31[10] * fVar40 + pfVar31[2] * fVar36 + pfVar31[6] * fVar37;
        fVar36 = *(float *)(lVar27 + 0x3c);
        fVar37 = *(float *)(lVar29 + 0x3c);
        uVar116 = NEON_fmov(0x3f800000,4);
        fVar114 = (float)uVar116 / (fVar36 + fVar37);
        fVar143 = (float)((ulong)uVar116 >> 0x20) / (fVar36 + fVar37);
        fVar115 = fVar114 * fVar37;
        fVar37 = fVar143 * fVar37;
        fVar114 = fVar114 * fVar36;
        fVar143 = fVar143 * fVar36;
        auVar118._0_8_ =
             CONCAT44((*(float *)(lVar27 + 100) * fVar40 +
                      *(float *)(lVar27 + 0x44) * fVar221 + *(float *)(lVar27 + 0x54) * fVar39) *
                      fVar37,(*(float *)(lVar27 + 0x60) * fVar40 +
                             *(float *)(lVar27 + 0x40) * fVar221 +
                             *(float *)(lVar27 + 0x50) * fVar39) * fVar115);
        auVar118._8_4_ =
             (*(float *)(lVar27 + 0x68) * fVar40 +
             *(float *)(lVar27 + 0x48) * fVar221 + *(float *)(lVar27 + 0x58) * fVar39) * fVar115;
        auVar131._12_4_ =
             (*(float *)(lVar27 + 0x6c) * fVar40 +
             *(float *)(lVar27 + 0x4c) * fVar221 + *(float *)(lVar27 + 0x5c) * fVar39) * fVar37;
        auVar131._0_12_ = auVar118;
        auVar87._0_8_ =
             CONCAT44((*(float *)(lVar29 + 100) * fVar40 +
                      *(float *)(lVar29 + 0x44) * fVar221 + *(float *)(lVar29 + 0x54) * fVar39) *
                      fVar143,(*(float *)(lVar29 + 0x60) * fVar40 +
                              *(float *)(lVar29 + 0x40) * fVar221 +
                              *(float *)(lVar29 + 0x50) * fVar39) * fVar114);
        auVar87._8_4_ =
             (*(float *)(lVar29 + 0x68) * fVar40 +
             *(float *)(lVar29 + 0x48) * fVar221 + *(float *)(lVar29 + 0x58) * fVar39) * fVar114;
        auVar95._12_4_ =
             (*(float *)(lVar29 + 0x6c) * fVar40 +
             *(float *)(lVar29 + 0x4c) * fVar221 + *(float *)(lVar29 + 0x5c) * fVar39) * fVar143;
        auVar95._0_12_ = auVar87;
        *(long *)(pfVar25 + 0x1a) = auVar131._8_8_;
        *(undefined8 *)(pfVar25 + 0x18) = auVar118._0_8_;
        *(long *)(pfVar25 + 0x1e) = auVar95._8_8_;
        *(undefined8 *)(pfVar25 + 0x1c) = auVar87._0_8_;
        auVar56 = *(undefined1 (*) [16])(pfVar22 + 4);
        fVar36 = *(float *)(param_6 + 0x70);
        fVar37 = *(float *)(param_6 + 8);
        pfVar25[10] = fVar84 * fVar318;
        pfVar25[0xb] = fVar36;
        pfVar25[8] = fVar220 * fVar318;
        pfVar25[9] = fVar248 * fVar318;
        pfVar25[0xe] = fVar300 * fVar318;
        pfVar25[0xf] = fVar36 * fVar37;
        pfVar25[0xc] = fVar145 * fVar318;
        pfVar25[0xd] = fVar171 * fVar318;
        auVar132._12_4_ =
             SQRT(auVar56._0_4_ * auVar56._0_4_ + auVar56._4_4_ * auVar56._4_4_ +
                  auVar56._8_4_ * auVar56._8_4_);
        auVar132._0_12_ = auVar118;
        auVar96._12_4_ = auVar56._12_4_;
        auVar96._0_12_ = auVar87;
        *pfVar25 = *pfVar25 + 1.1920929e-07;
        *(long *)(pfVar25 + 0x1a) = auVar132._8_8_;
        *(undefined8 *)(pfVar25 + 0x18) = auVar118._0_8_;
        *(long *)(pfVar25 + 0x1e) = auVar96._8_8_;
        *(undefined8 *)(pfVar25 + 0x1c) = auVar87._0_8_;
        pfVar31 = pfVar25 + 0x2c;
        *(undefined1 *)pfVar25 = 0x18;
        goto LAB_02f2a070;
      case 0x1a:
        lVar27 = *(long *)(param_6 + 0x30);
        lVar29 = *(long *)(param_6 + 0x38);
        uVar116 = *(undefined8 *)(lVar27 + 0x70);
        pfVar25 = (float *)*param_7;
        *(undefined8 *)(pfVar25 + 0x22) = *(undefined8 *)(lVar27 + 0x78);
        *(undefined8 *)(pfVar25 + 0x20) = uVar116;
        uVar116 = *(undefined8 *)(lVar29 + 0x70);
        *(undefined8 *)(pfVar25 + 0x26) = *(undefined8 *)(lVar29 + 0x78);
        *(undefined8 *)(pfVar25 + 0x24) = uVar116;
        uVar116 = *(undefined8 *)(lVar27 + 0x80);
        *(undefined8 *)(pfVar25 + 0x2a) = *(undefined8 *)(lVar27 + 0x88);
        *(undefined8 *)(pfVar25 + 0x28) = uVar116;
        uVar116 = *(undefined8 *)(lVar29 + 0x80);
        *(undefined8 *)(pfVar25 + 0x2e) = *(undefined8 *)(lVar29 + 0x88);
        *(undefined8 *)(pfVar25 + 0x2c) = uVar116;
        fVar83 = *(float *)(param_6 + 4);
        fVar36 = pfVar22[8];
        fVar37 = pfVar22[0xc];
        fVar40 = pfVar22[0xd];
        fVar221 = pfVar22[0xe];
        fVar39 = pfVar22[0xf];
        fVar114 = pfVar22[0x10];
        fVar143 = pfVar22[0x11];
        fVar220 = pfVar22[0x12];
        fVar248 = pfVar22[0x13];
        auVar56._0_8_ = CONCAT44(pfVar22[9] * fVar83,fVar36 * fVar83);
        auVar56._8_4_ = pfVar22[10] * fVar83;
        auVar56._12_4_ = pfVar22[0xb] * fVar83;
        auVar88._0_8_ = CONCAT44(pfVar22[0x15] * fVar83,pfVar22[0x14] * fVar83);
        auVar88._8_4_ = pfVar22[0x16] * fVar83;
        auVar105._12_4_ = pfVar22[0x17] * fVar83;
        auVar105._0_12_ = auVar88;
        *(long *)(pfVar25 + 2) = auVar56._8_8_;
        *(undefined8 *)pfVar25 = auVar56._0_8_;
        pfVar25[6] = fVar221 * fVar83;
        pfVar25[7] = fVar39 * fVar83;
        pfVar25[4] = fVar37 * fVar83;
        pfVar25[5] = fVar40 * fVar83;
        pfVar25[10] = fVar220 * fVar83;
        pfVar25[0xb] = fVar248 * fVar83;
        pfVar25[8] = fVar114 * fVar83;
        pfVar25[9] = fVar143 * fVar83;
        *(long *)(pfVar25 + 0xe) = auVar105._8_8_;
        *(undefined8 *)(pfVar25 + 0xc) = auVar88._0_8_;
        fVar39 = *(float *)param_3[2];
        fVar248 = *(float *)(param_3[2] + 4);
        fVar84 = *(float *)(param_3[2] + 8);
        fVar115 = *(float *)(lVar27 + 0x40);
        fVar145 = *(float *)(lVar27 + 0x44);
        fVar171 = *(float *)(lVar27 + 0x48);
        fVar300 = *(float *)(lVar27 + 0x50);
        fVar314 = *(float *)(lVar27 + 0x54);
        fVar318 = *(float *)(lVar27 + 0x58);
        fVar301 = *(float *)*param_3;
        fVar265 = *(float *)(*param_3 + 4);
        fVar299 = *(float *)(*param_3 + 8);
        fVar218 = *(float *)param_3[1];
        fVar285 = *(float *)(param_3[1] + 4);
        fVar38 = *(float *)(param_3[1] + 8);
        fVar144 = *(float *)(lVar27 + 0x60);
        fVar168 = *(float *)(lVar27 + 100);
        fVar169 = *(float *)(lVar27 + 0x68);
        fVar328 = *(float *)(lVar29 + 0x60);
        fVar329 = *(float *)(lVar29 + 100);
        fVar331 = *(float *)(lVar29 + 0x68);
        fVar284 = fVar144 * fVar299 + fVar115 * fVar301 + fVar300 * fVar265;
        fVar297 = fVar168 * fVar299 + fVar145 * fVar301 + fVar314 * fVar265;
        fVar298 = fVar169 * fVar299 + fVar171 * fVar301 + fVar318 * fVar265;
        fVar341 = fVar144 * fVar84 + fVar115 * fVar39 + fVar300 * fVar248;
        fVar342 = fVar168 * fVar84 + fVar145 * fVar39 + fVar314 * fVar248;
        fVar343 = fVar169 * fVar84 + fVar171 * fVar39 + fVar318 * fVar248;
        fVar39 = *(float *)(lVar29 + 0x40);
        fVar248 = *(float *)(lVar29 + 0x44);
        fVar84 = *(float *)(lVar29 + 0x48);
        fVar301 = *(float *)(lVar29 + 0x50);
        fVar265 = *(float *)(lVar29 + 0x54);
        fVar299 = *(float *)(lVar29 + 0x58);
        fVar170 = *(float *)*param_4;
        fVar192 = *(float *)(*param_4 + 4);
        fVar193 = *(float *)(*param_4 + 8);
        fVar336 = *(float *)param_4[1];
        fVar338 = *(float *)(param_4[1] + 4);
        fVar344 = *(float *)(param_4[1] + 8);
        fVar300 = fVar144 * fVar38 + fVar115 * fVar218 + fVar300 * fVar285;
        fVar314 = fVar168 * fVar38 + fVar145 * fVar218 + fVar314 * fVar285;
        fVar318 = fVar169 * fVar38 + fVar171 * fVar218 + fVar318 * fVar285;
        fVar115 = *(float *)param_4[2];
        fVar145 = *(float *)(param_4[2] + 4);
        fVar171 = *(float *)(param_4[2] + 8);
        if (fVar343 < 0.0) {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar297 = fVar297 + fVar300;
          fVar300 = (float)uVar116 - fVar343;
          if (fVar284 <= fVar314) {
            fVar300 = fVar300 - (fVar284 - fVar314);
            fVar218 = fVar318 + fVar342;
            fVar343 = fVar341 - fVar298;
            fVar285 = fVar297;
          }
          else {
            fVar218 = fVar298 + fVar341;
            fVar343 = fVar318 - fVar342;
            fVar285 = (fVar284 - fVar314) + fVar300;
            fVar300 = fVar297;
          }
        }
        else {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar297 = fVar297 - fVar300;
          fVar343 = fVar343 + (float)uVar116;
          if (-fVar314 <= fVar284) {
            fVar285 = fVar318 - fVar342;
            fVar300 = fVar341 - fVar298;
            fVar343 = fVar284 + fVar314 + fVar343;
            fVar218 = fVar297;
          }
          else {
            fVar285 = fVar298 + fVar341;
            fVar300 = fVar318 + fVar342;
            fVar218 = fVar343 - (fVar284 + fVar314);
            fVar343 = fVar297;
          }
        }
        fVar144 = fVar328 * fVar193 + fVar39 * fVar170 + fVar301 * fVar192;
        fVar168 = fVar329 * fVar193 + fVar248 * fVar170 + fVar265 * fVar192;
        fVar169 = fVar331 * fVar193 + fVar84 * fVar170 + fVar299 * fVar192;
        fVar170 = fVar328 * fVar344 + fVar39 * fVar336 + fVar301 * fVar338;
        fVar192 = fVar329 * fVar344 + fVar248 * fVar336 + fVar265 * fVar338;
        fVar193 = fVar331 * fVar344 + fVar84 * fVar336 + fVar299 * fVar338;
        fVar314 = fVar285 * fVar285 + fVar300 * fVar300;
        fVar38 = fVar218 * fVar218 + fVar343 * fVar343;
        fVar318 = fVar314 + fVar38;
        fVar301 = fVar328 * fVar171 + fVar39 * fVar115 + fVar301 * fVar145;
        fVar248 = fVar329 * fVar171 + fVar248 * fVar115 + fVar265 * fVar145;
        fVar39 = fVar331 * fVar171 + fVar84 * fVar115 + fVar299 * fVar145;
        if (fVar318 == 0.0) {
          fVar285 = 0.0;
          fVar300 = 0.0;
          fVar218 = 0.0;
          fVar343 = 0.0;
        }
        else {
          fVar318 = SQRT(fVar318);
          fVar84 = SQRT(fVar314 + fVar38);
          fVar285 = fVar285 / fVar318;
          fVar300 = fVar300 / fVar84;
          fVar218 = fVar218 / fVar318;
          fVar343 = fVar343 / fVar84;
        }
        pfVar25[0x12] = fVar218;
        pfVar25[0x13] = fVar343;
        pfVar25[0x10] = fVar285;
        pfVar25[0x11] = fVar300;
        if (fVar39 < 0.0) {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar168 = fVar168 + fVar170;
          fVar84 = (float)uVar116 - fVar39;
          if (fVar144 <= fVar192) {
            fVar84 = fVar84 - (fVar144 - fVar192);
            fVar115 = fVar193 + fVar248;
            fVar39 = fVar301 - fVar169;
            fVar145 = fVar168;
          }
          else {
            fVar115 = fVar169 + fVar301;
            fVar39 = fVar193 - fVar248;
            fVar145 = (fVar144 - fVar192) + fVar84;
            fVar84 = fVar168;
          }
        }
        else {
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar168 = fVar168 - fVar170;
          fVar39 = fVar39 + (float)uVar116;
          if (-fVar192 <= fVar144) {
            fVar145 = fVar193 - fVar248;
            fVar84 = fVar301 - fVar169;
            fVar39 = fVar144 + fVar192 + fVar39;
            fVar115 = fVar168;
          }
          else {
            fVar145 = fVar169 + fVar301;
            fVar84 = fVar193 + fVar248;
            fVar115 = fVar39 - (fVar144 + fVar192);
            fVar39 = fVar168;
          }
        }
        fVar248 = fVar145 * fVar145 + fVar84 * fVar84;
        fVar300 = fVar115 * fVar115 + fVar39 * fVar39;
        fVar171 = fVar248 + fVar300;
        auVar163 = ZEXT816(0);
        fVar318 = 0.0;
        fVar301 = 0.0;
        fVar265 = 0.0;
        fVar314 = 0.0;
        if (fVar171 != 0.0) {
          fVar171 = SQRT(fVar171);
          fVar314 = SQRT(fVar248 + fVar300);
          fVar318 = fVar145 / fVar171;
          fVar301 = fVar84 / fVar314;
          fVar265 = fVar115 / fVar171;
          fVar314 = fVar39 / fVar314;
        }
        pfVar25[0x16] = fVar265;
        pfVar25[0x17] = fVar314;
        pfVar25[0x14] = fVar318;
        pfVar25[0x15] = fVar301;
        fVar39 = pfVar22[4];
        fVar248 = pfVar22[5];
        fVar84 = pfVar22[6];
        fVar115 = pfVar22[7];
        auVar291._0_4_ = fVar39 * (float)_DAT_03cabe50;
        auVar291._4_4_ = fVar248 * (float)((ulong)_DAT_03cabe50 >> 0x20);
        auVar291._8_4_ = fVar84 * (float)_UNK_03cabe58;
        auVar291._12_4_ = fVar115 * (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar318 = (float)((ulong)*(undefined8 *)(lVar29 + 0x38) >> 0x20);
        fVar171 = (float)((ulong)*(undefined8 *)(lVar27 + 0x38) >> 0x20) + fVar318;
        uVar116 = NEON_fmov(0x3f800000,4);
        auVar105 = NEON_ext(auVar291,auVar291,8,1);
        fVar145 = auVar105._0_4_ + auVar105._4_4_;
        fVar300 = ((float)uVar116 / fVar171) * fVar318;
        fVar318 = ((float)((ulong)uVar116 >> 0x20) / fVar171) * fVar318;
        bVar280 = (byte)(-(uint)(auVar291._0_4_ + auVar291._4_4_ + fVar145 < 0.0) >> 0x18);
        bVar281 = (byte)(-(uint)(auVar291._0_4_ + auVar291._4_4_ + fVar145 < 0.0) >> 0x18);
        uVar85 = CONCAT17(bVar281,(uint7)(bVar280 & 0x80) << 0x18) & 0x80ffffffffffffff;
        fVar314 = (float)CONCAT13((byte)(uVar85 >> 0x18) | (byte)((ulong)_DAT_03cabe50 >> 0x18),
                                  (int3)_DAT_03cabe50);
        auVar267._0_8_ =
             CONCAT17((byte)(uVar85 >> 0x38) | (byte)((ulong)_DAT_03cabe50 >> 0x38),
                      CONCAT16((char)((ulong)_DAT_03cabe50 >> 0x30),
                               CONCAT15((char)((ulong)_DAT_03cabe50 >> 0x28),
                                        CONCAT14((char)((ulong)_DAT_03cabe50 >> 0x20),fVar314))));
        auVar267[8] = (undefined1)_UNK_03cabe58;
        auVar267[9] = (undefined1)((ulong)_UNK_03cabe58 >> 8);
        auVar267[10] = (undefined1)((ulong)_UNK_03cabe58 >> 0x10);
        auVar267[0xb] = bVar280 & 0x80 | (byte)((ulong)_UNK_03cabe58 >> 0x18);
        auVar278[0xc] = (undefined1)((ulong)_UNK_03cabe58 >> 0x20);
        auVar278._0_12_ = auVar267;
        auVar278[0xd] = (undefined1)((ulong)_UNK_03cabe58 >> 0x28);
        auVar278[0xe] = (undefined1)((ulong)_UNK_03cabe58 >> 0x30);
        auVar278[0xf] = bVar281 & 0x80 | (byte)((ulong)_UNK_03cabe58 >> 0x38);
        fVar301 = (float)((ulong)auVar267._0_8_ >> 0x20);
        fVar314 = fVar300 * (fVar39 - fVar314) + fVar314;
        fVar301 = fVar318 * (fVar248 - fVar301) + fVar301;
        fVar300 = fVar300 * (fVar84 - auVar267._8_4_) + auVar267._8_4_;
        fVar318 = fVar318 * (fVar115 - auVar278._12_4_) + auVar278._12_4_;
        auVar262._0_4_ = fVar314 * fVar314;
        auVar262._4_4_ = fVar301 * fVar301;
        auVar262._8_4_ = fVar300 * fVar300;
        auVar262._12_4_ = fVar318 * fVar318;
        auVar105 = NEON_ext(auVar262,auVar262,8,1);
        fVar171 = auVar105._0_4_ + auVar105._4_4_;
        fVar145 = auVar262._0_4_ + auVar262._4_4_ + fVar171;
        if (fVar145 != 0.0) {
          fVar145 = SQRT(fVar145);
          fVar171 = SQRT(auVar262._0_4_ + auVar262._4_4_ + fVar171);
          auVar163._0_4_ = fVar314 / fVar145;
          auVar163._4_4_ = fVar301 / fVar171;
          auVar163._8_4_ = fVar300 / fVar145;
          auVar163._12_4_ = fVar318 / fVar171;
        }
        auVar212._0_4_ = -fVar39;
        auVar212._4_4_ = -fVar248;
        auVar212._8_4_ = -fVar84;
        auVar212._12_4_ = fVar115;
        auVar242._8_8_ = _UNK_03caab28;
        auVar242._0_8_ = _DAT_03caab20;
        auVar259._8_8_ = _UNK_03caa778;
        auVar259._0_8_ = _DAT_03caa770;
        auVar106 = a64_TBL(ZEXT816(0),auVar212,auVar242);
        auVar105 = a64_TBL(ZEXT816(0),auVar212,auVar259);
        auVar260._8_8_ = _UNK_03caa6a8;
        auVar260._0_8_ = _DAT_03caa6a0;
        auVar275._8_8_ = _UNK_03caab38;
        auVar275._0_8_ = _DAT_03caab30;
        auVar139 = a64_TBL(ZEXT816(0),auVar163,auVar260);
        auVar77 = a64_TBL(ZEXT816(0),auVar163,auVar275);
        auVar292._0_4_ = auVar105._0_4_ * auVar77._0_4_ - auVar106._0_4_ * auVar139._0_4_;
        auVar292._4_4_ = auVar105._4_4_ * auVar77._4_4_ - auVar106._4_4_ * auVar139._4_4_;
        auVar292._8_4_ = auVar105._8_4_ * auVar77._8_4_ - auVar106._8_4_ * auVar139._8_4_;
        auVar292._12_4_ = auVar105._12_4_ * auVar77._12_4_ - auVar106._12_4_ * auVar139._12_4_;
        auVar310._8_8_ = _UNK_03cab148;
        auVar310._0_8_ = _DAT_03cab140;
        auVar293 = a64_TBL(ZEXT816(0),auVar292,auVar310);
        *(long *)(pfVar25 + 0x1a) = auVar163._8_8_;
        *(long *)(pfVar25 + 0x18) = auVar163._0_8_;
        pfVar25[0x1e] =
             -(auVar293._8_4_ - (auVar105._8_4_ * auVar139._8_4_ + auVar106._8_4_ * auVar77._8_4_));
        pfVar25[0x1f] =
             auVar293._12_4_ -
             (auVar105._12_4_ * auVar139._12_4_ + auVar106._12_4_ * auVar77._12_4_);
        pfVar25[0x1c] =
             -(auVar293._0_4_ - (auVar105._0_4_ * auVar139._0_4_ + auVar106._0_4_ * auVar77._0_4_));
        pfVar25[0x1d] =
             -(auVar293._4_4_ - (auVar105._4_4_ * auVar139._4_4_ + auVar106._4_4_ * auVar77._4_4_));
        fVar39 = *(float *)(param_6 + 0x70);
        auVar105 = *(undefined1 (*) [16])(pfVar22 + 8);
        auVar243._0_4_ = pfVar22[4] * pfVar22[4];
        auVar243._4_4_ = pfVar22[5] * pfVar22[5];
        auVar243._8_4_ = pfVar22[6] * pfVar22[6];
        auVar243._12_4_ = pfVar22[7] * pfVar22[7];
        fVar248 = *(float *)(param_6 + 8);
        auVar106 = NEON_ext(auVar243,auVar243,8,1);
        fVar84 = auVar243._0_4_ + auVar243._4_4_ + auVar106._0_4_;
        auVar276._8_8_ = auVar56._8_8_;
        auVar276._0_8_ = auVar56._0_8_;
        auVar277._0_12_ = auVar276._0_12_;
        auVar277._12_4_ = fVar39;
        *(long *)(pfVar25 + 2) = auVar277._8_8_;
        *(undefined8 *)pfVar25 = auVar56._0_8_;
        pfVar25[6] = fVar221 * fVar83;
        pfVar25[7] = fVar39 * fVar248;
        pfVar25[4] = fVar37 * fVar83;
        pfVar25[5] = fVar40 * fVar83;
        auVar103._12_4_ = auVar105._12_4_;
        auVar103._0_12_ = auVar88;
        pfVar25[10] = fVar220 * fVar83;
        pfVar25[0xb] = (float)uVar116 - (fVar84 + fVar84);
        pfVar25[8] = fVar114 * fVar83;
        pfVar25[9] = fVar143 * fVar83;
        *(long *)(pfVar25 + 0xe) = auVar103._8_8_;
        *(undefined8 *)(pfVar25 + 0xc) = auVar88._0_8_;
        *pfVar25 = fVar36 * fVar83 + 1.1920929e-07;
        pfVar31 = pfVar25 + 0x30;
        *(undefined1 *)pfVar25 = 0x19;
LAB_02f2a070:
        *param_7 = (long)pfVar31;
        param_1 = pfVar22 + 0x18;
        goto LAB_02f2a078;
      case 0x1d:
        if (*(char *)((long)pfVar22 + 2) != '\0') {
          lVar27 = *(long *)(param_6 + 0x38);
          auVar56 = *(undefined1 (*) [16])(*(long *)(param_6 + 0x30) + 0x80);
          pfVar25 = (float *)*param_7;
          *(long *)(pfVar25 + 0x16) = auVar56._8_8_;
          *(long *)(pfVar25 + 0x14) = auVar56._0_8_;
          auVar105 = *(undefined1 (*) [16])(lVar27 + 0x80);
          *(long *)(pfVar25 + 0x1a) = auVar105._8_8_;
          *(long *)(pfVar25 + 0x18) = auVar105._0_8_;
          fVar36 = *(float *)param_3[2];
          fVar37 = *(float *)(param_3[2] + 4);
          fVar40 = *(float *)(param_3[2] + 8);
          fVar221 = *(float *)*param_3;
          fVar39 = *(float *)(*param_3 + 8);
          fVar114 = *(float *)(param_3[1] + 4);
          fVar143 = *(float *)(param_3[1] + 8);
          uVar116 = NEON_fmov(0x3f800000,4);
          fVar220 = (float)uVar116;
          if (fVar40 < 0.0) {
            fVar248 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
            if (fVar221 <= fVar114) {
              fVar221 = (fVar220 - fVar40) - (fVar221 - fVar114);
              fVar84 = fVar143 + fVar37;
              fVar115 = fVar36 - fVar39;
              fVar40 = fVar248;
            }
            else {
              fVar84 = fVar39 + fVar36;
              fVar115 = fVar143 - fVar37;
              fVar40 = (fVar221 - fVar114) + (fVar220 - fVar40);
              fVar221 = fVar248;
            }
          }
          else {
            fVar248 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
            if (-fVar114 <= fVar221) {
              fVar115 = fVar221 + fVar114 + fVar40 + fVar220;
              fVar84 = fVar248;
              fVar40 = fVar143 - fVar37;
              fVar221 = fVar36 - fVar39;
            }
            else {
              fVar84 = (fVar40 + fVar220) - (fVar221 + fVar114);
              fVar115 = fVar248;
              fVar40 = fVar39 + fVar36;
              fVar221 = fVar143 + fVar37;
            }
          }
          fVar36 = fVar40 * fVar40 + fVar221 * fVar221;
          fVar39 = fVar84 * fVar84 + fVar115 * fVar115;
          fVar37 = fVar36 + fVar39;
          auVar106 = ZEXT816(0);
          if (fVar37 != 0.0) {
            fVar37 = SQRT(fVar37);
            fVar36 = SQRT(fVar36 + fVar39);
            auVar106._0_4_ = fVar40 / fVar37;
            auVar106._4_4_ = fVar221 / fVar36;
            auVar106._8_4_ = fVar84 / fVar37;
            auVar106._12_4_ = fVar115 / fVar36;
          }
          fVar40 = (float)*(undefined8 *)(param_4[2] + 8);
          fVar36 = (float)*(undefined8 *)param_4[2];
          fVar37 = (float)((ulong)*(undefined8 *)param_4[2] >> 0x20);
          fVar221 = *(float *)*param_4;
          fVar39 = *(float *)(*param_4 + 8);
          fVar114 = *(float *)(param_4[1] + 4);
          fVar143 = *(float *)(param_4[1] + 8);
          if (fVar40 < 0.0) {
            fVar248 = *(float *)(*param_4 + 4) + *(float *)param_4[1];
            if (fVar221 <= fVar114) {
              fVar115 = (fVar220 - fVar40) - (fVar221 - fVar114);
              fVar145 = fVar143 + fVar37;
              fVar171 = fVar36 - fVar39;
              fVar84 = fVar248;
            }
            else {
              fVar145 = fVar39 + fVar36;
              fVar171 = fVar143 - fVar37;
              fVar84 = (fVar221 - fVar114) + (fVar220 - fVar40);
              fVar115 = fVar248;
            }
          }
          else {
            fVar248 = *(float *)(*param_4 + 4) - *(float *)param_4[1];
            if (-fVar114 <= fVar221) {
              fVar171 = fVar221 + fVar114 + fVar40 + fVar220;
              fVar84 = fVar143 - fVar37;
              fVar115 = fVar36 - fVar39;
              fVar145 = fVar248;
            }
            else {
              fVar84 = fVar39 + fVar36;
              fVar115 = fVar143 + fVar37;
              fVar145 = (fVar40 + fVar220) - (fVar221 + fVar114);
              fVar171 = fVar248;
            }
          }
          fVar36 = fVar84 * fVar84 + fVar115 * fVar115;
          fVar40 = fVar145 * fVar145 + fVar171 * fVar171;
          fVar37 = fVar36 + fVar40;
          if (fVar37 == 0.0) {
            auVar139 = ZEXT816(0);
          }
          else {
            fVar37 = SQRT(fVar37);
            fVar36 = SQRT(fVar36 + fVar40);
            auVar139._0_4_ = fVar84 / fVar37;
            auVar139._4_4_ = fVar115 / fVar36;
            auVar139._8_4_ = fVar145 / fVar37;
            auVar139._12_4_ = fVar171 / fVar36;
          }
          auVar77._8_8_ = _UNK_03caab28;
          auVar77._0_8_ = _DAT_03caab20;
          auVar189._8_8_ = _UNK_03caa778;
          auVar189._0_8_ = _DAT_03caa770;
          auVar309._8_8_ = _UNK_03caa6a8;
          auVar309._0_8_ = _DAT_03caa6a0;
          auVar245._8_8_ = _UNK_03caab38;
          auVar245._0_8_ = _DAT_03caab30;
          auVar262 = a64_TBL(ZEXT816(0),auVar56,auVar77);
          auVar163 = a64_TBL(ZEXT816(0),auVar105,auVar77);
          auVar77 = a64_TBL(ZEXT816(0),auVar56,auVar189);
          auVar56 = a64_TBL(ZEXT816(0),auVar105,auVar189);
          auVar278 = a64_TBL(ZEXT816(0),auVar106,auVar309);
          auVar105 = a64_TBL(ZEXT816(0),auVar106,auVar245);
          auVar189 = a64_TBL(ZEXT816(0),auVar139,auVar309);
          auVar139 = a64_TBL(ZEXT816(0),auVar139,auVar245);
          auVar164._0_4_ = auVar77._0_4_ * auVar105._0_4_ - auVar262._0_4_ * auVar278._0_4_;
          auVar164._4_4_ = auVar77._4_4_ * auVar105._4_4_ - auVar262._4_4_ * auVar278._4_4_;
          auVar164._8_4_ = auVar77._8_4_ * auVar105._8_4_ - auVar262._8_4_ * auVar278._8_4_;
          auVar164._12_4_ = auVar77._12_4_ * auVar105._12_4_ - auVar262._12_4_ * auVar278._12_4_;
          auVar293._8_8_ = _UNK_03cab148;
          auVar293._0_8_ = _DAT_03cab140;
          auVar274._0_4_ = auVar56._0_4_ * auVar139._0_4_ - auVar163._0_4_ * auVar189._0_4_;
          auVar274._4_4_ = auVar56._4_4_ * auVar139._4_4_ - auVar163._4_4_ * auVar189._4_4_;
          auVar274._8_4_ = auVar56._8_4_ * auVar139._8_4_ - auVar163._8_4_ * auVar189._8_4_;
          auVar274._12_4_ = auVar56._12_4_ * auVar139._12_4_ - auVar163._12_4_ * auVar189._12_4_;
          auVar164 = a64_TBL(ZEXT816(0),auVar164,auVar293);
          auVar106 = a64_TBL(ZEXT816(0),auVar274,auVar293);
          pfVar25[0xe] = --(auVar164._8_4_ -
                           (auVar77._8_4_ * auVar278._8_4_ + auVar262._8_4_ * auVar105._8_4_));
          pfVar25[0xf] = auVar164._12_4_ -
                         (auVar77._12_4_ * auVar278._12_4_ + auVar262._12_4_ * auVar105._12_4_);
          pfVar25[0xc] = --(auVar164._0_4_ -
                           (auVar77._0_4_ * auVar278._0_4_ + auVar262._0_4_ * auVar105._0_4_));
          pfVar25[0xd] = --(auVar164._4_4_ -
                           (auVar77._4_4_ * auVar278._4_4_ + auVar262._4_4_ * auVar105._4_4_));
          pfVar25[0x12] =
               --(auVar106._8_4_ -
                 (auVar56._8_4_ * auVar189._8_4_ + auVar163._8_4_ * auVar139._8_4_));
          pfVar25[0x13] =
               auVar106._12_4_ -
               (auVar56._12_4_ * auVar189._12_4_ + auVar163._12_4_ * auVar139._12_4_);
          pfVar25[0x10] =
               --(auVar106._0_4_ -
                 (auVar56._0_4_ * auVar189._0_4_ + auVar163._0_4_ * auVar139._0_4_));
          pfVar25[0x11] =
               --(auVar106._4_4_ -
                 (auVar56._4_4_ * auVar189._4_4_ + auVar163._4_4_ * auVar139._4_4_));
          pfVar25[6] = pfVar22[7];
          pfVar25[2] = pfVar22[5];
          pfVar25[3] = pfVar22[6];
          pfVar25[4] = pfVar22[8];
          pfVar25[5] = pfVar22[9];
          fVar36 = *(float *)(param_6 + 0x74);
          fVar37 = pfVar22[0xb];
          pfVar25[7] = *(float *)(param_6 + 0x70) * pfVar22[10] * *(float *)(param_6 + 8);
          pfVar25[8] = fVar36 * fVar37;
          *(undefined1 *)((long)pfVar25 + 5) = *(undefined1 *)(pfVar22 + 1);
          uVar315 = *(undefined1 *)((long)pfVar22 + 3);
          *pfVar25 = *pfVar25 + 1.1920929e-07;
          *(undefined1 *)(pfVar25 + 1) = uVar315;
          *(undefined1 *)pfVar25 = 0x1a;
          *param_7 = (long)(pfVar25 + 0x1c);
        }
        param_1 = pfVar22 + 0xc;
LAB_02f2a788:
        lVar27 = *plVar1 + 0x10;
LAB_02f2ad2c:
        *plVar1 = lVar27;
      }
      uVar35 = uVar35 + 1;
      bVar19 = param_1 < pfVar26;
    } while ((uVar35 < uVar34) && (pfVar22 = param_1, param_1 < pfVar26));
  }
  if (bVar19) {
    FUN_02f2ae80(param_1,pfVar26,param_6,param_7,param_8,param_3,param_4,&local_108,&local_100,
                 &local_120,&local_130);
  }
  if (param_9 != (float *)0x0) {
    pfVar26 = (float *)*param_7;
    *param_7 = (long)(pfVar26 + 4);
    *pfVar26 = *pfVar26 + 1.1920929e-07;
    *(undefined1 *)pfVar26 = 0x1c;
  }
  return;
}


