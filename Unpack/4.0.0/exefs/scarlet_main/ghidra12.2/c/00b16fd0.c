/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b16fd0; name: FUN_00b16fd0
 */


void FUN_00b16fd0(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_34;
  long local_30;
  undefined1 auStack_28 [8];
  
  local_30 = 0;
  if (*param_2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_0192eda0(&local_40,&local_30);
    local_34 = 0;
    if ((*param_2 != 0) && (FUN_01e643c8(&local_40,&local_34), local_34 == -1)) goto LAB_00b170c8;
  }
  uVar2 = FUN_00a36a04(param_1 + 0xb70);
  if ((uVar2 & 1) == 0) {
    if (DAT_04835710 != (code *)0x0) {
      local_40 = CONCAT44(local_40._4_4_,local_34);
      (*DAT_04835710)(&DAT_04835730,&local_40);
    }
    if (local_30 != 0) {
      *(long *)(param_1 + 0xbd8) = local_30;
      if ((((*(long *)(param_1 + 0xbe0) != local_30) && (*(long *)(param_1 + 0xbe8) != local_30)) &&
          (*(long *)(param_1 + 0xbf0) != local_30)) && (*(long *)(param_1 + 0xbf8) != local_30)) {
        if (*(long *)(param_1 + 0xbe0) == 0) {
          plVar3 = (long *)(param_1 + 0xbe0);
        }
        else if (*(long *)(param_1 + 0xbe8) == 0) {
          plVar3 = (long *)(param_1 + 0xbe8);
        }
        else if (*(long *)(param_1 + 0xbf0) == 0) {
          plVar3 = (long *)(param_1 + 0xbf0);
        }
        else {
          if (*(long *)(param_1 + 0xbf8) != 0) goto LAB_00b170c8;
          plVar3 = (long *)(param_1 + 0xbf8);
        }
        *plVar3 = local_30;
      }
    }
  }
LAB_00b170c8:
  plVar3 = (long *)*param_2;
  if ((plVar3 != (long *)0x0) &&
     (cVar1 = *(char *)(*plVar3 + plVar3[2]), plVar3[2] = plVar3[2] + 1, cVar1 == '\x01')) {
    local_40 = 0;
    if (*param_2 != 0) {
      FUN_026ee310(*param_2,&local_40);
    }
    *(undefined8 *)(param_1 + 0xb70) = local_40;
    local_44 = 0;
    if (*param_2 != 0) {
      FUN_01e643c8(auStack_28,&local_44);
    }
    *(undefined4 *)(param_1 + 0xb78) = local_44;
    local_48 = 0;
    if (*param_2 == 0) {
      local_48 = 0;
    }
    else {
      FUN_01e643c8(auStack_28,&local_48);
    }
    *(undefined4 *)(param_1 + 0xb7c) = local_48;
  }
  return;
}


