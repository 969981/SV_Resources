/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d42c; name: FUN_0079d42c
 */


void FUN_0079d42c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  int local_50;
  int iStack_4c;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (uint)DAT_047f9be8;
    if (DAT_047f9be8 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x200))(param_1);
    }
    FUN_007a456c(auStack_68,param_1 + 0x52,0x4d8,uVar2,*(undefined1 *)((long)param_1 + 0x5a),
                 *(undefined1 *)(*(long *)PTR_DAT_047d0a08 + 0x458),param_1);
    FUN_007a4634(auStack_68);
    FUN_007a4c48(auStack_80,param_1 + 0x188,0x4d8);
    FUN_007a4c58(auStack_80,local_60,iStack_4c + local_50,0x32);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_80,param_2,0);
  }
  return;
}


