/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f70b4; name: FUN_007f70b4
 */


void FUN_007f70b4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_6930 [16];
  undefined1 auStack_6920 [16];
  int local_6910 [4];
  ulong local_6900 [3354];
  int local_30 [4];
  
  local_6910[0] = 0;
  local_6900[0] = local_6900[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_6910 | 4),(Result *)local_6900);
  local_6900[0] = 0;
  FUN_007935cc(local_6900);
  *param_1 = local_6900[0];
  *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + 1;
  if (param_1[0xe] != 0) {
    FUN_007fa988(local_6900,*(undefined8 *)(param_1[0xe] + 0x20));
    FUN_018ff39c(local_6910,local_6900);
    if (local_6910[0] != 0) {
      FUN_00cbd7c0(auStack_6920,local_6910);
      uVar2 = FUN_00796534(auStack_6920,(long)param_1 + 0xc4);
      if ((uVar2 & 1) != 0) {
        FUN_018ff39c((long)param_1 + 0xc4,auStack_6920);
      }
    }
    FUN_007fa988(local_6900,*(undefined8 *)(param_1[0xe] + 0x18));
    FUN_018ff39c(local_6910,local_6900);
    if (local_6910[0] != 0) {
      FUN_00cbd7c0(auStack_6930,local_6910);
      uVar2 = FUN_00796534(auStack_6930,(long)param_1 + 0xc4);
      if ((uVar2 & 1) != 0) {
        FUN_018ff39c((long)param_1 + 0xc4,auStack_6930);
      }
    }
    (**(code **)(*(long *)param_1[8] + 0x40))((long *)param_1[8],param_1);
    (**(code **)(*(long *)param_1[9] + 0x40))((long *)param_1[9],param_1);
    FUN_007ece60(param_1 + 2);
    (**(code **)(*(long *)param_1[8] + 0x48))((long *)param_1[8],param_1);
    (**(code **)(*(long *)param_1[9] + 0x48))((long *)param_1[9],param_1);
    if (((*(char *)((long)param_1 + 0x52) != '\0') && ((int)param_1[0x13] != 0)) &&
       (param_1[0xd] != 0)) {
      uVar2 = *param_1;
      uVar4 = param_1[0x14];
      plVar3 = (long *)FUN_007936d4();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = (long)(uVar2 - uVar4) / *plVar3;
      }
      if (((int)param_1[0x13] <= lVar1) && (FUN_01f7c4f8(local_30,param_1[0xd]), local_30[0] == 0))
      {
        memcpy(local_6900,(void *)(param_1[0xd] + 0x10),0x68d0);
        FUN_007f94d4(local_6900,(char)param_1[0x15],*(undefined1 *)((long)param_1 + 0xa9));
        param_1[0x14] = *param_1;
      }
    }
  }
  return;
}


