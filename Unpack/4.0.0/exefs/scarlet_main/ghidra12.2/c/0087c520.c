/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087c520; name: FUN_0087c520
 */


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0087c520(long *param_1,long *param_2,uint param_3,int param_4,undefined4 param_5,byte param_6)

{
  int iVar1;
  void *__s;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  byte local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar5 = 0x80800005;
  FUN_0087d2c0(param_5,param_3,&local_80);
  local_84 = param_6 & 1;
  local_b4 = local_80;
  local_ac = uStack_78;
  local_8c = uStack_58;
  local_94 = local_60;
  local_9c = uStack_68;
  local_a4 = local_70;
  local_c0 = param_3;
  local_bc = param_4;
  local_b8 = param_5;
  if (param_1[4] == 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))
                      (param_2,param_4 << 10,"../audiomaster/include\\audio_master.h",0x9a);
    param_1[4] = lVar3;
    if (lVar3 == 0) {
      return 0x80800005;
    }
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
  }
  iVar1 = local_bc << 10;
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))
                      (param_2,iVar1,"../audiomaster/include\\audio_master_common.h",0x109);
    *param_1 = lVar3;
    lVar3 = param_1[1];
  }
  else {
    lVar3 = param_1[1];
  }
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))
                      (param_2,iVar1,"../audiomaster/include\\audio_master_common.h",0x10b);
    param_1[1] = lVar3;
    lVar3 = param_1[2];
  }
  else {
    lVar3 = param_1[2];
  }
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))
                      (param_2,iVar1,"../audiomaster/include\\audio_master_common.h",0x10d);
    param_1[2] = lVar3;
    lVar4 = *param_1;
  }
  else {
    lVar4 = *param_1;
  }
  if (((lVar4 != 0) && (lVar3 != 0)) && (param_1[1] != 0)) {
    if (local_84 != 0) {
      lVar3 = (**(code **)(*param_2 + 0x10))
                        (param_2,0x400,"../audiomaster/include\\audio_master_common.h",0x117);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        return 0x80800005;
      }
    }
    if (param_1[0xb3] == 0) {
      uVar6 = local_bc << 9;
      __s = (void *)(**(code **)(*param_2 + 0x10))
                              (param_2,(ulong)uVar6,"../audiomaster/include/modules\\limiter.h",0x6f
                              );
      param_1[0xb3] = (long)__s;
      if (__s == (void *)0x0) {
        return 0x80800005;
      }
      memset(__s,0,(ulong)uVar6);
    }
    if ((local_84 != 0) && (local_c0 != 0)) {
      lVar3 = param_1[0xb4];
      uVar6 = 0;
      uVar2 = local_c0;
      do {
        if ((uVar6 == 0) && (lVar3 == 0)) {
          lVar3 = (**(code **)(*param_2 + 0x10))
                            (param_2,0x400,"../audiomaster/include/modules\\limiter.h",0x7c);
          param_1[0xb4] = lVar3;
          if (lVar3 == 0) {
            return 0x80800005;
          }
          uVar2 = local_c0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    iVar1 = FUN_0087cb30(param_1 + 0x16c,param_2,&local_c0);
    if (iVar1 == 0) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x461) = 1;
    }
  }
  return uVar5;
}


