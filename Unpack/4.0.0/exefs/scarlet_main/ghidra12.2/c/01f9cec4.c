/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9cec4; name: FUN_01f9cec4
 */


undefined2 FUN_01f9cec4(long *param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_28;
  
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_28 = *(undefined8 *)(param_2 + 8);
    puVar1 = bsearch(&local_28,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = FUN_01f9cfbc(param_1,piVar2);
    if ((uVar3 & 1) != 0) {
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
        uVar3 = 0;
      }
      else {
        uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = (ulong)*(ushort *)((long)piVar2 + uVar4);
        }
      }
      return *(undefined2 *)(*param_1 + uVar3);
    }
    if ((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar3 != 0)) {
      return *(undefined2 *)((long)piVar2 + uVar3);
    }
  }
  return 0;
}


