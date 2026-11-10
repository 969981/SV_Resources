/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d50b0; name: FUN_001d50b0
 */


int FUN_001d50b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char acStack_b0 [80];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xa28) == 0) {
    iVar2 = 0;
  }
  else {
    local_28 = param_2;
    iVar2 = FUN_001da0d0(*(undefined8 *)(param_1 + 0xa30),&local_60);
    if (iVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0xa28) - 1;
      if (uVar1 < 3) {
        iVar2 = 6;
        if (local_48 != 0) {
          iVar2 = local_48 + -1;
        }
        FUN_001ce394(acStack_b0,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     (&PTR_s_If_Modified_Since_04484730)[(int)uVar1],
                     *(undefined8 *)(PTR_PTR_047cb978 + (long)iVar2 * 8),uStack_54,
                     *(undefined8 *)(PTR_PTR_047cb980 + (long)local_50 * 8),iStack_4c + 0x76c,
                     local_58,uStack_5c,local_60);
        sVar3 = strlen(acStack_b0);
        iVar2 = FUN_001d4af0(&local_28,acStack_b0,sVar3);
      }
      else {
        iVar2 = 0x2b;
      }
    }
    else {
      FUN_001db9c8(param_1,"Invalid TIMEVALUE");
    }
  }
  return iVar2;
}


