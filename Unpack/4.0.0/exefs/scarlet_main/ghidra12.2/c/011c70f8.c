/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c70f8; name: FUN_011c70f8
 */


void FUN_011c70f8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)(param_2 + 0x20);
  puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,0xb0,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar4 + 0xe8))();
  }
  *param_1 = puVar2;
  param_1[1] = puVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar5 = *puVar4;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    FUN_011c7254(puVar2 + 2,param_4,param_5);
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_011c7254(puVar2 + 2,param_4,param_5);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = param_3;
  return;
}


