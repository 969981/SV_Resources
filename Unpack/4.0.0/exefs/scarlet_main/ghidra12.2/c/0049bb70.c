/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049bb70; name: FUN_0049bb70
 */


undefined8 FUN_0049bb70(undefined8 *param_1,char *param_2)

{
  ulong __n;
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_38;
  uint local_34;
  uint local_28;
  uint uStack_24;
  
  pcVar4 = strchr(param_2,0x3a);
  if (pcVar4 == (char *)0x0) {
    iVar3 = sscanf(param_2,"%d.%d.%d.%d",(int *)&local_50,(int *)&uStack_24,(int *)&local_28,
                   (int *)&local_34);
    if ((iVar3 == 4) && ((uStack_24 | local_50 | local_28 | local_34) < 0x100)) {
      *(char *)param_1 = (char)local_50;
      *(char *)((long)param_1 + 1) = (char)uStack_24;
      *(char *)((long)param_1 + 2) = (char)local_28;
      *(char *)((long)param_1 + 3) = (char)local_34;
      return 4;
    }
  }
  else {
    local_40 = -0x100000000;
    local_38 = 0;
    iVar3 = FUN_003f4860(param_2,0x3a,0,&LAB_0049c640,&local_50);
    if (iVar3 != 0) {
      uVar1 = (uint)local_40;
      uVar2 = local_40._4_4_;
      __n = (ulong)local_40._4_4_;
      lVar5 = (long)(int)(uint)local_40;
      if (local_40._4_4_ == 0xffffffff) {
        if ((uint)local_40 == 0x10) goto LAB_0049bc6c;
      }
      else if (((uint)local_40 != 0x10) && (local_38 < 4)) {
        if (local_38 == 2) {
          if ((local_40._4_4_ != 0) && ((uint)local_40 != local_40._4_4_)) {
            return 0;
          }
        }
        else if (local_38 == 3) {
          if (0 < (int)(uint)local_40) {
            return 0;
          }
        }
        else {
          if (local_40._4_4_ == 0) {
            return 0;
          }
          if ((uint)local_40 == local_40._4_4_) {
            return 0;
          }
        }
        if (-1 < local_40) {
          memcpy(param_1,&local_50,__n);
          memset((undefined1 *)((long)param_1 + __n),0,0x10 - lVar5);
          if (uVar1 != uVar2) {
            memcpy((undefined1 *)((long)param_1 + __n) + (0x10 - lVar5),
                   (void *)((long)&local_50 + __n),(long)(int)(uVar1 - uVar2));
          }
          return 0x10;
        }
LAB_0049bc6c:
        param_1[1] = uStack_48;
        *param_1 = CONCAT44(uStack_4c,local_50);
        return 0x10;
      }
    }
  }
  return 0;
}


