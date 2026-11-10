/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03335e18; name: FUN_03335e18
 */


void FUN_03335e18(long param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  void *__s1;
  int iVar1;
  char *__s;
  size_t sVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  size_t __n;
  long lVar7;
  undefined1 *local_f8;
  ulong local_f0;
  undefined1 local_e8 [128];
  undefined4 local_68;
  
  local_e8[0] = 0;
  local_f8 = local_e8;
  local_f0 = 0x8000008000000001;
  local_68 = 1;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar7 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x48) + lVar7 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        __s = (char *)FUN_031e12d8(*puVar4,&local_f8,0,0);
        __s1 = (void *)*param_2;
        __n = param_2[1] - (long)__s1;
        if (__s == (char *)0x0) {
          if (__n == 0) goto LAB_03335ed4;
        }
        else {
          sVar2 = strlen(__s);
          if ((sVar2 == __n) && (iVar1 = memcmp(__s1,__s,__n), iVar1 == 0)) {
LAB_03335ed4:
            plVar3 = *(long **)(*(long *)(param_1 + 0x48) + lVar7 * 8);
            puVar5 = (ulong *)*plVar3;
            do {
              uVar6 = *puVar5;
              if (((uint)uVar6 >> 4 & 1) != 0) {
                iVar1 = (int)puVar5[(ulong)(byte)POPCOUNT((byte)uVar6 & 0xf) + 2];
                goto LAB_03335f24;
              }
              if ((uVar6 & 9) != 0) {
                iVar1 = 0;
                goto LAB_03335f24;
              }
              puVar5 = (ulong *)puVar5[1];
            } while (puVar5 != (ulong *)0x0);
            iVar1 = 0;
LAB_03335f24:
            if (iVar1 == param_3) {
              FUN_03335fa0(plVar3,param_4);
            }
          }
        }
      }
      uVar6 = local_f0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x50));
    local_f0 = local_f0 & 0xffffffff00000000;
    if ((-1 < (long)uVar6) && (local_f8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  return;
}


