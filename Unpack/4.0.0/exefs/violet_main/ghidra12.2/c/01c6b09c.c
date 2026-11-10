/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6b09c; name: FUN_01c6b09c
 */


void FUN_01c6b09c(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if ((DAT_048398d8 == 0) || (*(long *)(DAT_048398d8 + 0xbc0) == 0)) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    puVar4 = (undefined8 *)
             (*(long *)(*(long *)(DAT_048398d8 + 0xb80) +
                       (*(ulong *)(DAT_048398d8 + 3000) / 0xaa) * 8) +
             (*(ulong *)(DAT_048398d8 + 3000) % 0xaa) * 0x18);
    uVar1 = *puVar4;
    uVar5 = puVar4[2];
    param_1[1] = puVar4[1];
    param_1[2] = uVar5;
    uVar3 = 1;
    *param_1 = uVar1;
  }
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}


