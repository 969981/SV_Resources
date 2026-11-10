/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e607cc; name: FUN_01e607cc
 */


undefined8
FUN_01e607cc(long param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 auStack_968 [256];
  undefined1 local_868 [2072];
  
  FUN_01674c60(*param_2,local_868);
  uVar2 = *param_3;
  memcpy(auStack_968,param_3 + 1,0xff);
  uVar1 = *param_4;
  cVar3 = *(char *)(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x5e) = local_868[0];
  memcpy((void *)(param_1 + 0x5f),(void *)((ulong)local_868 | 1),0x813);
  *(undefined1 *)(param_1 + 0x872) = uVar2;
  memcpy((void *)(param_1 + 0x873),auStack_968,0xff);
  *(short *)(param_1 + 0x972) = (short)uVar1;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  FUN_01c0b964(param_1 + 0x1290,*param_5);
  *(undefined4 *)(param_1 + 0x12c0) = 0;
  return 1;
}


