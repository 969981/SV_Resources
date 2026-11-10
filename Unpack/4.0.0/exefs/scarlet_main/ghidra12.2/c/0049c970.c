/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049c970; name: FUN_0049c970
 */


long FUN_0049c970(byte *param_1,long param_2,long param_3,FILE *param_4)

{
  uint uVar1;
  byte *__s;
  uint uVar2;
  undefined4 uVar3;
  long local_30;
  long local_28;
  
  local_30 = -1;
  local_28 = 0;
  if (*(FILE **)PTR_stdout_047cb860 == param_4 || *(FILE **)PTR_stderr_047cb8b8 == param_4) {
    if ((int)(param_3 * param_2) == 1) {
      fputc((uint)*param_1,param_4);
      return local_30;
    }
    __s = &DAT_03c08ca3;
    if (param_1 != (byte *)0x0) {
      __s = param_1;
    }
    fputs((char *)__s,param_4);
    return local_30;
  }
  if (*(FILE **)PTR_stdin_047cb840 == param_4) {
    return -1;
  }
  uVar2 = nn::fs::GetFileSize(&local_28,*(undefined8 *)param_4);
  if (uVar2 == 0) {
    if (local_28 < (long)param_4->_IO_read_ptr) {
      return local_30;
    }
    uVar2 = nn::fs::ReadFile(&local_30,*(undefined8 *)param_4,param_4->_IO_read_ptr,param_1,
                             param_3 * param_2);
    if (uVar2 == 0) {
      param_4->_IO_read_ptr = param_4->_IO_read_ptr + local_30;
      return local_30;
    }
  }
  if ((uVar2 & 0x1ff) == 2) {
    uVar1 = uVar2 & 0x3ffe00;
    if (uVar1 == 0x400) {
      uVar3 = 0x11;
    }
    else if (uVar1 == 0x200) {
      uVar3 = 2;
    }
    else {
      uVar2 = uVar2 >> 9 & 0x1fff;
      if (uVar2 - 0x1e < 0x10) {
        uVar3 = 0x1c;
      }
      else if (uVar1 < 0x1a00) {
        if (uVar1 == 0xe00) {
          uVar3 = 0x10;
        }
        else if (uVar1 == 0x1000) {
          uVar3 = 0x27;
        }
        else {
LAB_0049cb24:
          if (299 < uVar2 - 0xc80) {
            if (uVar2 - 4000 < 1000) {
              *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 5;
              return local_30;
            }
            goto LAB_0049ca74;
          }
          uVar3 = 0xc;
        }
      }
      else if (uVar1 == 0x1a00) {
        uVar3 = 0xb;
      }
      else if (uVar1 == 0x177200) {
        uVar3 = 0x26;
      }
      else {
        if (uVar1 != 0x177a00) goto LAB_0049cb24;
        uVar3 = 0x1d;
      }
    }
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = uVar3;
  }
  else {
LAB_0049ca74:
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0xffff;
  }
  return local_30;
}


