/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03434bd8; name: FUN_03434bd8
 */


undefined1  [16]
FUN_03434bd8(long *param_1,long param_2,long param_3,long param_4,long param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  
  *param_1 = *(long *)(param_4 + 0xa8) + 8;
  if (*(int *)(param_2 + 0x58) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(long **)(param_2 + 0x50);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_5 + 8) + 0x28) + 0x20) + (ulong)param_6 * 0x28;
  local_60 = *(undefined4 *)(lVar2 + 0x18);
  uStack_5c = *(undefined4 *)(lVar2 + 0x1c);
  local_58 = *(undefined4 *)(lVar2 + 0x20);
  local_38 = *(undefined4 *)(param_3 + 0x88);
  lVar2 = *(long *)(*(long *)(param_5 + 8) + 0x58);
  local_34 = false;
  if (*(int *)(PTR_DAT_047e6e68 + 0xc) != 0) {
    if (*(float *)(lVar2 + 100) <= 0.0) {
      local_34 = false;
    }
    else if (*(int *)(lVar2 + 0xa8) < 1) {
      local_34 = *(int *)(lVar2 + 0x60) != 0;
    }
    else {
      local_34 = true;
    }
  }
  local_40 = param_3 + 8;
  lStack_48 = param_3 + 0x38;
  local_50 = param_3 + 0x50;
  local_33 = 0 < *(int *)(lVar2 + 0xac);
  FUN_03423e4c(auStack_70,param_2,(ulong)(lVar1 != param_4));
  FUN_034325c0(param_1,auStack_70,param_2 + (ulong)(lVar1 != param_4) * 0x38 + 0x5f0,&local_60);
  return ZEXT816(0);
}


