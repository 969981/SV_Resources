/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eae1ac; name: FUN_01eae1ac
 */


void FUN_01eae1ac(long param_1,ushort *param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *local_70;
  long lStack_68;
  undefined8 local_60;
  long *local_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x578);
  *(uint *)(param_1 + 0x578) = uVar1 + 1;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  puVar5 = &DAT_cbf29ce484222645;
  snprintf((char *)&local_50,0x20,"net_%u__%u",*param_2 & 3,(uint)(*param_2 >> 2));
  param_1 = param_1 + ((ulong)uVar1 & 0x1f) * 0x20;
  lStack_68 = param_1 + 0x178;
  *(undefined8 *)(param_1 + 0x188) = local_40;
  *(undefined8 *)(param_1 + 400) = uStack_38;
  uVar4 = local_50 & 0xff;
  *(ulong *)(param_1 + 0x178) = local_50;
  *(undefined8 *)(param_1 + 0x180) = uStack_48;
  if ((int)uVar4 != 0) {
    pbVar3 = (byte *)(param_1 + 0x179);
    do {
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ uVar4) * 0x100000001b3);
      bVar2 = *pbVar3;
      uVar4 = (ulong)bVar2;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 != 0);
  }
  FUN_01ea3384(param_2 + 4);
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  local_70 = puVar5;
  FUN_0147af14(&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


