/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103a50; name: FUN_00103a50
 */


undefined8 FUN_00103a50(long *param_1,uint param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  
  if (param_2 < 0xac44) {
    uVar11 = 0x3d3504f3;
    if (param_2 < 0x5622) {
      uVar11 = 0x3d800000;
    }
    uVar8 = 0x400;
    if (param_2 < 0x5622) {
      uVar8 = 0x200;
    }
  }
  else {
    uVar11 = 0x3d000000;
    uVar8 = 0x800;
  }
  uVar3 = uVar8 * param_3;
  uVar4 = param_4 >> 2 & 1;
  if (uVar4 == 0 && (param_4 & 1) == 0) {
    if (0x800 < uVar3) {
      return 0;
    }
    param_2 = param_3 * param_2;
    param_3 = 1;
    uVar8 = uVar3;
  }
  lVar10 = 0;
  do {
    if (param_2 + 1 >> 1 <= (uint)(&DAT_03cac2f0)[lVar10]) break;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x19);
  uVar2 = uVar3 >> 3 & 0xfffffc0;
  lVar9 = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar9);
    lVar9 = lVar9 + 0x20;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  } while (lVar9 != 0xa0);
  *param_1 = (long)(param_1 + 0x14);
  *(uint *)(param_1 + 6) = uVar2 + 0xaf & 0x1fffffe0;
  FUN_00106080(uVar11);
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)((long)param_1 + 0x1c) = param_3;
  uVar5 = param_4 & 0xfffffffd;
  if (param_3 != 1) {
    uVar5 = param_4;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar4 | uVar5;
  uVar4 = uVar2 - 0x40 >> 6;
  *(int *)((long)param_1 + 0x24) = (int)lVar10;
  *(uint *)(param_1 + 1) = uVar8;
  *(uint *)(param_1 + 2) = uVar3 * 2;
  *(uint *)((long)param_1 + 0x14) = uVar2;
  if (7 < uVar4) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0,0x103bdc);
    (*pcVar6)();
  }
                    /* WARNING: Jumptable with 0 entries at 0x00103bc4 */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)(&UNK_00103bc8 + (ulong)(byte)(&DAT_03caa53c)[uVar4] * 4))();
  return uVar7;
}


