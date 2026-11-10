/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c736dc; name: FUN_00c736dc
 */


void FUN_00c736dc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)(param_2 + 0x38);
  lVar2 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,0x38,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*puVar5 + 0xe8))();
  }
  *param_1 = lVar2;
  param_1[1] = (long)puVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar6 = *puVar5;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  puVar5 = (undefined8 *)*param_5;
  *(undefined8 *)(lVar2 + 0x10) = *puVar5;
  *(undefined8 *)(lVar2 + 0x18) = puVar5[1];
  *(undefined8 *)(lVar2 + 0x20) = puVar5[2];
  plVar4 = (long *)puVar5[3];
  *(long **)(lVar2 + 0x28) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined8 *)(lVar2 + 0x30) = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar5 = (undefined8 *)*param_1;
  *puVar5 = 0;
  puVar5[1] = param_3;
  return;
}


