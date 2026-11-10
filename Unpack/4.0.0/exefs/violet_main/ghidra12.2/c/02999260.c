/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999260; name: FUN_02999260
 */


void FUN_02999260(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [16];
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_0189372c(auStack_50);
  FUN_01822720(auStack_50,uVar3,uVar2,uVar4);
  FUN_0298c710(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x90),uVar1,auStack_50);
  return;
}


