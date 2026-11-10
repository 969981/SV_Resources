/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c83c0; name: FUN_034c83c0
 */


ulong FUN_034c83c0(long *param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  void *__s;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  void *local_68;
  
  puVar9 = PTR_DAT_047e2fd0;
  uVar2 = param_2 << 1;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  uVar6 = (ulong)uVar2;
  __s = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(param_3,uVar6 << 3);
  if (__s == (void *)0x0) {
LAB_034c8570:
    uVar6 = 0xffffffff;
  }
  else {
    local_68 = __s;
    memset(__s,0,uVar6 << 3 & 0xfffffff8);
    if (0 < (int)param_2) {
      uVar7 = 0;
      do {
        lVar8 = *param_1;
        uVar2 = *(uint *)(lVar8 + uVar7 * 8);
        if (uVar2 >> 0x1e == 2) {
          if (__s == (void *)0x0) {
LAB_034c84a4:
            do {
              uVar4 = FUN_034c83c0(&local_68,uVar6,param_3);
              if (uVar4 == 0xffffffff) {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(param_3,local_68);
                goto LAB_034c8570;
              }
              uVar6 = (ulong)uVar4;
              if (local_68 == (void *)0x0) {
LAB_034c8500:
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = uVar4 - 1 & uVar2;
                do {
                  cVar3 = uVar5 + 1 == uVar4;
                  if ((*(uint *)((long)local_68 +
                                (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3))
                      & 0xc0000000) == 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  else {
                    cVar3 = '\x02';
                  }
                } while (cVar3 == '\0');
                if (cVar3 != '\x02') goto LAB_034c8500;
              }
              __s = local_68;
            } while (uVar5 == 0xffffffff);
          }
          else {
            uVar5 = uVar2 & (int)uVar6 - 1U;
            do {
              cVar3 = uVar5 + 1 == (int)uVar6;
              if ((*(uint *)((long)__s +
                            (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) &
                  0xc0000000) == 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              else {
                cVar3 = '\x02';
              }
            } while (cVar3 == '\0');
            if (cVar3 != '\x02' || uVar5 == 0xffffffff) goto LAB_034c84a4;
          }
          puVar1 = (uint *)((long)__s + (long)(int)uVar5 * 8);
          *puVar1 = uVar2 | 0x80000000;
          puVar1[1] = *(uint *)(lVar8 + uVar7 * 8 + 4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_2);
      __s = local_68;
      puVar9 = PTR_DAT_047e2fd0;
    }
    (**(code **)(puVar9 + 0x30))(param_3,*param_1);
    *param_1 = (long)__s;
  }
  return uVar6;
}


