/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea7638; name: FUN_01ea7638
 */


ulong FUN_01ea7638(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  
  uVar4 = FUN_01ea7808(*param_1,*(undefined4 *)(param_1[2] + 4));
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (uVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 1;
    do {
      pbVar6 = (byte *)FUN_01ea7890(*param_1,*(undefined4 *)(param_1[2] + 4),uVar7);
      if (pbVar6 == (byte *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar2);
        }
        puVar11 = *(undefined1 **)puVar3;
        plVar10 = *(long **)(puVar3 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_01ea76bc;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        puVar9 = *(undefined1 **)param_1[1];
        (**(code **)(*plVar10 + 0x20))(plVar10);
        if (puVar11 == puVar9) goto LAB_01ea7718;
      }
      else {
        bVar1 = *pbVar6;
        if (bVar1 == 0) {
          puVar11 = &DAT_cbf29ce484222645;
        }
        else {
          puVar11 = &DAT_cbf29ce484222645;
          do {
            pbVar6 = pbVar6 + 1;
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar1) * 0x100000001b3);
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
        }
LAB_01ea76bc:
        if (puVar11 == *(undefined1 **)param_1[1]) goto LAB_01ea7718;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
    uVar8 = 0;
    uVar7 = uVar4;
  }
LAB_01ea7718:
  return uVar8 | (ulong)uVar7 << 0x20;
}


