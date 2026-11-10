/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02131ce8; name: FUN_02131ce8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02131ce8(long param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  memcpy((void *)(param_1 + 0x120),param_2,0x33);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x130);
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  *(undefined1 *)(param_1 + 400) = 1;
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x140);
  return;
}


