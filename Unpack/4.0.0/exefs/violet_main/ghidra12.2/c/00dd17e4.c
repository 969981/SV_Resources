/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd17e4; name: FUN_00dd17e4
 */


void FUN_00dd17e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar5 - lVar3 != 0) {
    uVar1 = (lVar5 - lVar3) * 4 - 1;
  }
  uVar6 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar6) {
    FUN_00dd2110(param_1);
    uVar6 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == lVar3) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)
             (*(long *)(lVar3 + (uVar6 >> 2 & 0x3ffffffffffffff8)) + (uVar6 & 0x1f) * 0x80);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,puVar9 + 4);
    uVar8 = param_2[1];
    puVar9[3] = param_2[3];
    uVar7 = param_2[2];
    *puVar9 = *param_2;
    puVar9[1] = uVar8;
    puVar9[2] = uVar7;
    pcVar4 = (code *)param_2[1];
    if (pcVar4 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar4)(param_2 + 4);
    }
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}


