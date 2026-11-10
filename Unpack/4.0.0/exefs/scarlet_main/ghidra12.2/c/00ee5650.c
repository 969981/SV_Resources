/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee5650; name: FUN_00ee5650
 */


void FUN_00ee5650(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar4 = *param_2;
  uVar8 = *param_3;
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  plVar3 = (long *)param_3[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *puVar7 = uVar4;
  *(undefined8 *)(puVar7 + 2) = uVar8;
  *(undefined8 *)(puVar7 + 4) = uVar2;
  *(undefined8 *)(puVar7 + 6) = uVar1;
  *(long **)(puVar7 + 8) = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *(undefined4 **)(param_1 + 8) = puVar7 + 10;
  return;
}


