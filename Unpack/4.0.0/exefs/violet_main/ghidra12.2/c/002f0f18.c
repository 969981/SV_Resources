/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f0f18; name: FUN_002f0f18
 */


void FUN_002f0f18(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  void *__ptr;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = param_4;
  auVar13._0_8_ = param_3;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[2] = (long)&DAT_03c7b8f2;
  puVar1 = PTR_DAT_047cc988 + 0x10;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 1;
  lVar9 = param_2[1];
  lVar8 = *param_2;
  lVar11 = param_2[3];
  lVar10 = param_2[2];
  param_1[0x10] = param_2[4];
  param_1[0xd] = lVar9;
  param_1[0xc] = lVar8;
  param_1[0xf] = lVar11;
  param_1[0xe] = lVar10;
  auVar12 = FUN_002ef2e0();
  iVar6 = FUN_0038dcf0(param_3,param_4,auVar12._0_8_,auVar12._8_8_);
  if (0 < iVar6) {
    auVar13 = FUN_002ef2e0();
  }
  *(undefined1 (*) [16])(param_1 + 0x11) = auVar13;
  FUN_0038db00(param_1 + 4);
  uVar3 = (uint)param_1[8] & 3;
  if (1 < uVar3) {
    uVar7 = param_1[8] & 0xfffffffffffffffc;
    plVar2 = (long *)(uVar7 + 0x40);
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_00376de0(uVar3,uVar7,*(undefined4 *)(uVar7 + 0x48));
      __ptr = (void *)param_1[9];
      param_1[8] = 0;
      goto joined_r0x002f0fd8;
    }
  }
  __ptr = (void *)param_1[9];
  param_1[8] = 0;
joined_r0x002f0fd8:
  if (__ptr != (void *)0x0) {
    free(__ptr);
    param_1[9] = 0;
  }
  auVar13 = FUN_0038dd70(1);
  *(undefined1 (*) [16])(param_1 + 10) = auVar13;
  return;
}


