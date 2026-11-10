/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353226c; name: FUN_0353226c
 */


void FUN_0353226c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x108);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
      uVar2 = 1;
      goto LAB_035322d8;
    }
    lVar3 = *plVar5;
  }
  uVar2 = 0;
  uVar4 = plVar5[1] - (ulong)*(uint *)(param_1 + 0x11);
  uVar1 = *(long *)(lVar3 + 8) - (ulong)*(uint *)(param_1 + 0x11);
  lVar3 = (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) -
          (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU));
LAB_035322d8:
  *(long *)(param_2 + 0x120) = lVar3;
  *(undefined1 *)(param_2 + 0x128) = uVar2;
  return;
}


