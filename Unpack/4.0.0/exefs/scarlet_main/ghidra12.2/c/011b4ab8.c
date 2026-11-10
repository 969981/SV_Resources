/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b4ab8; name: FUN_011b4ab8
 */


undefined8 FUN_011b4ab8(char *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,1);
    if (iVar1 == 0) {
      nn::fs::GetFileSize(param_4,param_4[4]);
LAB_011b4af8:
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[3] = (ulong)param_2;
      return 1;
    }
  }
  else if (param_2 - 1 < 2) {
    uVar2 = nn::fs::CreateFile(param_1,0);
    if ((uVar2 & 0x3fffff) == 0x202) {
      return 0x24;
    }
    if (((((uVar2 & 0x1ff) != 2) || ((uVar2 & 0x3ffe00) == 0x400)) || ((uVar2 & 0x3ffe00) == 0xe00))
       || (0xf < (uVar2 >> 9 & 0x1fff) - 0x1e)) {
      uVar2 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,6);
      if ((uVar2 & 0x3fffff) == 0x202) {
        return 0x42;
      }
      if (uVar2 == 0) {
        *param_4 = 0;
        goto LAB_011b4af8;
      }
    }
  }
  return 2;
}


