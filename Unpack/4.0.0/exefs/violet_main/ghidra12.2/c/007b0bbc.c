/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b0bbc; name: FUN_007b0bbc
 */


void FUN_007b0bbc(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  Nickname aNStack_f0 [36];
  bool local_cc [4];
  long local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [136];
  long local_30;
  long lStack_28;
  
  memset(param_2,0,0x21);
  puVar1 = PTR_DAT_047d0a08;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    FUN_018dd988(auStack_b8);
    FUN_018dd980(auStack_b8);
    memset(&local_30,0,0x10);
    lVar3 = *(long *)puVar1;
    FUN_018dd4a4(auStack_b8,lVar3 + 0x1f8);
    local_c8 = *(long *)(lVar3 + 0x280);
    lStack_c0 = *(long *)(lVar3 + 0x288);
    local_30 = local_c8;
    lStack_28 = lStack_c0;
    if (lStack_c0 != 0 || local_c8 != 0) {
      nn::account::Initialize();
      iVar2 = nn::account::GetUserExistence(local_cc,(Uid *)&local_c8);
      if (((iVar2 == 0) && (local_cc[0] != false)) &&
         (iVar2 = nn::account::GetNickname(aNStack_f0,(Uid *)&local_c8), iVar2 == 0)) {
        memcpy(param_2,aNStack_f0,0x20);
      }
    }
    FUN_018dd490(auStack_b8);
  }
  return;
}


