/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003101c0; name: FUN_003101c0
 */


void FUN_003101c0(long param_1,ulong param_2,undefined4 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  long local_50;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + 1;
  param_2 = param_2 & 0xffffffff;
  FUN_003670f0(&local_50,0xd);
  if (param_4 != (long *)0x0) {
    *param_4 = *param_4 + 0xd;
  }
  bVar6 = local_50 != 0;
  puVar2 = &local_47;
  puVar4 = &local_44;
  puVar5 = &local_45;
  if (bVar6) {
    puVar2 = local_40;
    puVar4 = local_40 + 3;
    puVar5 = local_40 + 2;
  }
  puVar3 = &local_46;
  *puVar2 = 0;
  if (bVar6) {
    puVar3 = local_40 + 1;
  }
  *puVar3 = 0;
  *puVar5 = 4;
  puVar2 = &local_43;
  if (bVar6) {
    puVar2 = local_40 + 4;
  }
  *puVar4 = 3;
  *puVar2 = 0;
  puVar2 = &local_42;
  if (bVar6) {
    puVar2 = local_40 + 5;
  }
  *puVar2 = (char)(param_2 >> 0x18);
  puVar2 = &local_41;
  if (bVar6) {
    puVar2 = local_40 + 6;
  }
  *puVar2 = (char)(param_2 >> 0x10);
  puVar1 = &local_40;
  if (bVar6) {
    puVar1 = (undefined8 *)(local_40 + 7);
  }
  *(char *)puVar1 = (char)(param_2 >> 8);
  puVar2 = (undefined1 *)((long)&local_40 + 1);
  if (bVar6) {
    puVar2 = local_40 + 8;
  }
  *puVar2 = (char)param_2;
  puVar2 = (undefined1 *)((long)&local_40 + 2);
  if (bVar6) {
    puVar2 = local_40 + 9;
  }
  *puVar2 = (char)((uint)param_3 >> 0x18);
  puVar2 = (undefined1 *)((long)&local_40 + 3);
  if (bVar6) {
    puVar2 = local_40 + 10;
  }
  *puVar2 = (char)((uint)param_3 >> 0x10);
  puVar2 = (undefined1 *)((long)&local_40 + 4);
  if (bVar6) {
    puVar2 = local_40 + 0xb;
  }
  *puVar2 = (char)((uint)param_3 >> 8);
  puVar2 = (undefined1 *)((long)&local_40 + 5);
  if (bVar6) {
    puVar2 = local_40 + 0xc;
  }
  *puVar2 = (char)param_3;
  FUN_003686e0(param_1 + 0xc50,&local_50);
  return;
}


