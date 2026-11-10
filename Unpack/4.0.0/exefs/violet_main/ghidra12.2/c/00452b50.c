/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00452b50; name: FUN_00452b50
 */


undefined8 FUN_00452b50(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0 || param_2[7] == 2) {
    if (param_2[7] == 2) {
      *(undefined1 *)((long)param_2 + uVar2 + 4) = 0x80;
      uVar2 = (ulong)(uVar1 + 1);
    }
    memset((void *)((long)(param_2 + 1) + uVar2),0,(ulong)(8 - (int)uVar2));
    FUN_004529f0(param_2,param_2 + 1,8);
  }
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}


