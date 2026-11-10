/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0da94; name: FUN_02f0da94
 */


void FUN_02f0da94(ulong *param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_3;
  uVar1 = (uint)uVar3 & 0xffffff;
  if (uVar1 != *param_2) {
    uVar2 = param_3[1];
    **(uint **)(param_2 + 6) = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    if ((char)uVar2 != '\0') {
      *param_1 = uVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    return;
  }
  **(undefined1 **)(param_2 + 4) = 1;
  if (**(uint **)(param_2 + 2) == 0x7fffffff) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = uVar3 + 0x1000000 & 0xffffffffff000000 | (ulong)**(uint **)(param_2 + 2) & 0xffffff;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


