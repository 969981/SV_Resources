/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d6128; name: FUN_012d6128
 */


void FUN_012d6128(int *param_1,undefined8 *param_2)

{
  char *__s;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_b8;
  char *pcStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined1 auStack_98 [24];
  long *local_80;
  long *local_68;
  
  if ((8 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar6 != 0)) {
    uVar7 = (ulong)*(uint *)((long)param_1 + uVar6);
    puVar1 = (uint *)((long)((long)param_1 + uVar6) + uVar7);
    if (*puVar1 != 0) {
      uVar4 = 0;
      lVar8 = (long)param_1 + uVar7 + uVar6 + 9;
      do {
        puVar2 = puVar1 + uVar4 + 1;
        uVar6 = (ulong)*puVar2;
        __s = (char *)((long)puVar2 + uVar6 + 4);
        local_a8 = strlen(__s);
        bVar3 = *(byte *)((long)puVar2 + uVar6 + 4);
        if (bVar3 == 0) {
          local_b8 = &DAT_cbf29ce484222645;
        }
        else {
          local_b8 = &DAT_cbf29ce484222645;
          pbVar5 = (byte *)(lVar8 + uVar6);
          do {
            local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar3 != 0);
        }
        local_a0 = (long *)0x0;
        pcStack_b0 = __s;
        FUN_013011d0(auStack_98,*param_2,&local_b8);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        uVar4 = uVar4 + 1;
        lVar8 = lVar8 + 4;
      } while (uVar4 < *puVar1);
    }
  }
  return;
}


