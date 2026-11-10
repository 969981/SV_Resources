/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01253630; name: FUN_01253630
 */


void FUN_01253630(undefined8 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  undefined1 auStack_88 [56];
  
  FUN_012466dc(auStack_88);
  FUN_01582534(param_1);
  uVar6 = FUN_014813e4();
  FUN_01251100(param_1);
  bVar2 = FUN_01251228();
  if (bVar2 != 0) {
    uVar11 = 0;
    do {
      uVar7 = FUN_01251100(param_1);
      lVar8 = FUN_01251234(uVar7,uVar11);
      bVar4 = FUN_012499a4(uVar6,*(undefined1 *)(lVar8 + 0x160),local_90);
      if (bVar4 != 0) {
        uVar12 = (ulong)bVar4;
        puVar13 = local_90;
        do {
          uVar1 = *puVar13;
          FUN_01582534(param_1);
          uVar7 = FUN_014813ec();
          FUN_01253868(uVar7,uVar1,local_94,local_98);
          FUN_01582534(param_1);
          uVar7 = FUN_00f7e284();
          plVar9 = (long *)FUN_012537fc(uVar7,uVar1);
          if (plVar9 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar9 + 0x98))();
            uVar10 = FUN_01481400(uVar6,uVar5);
            if ((uVar10 & 1) == 0) {
              uVar5 = FUN_02987aa0(param_1,local_94[0],local_98[0],local_98[0]);
              FUN_0124e224(auStack_88,uVar5);
              uVar7 = FUN_01243584(param_1);
              uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
              FUN_02987adc(uVar7,uVar5,local_94[0]);
            }
          }
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar12 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != bVar2);
  }
  cVar3 = FUN_012537b8(auStack_88);
  if (cVar3 != '\0') {
    FUN_01243584(param_1);
    FUN_012537c0();
    FUN_012537cc(param_1,auStack_88);
  }
  return;
}


