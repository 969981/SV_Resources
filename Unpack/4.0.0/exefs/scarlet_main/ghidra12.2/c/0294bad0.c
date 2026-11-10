/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294bad0; name: FUN_0294bad0
 */


void FUN_0294bad0(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  uint local_54;
  uint uStack_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar3 = 0;
  if (*(long *)(lVar2 + 0x20) != 0) {
    iVar3 = *(int *)(*(long *)(lVar2 + 0x20) + 0xc);
  }
  if (iVar3 == param_2) {
    uVar4 = 0;
    if (*(long *)(lVar2 + 0xb8) != 0) {
      uVar4 = *(uint *)(*(long *)(lVar2 + 0xb8) + 0xc);
    }
    if ((uVar4 & 0xff) == (param_3 & 0xff)) {
      if (*(long *)(lVar2 + 0x98) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(ushort *)(*(long *)(lVar2 + 0x98) + 0xc);
      }
      uVar1 = FUN_015d973c(uVar4);
      if ((((uVar1 & 1) != 0) && (uVar1 = thunk_FUN_021fcd94(uVar4), (uVar1 & 1) == 0)) &&
         (uVar1 = FUN_0294bc38(*(undefined8 *)(param_1 + 0x48)), (uVar1 & 1) == 0)) {
        FUN_0184ae08(*(undefined8 *)(param_1 + 0x48));
        local_5c = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_5a = 1;
        local_58 = 0x2ad;
        local_60 = param_2;
        local_54 = FUN_0107bb74(*(undefined8 *)(param_1 + 0x48));
        local_54 = local_54 & 0xffff;
        local_56 = 0x181;
        uStack_50 = uVar4;
        local_4c = param_2;
        FUN_02940a10(param_1,&local_60);
        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 1;
      }
    }
  }
  return;
}


