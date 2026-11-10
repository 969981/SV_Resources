/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079d504; name: FUN_0079d504
 */


void FUN_0079d504(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  int local_68;
  int iStack_64;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((uVar1 & 1) != 0) {
    FUN_007a492c(auStack_80,param_1 + 0x52,0x4d8,param_3,*(undefined2 *)((long)param_1 + 0x114e),
                 param_1);
    if (*(short *)((long)param_1 + 0x114e) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_007a3244(auStack_80,*(undefined8 *)(param_1[0x11] + uVar1 * 8));
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)((long)param_1 + 0x114e));
    }
    (**(code **)(*param_1 + 0x338))(param_1,auStack_80);
    FUN_007a4970(auStack_80);
    FUN_007a4c48(auStack_98,param_1 + 0x188,0x4d8);
    FUN_007a4c58(auStack_98,local_78,iStack_64 + local_68,0x33);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_98,param_2,0);
  }
  return;
}


