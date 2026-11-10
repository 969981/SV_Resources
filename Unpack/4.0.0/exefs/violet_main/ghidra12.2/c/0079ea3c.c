/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079ea3c; name: FUN_0079ea3c
 */


void FUN_0079ea3c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  int local_c8 [4];
  undefined *local_b8 [2];
  char local_a4;
  int local_a0;
  int iStack_9c;
  uint local_94;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  int local_30;
  int iStack_2c;
  
  if (*(char *)((long)param_1 + 0x284) == '\0') {
    FUN_007a3e24(local_b8,*param_2,*(undefined4 *)((long)param_2 + 0xc),0x50,param_1);
    local_b8[0] = PTR_DAT_047d0a80 + 0x10;
    uVar1 = FUN_007a4114(local_b8);
    if ((((uVar1 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == iStack_9c + local_a0)) &&
       (local_a4 == 'P')) {
      uVar2 = *(uint *)((long)param_1 + 100);
      if (local_94 <= uVar2) {
LAB_0079eb0c:
        FUN_007a42f0(auStack_48,param_1 + 0x52,0x4d8,uVar2);
        FUN_007a431c(auStack_48);
        FUN_007a4c48(auStack_60,param_1 + 0x188,0x4d8);
        FUN_007a4c58(auStack_60,local_40,iStack_2c + local_30,0x51);
        (**(code **)(*param_1 + 0x140))(param_1,auStack_60,param_3,0);
        return;
      }
      uVar1 = (**(code **)(*param_1 + 0x348))(param_1,local_b8);
      if ((uVar1 & 1) != 0) {
        (**(code **)(*param_1 + 0x340))(local_c8,param_1,local_b8);
        if (local_c8[0] == 0) {
          uVar2 = *(uint *)((long)param_1 + 100);
          goto LAB_0079eb0c;
        }
      }
    }
  }
  return;
}


