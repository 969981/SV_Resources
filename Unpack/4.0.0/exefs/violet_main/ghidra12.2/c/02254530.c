/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02254530; name: FUN_02254530
 */


void FUN_02254530(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  int param3;
  int iVar8;
  float fVar9;
  undefined1 *local_d0;
  byte *pbStack_c8;
  undefined8 local_c0;
  long *local_b8;
  byte local_b0 [64];
  
  param3 = 0;
  iVar8 = 0;
  while( true ) {
    snprintf((char *)local_b0,0x40,"list_text_pane_name_%02d",param3);
    lVar4 = FUN_00fa5b78(param_1,local_b0);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 10) != '\0')) break;
    snprintf((char *)local_b0,0x40,"pane_%s",(char *)(lVar4 + (ulong)*(uint *)(lVar4 + 4)));
    local_d0 = &DAT_cbf29ce484222645;
    if (local_b0[0] != 0) {
      pbVar7 = (byte *)((ulong)local_b0 | 1);
      bVar3 = local_b0[0];
      do {
        local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    pbStack_c8 = local_b0;
    local_c0 = 0x3f;
    local_b8 = (long *)0x0;
    lVar5 = FUN_022540f8(param_2,&local_d0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (lVar5 == 0) {
      uVar1 = *(uint *)(lVar4 + 4);
      pcVar6 = strstr((char *)(param_1 + 0xb0),"all");
      lVar5 = param_1;
      if (pcVar6 == (char *)0x0) {
        lVar5 = *(long *)(param_1 + 0x18);
        pcVar6 = strstr((char *)(lVar5 + 0xb0),"all");
        if (pcVar6 == (char *)0x0) {
          lVar5 = *(long *)(lVar5 + 0x18);
          pcVar6 = strstr((char *)(lVar5 + 0xb0),"all");
          if (pcVar6 == (char *)0x0) {
            lVar5 = *(long *)(lVar5 + 0x18);
            pcVar6 = strstr((char *)(lVar5 + 0xb0),"all");
            while (pcVar6 == (char *)0x0) {
              lVar5 = *(long *)(lVar5 + 0x18);
              pcVar6 = strstr((char *)(lVar5 + 0xb0),"all");
            }
          }
        }
      }
      while( true ) {
        if (lVar5 == 0) goto LAB_02254714;
        pcVar6 = strstr((char *)(lVar5 + 0xb0),(char *)(lVar4 + (ulong)uVar1));
        if (pcVar6 != (char *)0x0) break;
        lVar5 = FUN_00faadf0(lVar5);
      }
    }
    param3 = param3 + 1;
    if (iVar8 <= (int)*(float *)(lVar5 + 0x54)) {
      iVar8 = (int)*(float *)(lVar5 + 0x54);
    }
    if (param3 == 100) break;
  }
LAB_02254714:
  if (iVar8 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    fVar9 = (float)iVar8;
    lVar4 = FUN_00fa5b78(param_1,"text_height_offset_y");
    if ((lVar4 != 0) && (*(char *)(lVar4 + 10) == '\x02')) {
      fVar9 = *(float *)(lVar4 + (ulong)*(uint *)(lVar4 + 4)) + fVar9;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(float *)(param_1 + 0x54) = fVar9;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  }
  return;
}


