/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049d2e0; name: FUN_0049d2e0
 */


char * FUN_0049d2e0(FILE *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char *local_18;
  
  if (*(FILE **)PTR_stdout_047cb860 == param_1 || *(FILE **)PTR_stderr_047cb8b8 == param_1) {
    fwrite(&DAT_03c08ca3,4,1,param_1);
    return (char *)0xffffffffffffffff;
  }
  if (*(FILE **)PTR_stdin_047cb840 == param_1) {
    return (char *)0xffffffffffffffff;
  }
  if (param_3 != 2) {
    if (param_3 == 1) {
      local_18 = param_1->_IO_read_ptr;
      goto LAB_0049d3cc;
    }
    if (param_3 == 0) {
      if ((long)param_2 < 0) {
        param_2 = (char *)0xffffffffffffffff;
      }
      param_1->_IO_read_ptr = param_2;
      return param_2;
    }
    goto LAB_0049d434;
  }
  local_18 = (char *)0x0;
  uVar2 = nn::fs::GetFileSize(&local_18,*(undefined8 *)param_1);
  if ((uVar2 == 0) &&
     (((long)param_2 < 1 ||
      (uVar2 = nn::fs::SetFileSize(*(undefined8 *)param_1,local_18 + (long)param_2), uVar2 == 0))))
  {
LAB_0049d3cc:
    param_1->_IO_read_ptr = local_18 + (long)param_2;
    return local_18 + (long)param_2;
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
LAB_0049d4b8:
          if (299 < uVar2 - 0xc80) {
            if (999 < uVar2 - 4000) goto LAB_0049d3e4;
            uVar3 = 5;
            goto LAB_0049d3e8;
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
        if (uVar1 != 0x177a00) goto LAB_0049d4b8;
        uVar3 = 0x1d;
      }
    }
    *(undefined4 *)((long)&param_1->_IO_read_end + 4) = uVar3;
  }
  else {
LAB_0049d3e4:
    uVar3 = 0xffff;
LAB_0049d3e8:
    *(undefined4 *)((long)&param_1->_IO_read_end + 4) = uVar3;
  }
LAB_0049d434:
  param_1->_IO_read_ptr = (char *)0xffffffffffffffff;
  return (char *)0xffffffffffffffff;
}


