/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032c868; name: FUN_0032c868
 */


void FUN_0032c868(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *local_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [32];
  byte local_1c0 [16];
  ulong local_1b0;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  char *local_168;
  undefined8 uStack_160;
  
  puVar1 = param_1 + 2;
  FUN_0038db40(puVar1);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 6) == '\0') {
      lVar9 = param_1[9];
      lVar10 = *(long *)(lVar9 + 0x10);
      if (*(long *)(lVar10 + 0x10) != 0) {
        lVar13 = 0;
        uVar12 = 0;
        do {
          lVar10 = *(long *)(lVar10 + 8);
          if (*(long *)(lVar10 + lVar13) == 0) {
            if (*(char *)(lVar10 + lVar13 + 8) != '\0') goto LAB_0032c964;
          }
          else if (*(long *)(lVar10 + lVar13 + 8) != 0) {
LAB_0032c964:
            local_1f0 = (undefined1 *)0x0;
                    /* try { // try from 0032c96c to 0032c977 has its CatchHandler @ 0032cc08 */
            uVar5 = FUN_0034f8f0(param_1 + 0x38,lVar10 + lVar13,&local_1f0);
            if (uVar5 != 0) {
              if (*(char *)(param_1 + 6) == '\0') {
                uVar6 = *(undefined8 *)param_1[9];
                uVar12 = uVar5;
                if (4 < uVar5) {
                    /* try { // try from 0032c9b0 to 0032ca07 has its CatchHandler @ 0032cbd8 */
                  uVar12 = FUN_00350fb0(uVar5,uVar5);
                }
                FUN_00350f30(uVar6,uVar12);
                puVar8 = (undefined8 *)param_1[9];
                param_1[7] = *puVar8;
                *puVar8 = 0;
                param_1[8] = puVar8[2];
                puVar8[2] = 0;
                FUN_00343d90(puVar8[1]);
                *(undefined8 *)(param_1[9] + 8) = 0;
                *(undefined1 *)(param_1 + 6) = 1;
              }
              FUN_0035351c(&local_168,param_1[10],uVar5);
              goto LAB_0032c8c4;
            }
            if (*(int *)(param_1 + 0x38) == 2) {
                    /* try { // try from 0032ca0c to 0032ca9f has its CatchHandler @ 0032cc04 */
              FUN_00368450(&local_168);
              lVar9 = *(long *)(param_1[9] + 0x10);
              lVar10 = *(long *)(lVar9 + 8);
              if (*(long *)(lVar10 + lVar13) == 0) {
                puVar11 = (undefined1 *)(ulong)*(byte *)(lVar10 + lVar13 + 8);
              }
              else {
                puVar11 = *(undefined1 **)(lVar10 + lVar13 + 8);
              }
              if (local_1f0 < puVar11) {
                FUN_00367e30(auStack_188,lVar10 + lVar13);
                FUN_003686e0(&local_168,auStack_188);
                lVar9 = *(long *)(param_1[9] + 0x10);
                lVar10 = *(long *)(lVar9 + 8);
              }
              FUN_003688a0(&local_168,lVar10 + lVar13 + 0x20,~uVar12 + *(long *)(lVar9 + 0x10));
              FUN_00368930(*(undefined8 *)(param_1[9] + 0x10),&local_168);
              FUN_00368470(&local_168);
              break;
            }
            lVar9 = param_1[9];
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x20;
        } while (uVar12 < *(ulong *)(lVar10 + 0x10));
      }
      if (*(int *)(param_1 + 0x38) != 2) {
        FUN_00368510(*(undefined8 *)(param_1[9] + 0x10));
        uVar6 = *(undefined8 *)param_1[9];
        uVar7 = ((undefined8 *)param_1[9])[2];
        param_1[0x35] = FUN_0032c81c;
        param_1[0x36] = param_1;
        param_1[0x37] = 0;
        FUN_00350ee0(uVar6,uVar7,param_1 + 0x34,1);
                    /* try { // try from 0032cb90 to 0032cb97 has its CatchHandler @ 0032cbdc */
        FUN_0038db60(puVar1);
        return;
      }
      if (*(int *)(param_1 + 0x23e) - 200U < 100) {
                    /* try { // try from 0032cba0 to 0032cbab has its CatchHandler @ 0032cbd4 */
        FUN_0035351c(&local_168,param_1[10],0);
      }
      else {
        local_168 = "HTTP proxy returned response code ";
        uStack_160 = 0x22;
                    /* try { // try from 0032cad4 to 0032caf7 has its CatchHandler @ 0032cc00 */
        lStack_1e8 = FUN_00394c20(*(int *)(param_1 + 0x23e),auStack_1e0);
        lStack_1e8 = lStack_1e8 - (long)auStack_1e0;
        local_1f0 = auStack_1e0;
        FUN_003959c0(local_1c0,&local_168,&local_1f0);
        uVar12 = (ulong)local_1c0 | 1;
        if ((local_1c0[0] & 1) != 0) {
          uVar12 = local_1b0;
        }
                    /* try { // try from 0032cb0c to 0032cb2f has its CatchHandler @ 0032cbe0 */
        FUN_00367770(auStack_1a8,uVar12);
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                             ,0xf9,auStack_1a8,0,0);
        if ((local_1c0[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_1b0);
        }
                    /* try { // try from 0032cb4c to 0032cb8f has its CatchHandler @ 0032cc14 */
        FUN_0032c744(param_1,uVar6);
      }
      goto LAB_0032c8c4;
    }
    param_2 = 0;
  }
  else if (4 < param_2) {
                    /* try { // try from 0032c89c to 0032c8c3 has its CatchHandler @ 0032cc14 */
    param_2 = FUN_00350fb0(param_2);
  }
  FUN_0032c744(param_1,param_2);
LAB_0032c8c4:
  *(undefined1 *)(param_1 + 6) = 1;
                    /* try { // try from 0032c8cc to 0032c8d3 has its CatchHandler @ 0032cc0c */
  FUN_0038db60(puVar1);
  plVar2 = param_1 + 1;
  do {
    lVar9 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 + -1 == 0) {
    (**(code **)*param_1)(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  return;
}


