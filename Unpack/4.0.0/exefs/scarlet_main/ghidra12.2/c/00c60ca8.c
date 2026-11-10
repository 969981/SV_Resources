/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c60ca8; name: FUN_00c60ca8
 */


void FUN_00c60ca8(long *param_1,int param_2,uint param_3,char *param_4,char *param_5,long *param_6)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  uint local_18;
  uint local_14;
  
  if ((param_2 == 2) && (lVar4 = *param_6, *(uint *)(lVar4 + 0x500) <= param_3)) {
    pcVar1 = (char *)(lVar4 + (ulong)param_3 * 0x10);
    if (*pcVar1 == '\0' || *param_4 == '\0') {
      if (*param_4 != '\0' || *pcVar1 != '\0') {
LAB_00c60d04:
        uVar3 = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)pcVar1 = *(undefined8 *)param_4;
        *(undefined8 *)(pcVar1 + 8) = uVar3;
        goto LAB_00c60d0c;
      }
    }
    else if (*(long *)(lVar4 + (ulong)param_3 * 0x10 + 8) != *(long *)(param_4 + 8))
    goto LAB_00c60d04;
    local_14 = *(uint *)(lVar4 + (ulong)param_3 * 4 + 0x200);
  }
  else {
LAB_00c60d0c:
    local_14 = 0xffffffff;
  }
  if (*param_5 == '\0') {
    local_40 = *(undefined8 *)(*param_1 + 0x62a0);
    local_38 = *(long *)(*param_1 + 0x62a8);
  }
  else {
    local_40 = *(undefined8 *)param_5;
    local_38 = *(long *)(param_5 + 8);
  }
  if ((param_2 == 2) && (lVar4 = *param_6, *(uint *)(lVar4 + 0x500) <= param_3)) {
    lVar2 = lVar4 + (ulong)param_3 * 0x10;
    if ((*(char *)(lVar2 + 0x280) == '\0') || ((char)local_40 == '\0')) {
      if ((char)local_40 == '\0' && *(char *)(lVar2 + 0x280) == '\0') goto LAB_00c60df8;
    }
    else if (*(long *)(lVar4 + (ulong)param_3 * 0x10 + 0x288) == local_38) {
LAB_00c60df8:
      local_18 = *(uint *)(lVar4 + (ulong)param_3 * 4 + 0x480);
      goto LAB_00c60d74;
    }
    *(undefined8 *)(lVar2 + 0x280) = local_40;
    *(long *)(lVar2 + 0x288) = local_38;
  }
  local_18 = 0xffffffff;
LAB_00c60d74:
  if ((((int)(local_18 | local_14) < 0) &&
      (FUN_00c60e30(param_1,param_2,param_3,param_4,&local_40,&local_14,&local_18), param_2 == 2))
     && (*(uint *)(*param_6 + 0x500) <= param_3)) {
    *(uint *)(*param_6 + (ulong)param_3 * 4 + 0x200) = local_14;
    *(uint *)(*param_6 + (ulong)param_3 * 4 + 0x480) = local_18;
  }
  return;
}


