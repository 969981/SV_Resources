/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00485de0; name: FUN_00485de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485de0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int local_28;
  int local_24;
  
  uVar2 = _DAT_03cab9a0;
  *(undefined8 *)(param_1 + 0xb8) = _UNK_03cab9a8;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_0045bea0(*(undefined8 *)(param_1 + 0x88));
  iVar1 = FUN_0045d190(uVar2,&local_28,&local_24);
  if (iVar1 == 0 || local_24 == 0) {
    return;
  }
  *(int *)(param_1 + 0xb4) = local_24;
  if (local_28 == 0) {
    lVar3 = FUN_003de9a0(0);
    if (lVar3 == 0) {
      return;
    }
    if (*(code **)(lVar3 + 0xd8) == (code *)0x0) {
      return;
    }
    iVar1 = (**(code **)(lVar3 + 0xd8))
                      ((undefined8 *)(param_1 + 0xb0),(undefined8 *)(param_1 + 0x88),param_1 + 0x98)
    ;
    if (iVar1 == 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xbc) | 1;
  }
  else {
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 1;
    *(int *)(param_1 + 0xb0) = local_28;
    FUN_0045bce0();
    lVar3 = FUN_0043d130();
    if (lVar3 == 0) {
      return;
    }
    iVar1 = FUN_0043b720();
    *(int *)(param_1 + 0xb8) = iVar1 << 2;
    if ((2 < local_28 - 0x2a0U) && (local_28 != 0x40)) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xbc) | 2;
  }
  *(uint *)(param_1 + 0xbc) = uVar4;
  return;
}


