/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027be064; name: FUN_027be064
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027be064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03cab338;
  uVar1 = _DAT_03cab330;
  *param_1 = 0x10000;
  *(undefined4 *)(param_1 + 1) = 0x80000000;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  strncpy((char *)(param_1 + 4),"nn.npln.Socket",0x1f);
  *(undefined1 *)((long)param_1 + 0x3f) = 0;
  return;
}


