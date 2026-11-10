/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333dadc; name: FUN_0333dadc
 */


void FUN_0333dadc(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  size_t sVar9;
  char *local_110;
  ulong local_108;
  char local_100 [128];
  undefined4 local_80;
  char *local_78;
  char *pcStack_70;
  
  local_78 = (char *)*param_4;
  pcStack_70 = (char *)param_4[1];
  if (param_6 == -1) {
    iVar3 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar3 = 0;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),0x18);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= iVar2) {
    FUN_03340894((long *)(param_1 + 0x20),(long)iVar2 + 1);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8);
  if (0 < iVar2 - iVar3) {
    FUN_031d0240(puVar1 + 1,puVar1,(ulong)(uint)(iVar2 - iVar3) << 3);
  }
  *puVar1 = puVar4;
  *(int *)(param_1 + 0x28) = (int)((long)iVar2 + 1);
  uVar5 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                       *(int *)(param_2 + 1) - (int)*param_2,1);
  *puVar4 = uVar5;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0x22222222;
  *(undefined2 *)((long)puVar4 + 0xc) = 0;
  local_110 = local_100;
  local_108 = 0x8000008000000001;
  local_80 = 1;
  local_100[0] = '\0';
  if (((local_78 != pcStack_70) && (*local_78 == '$')) &&
     (uVar7 = (ulong)*(uint *)(param_1 + 0x58), 0 < (int)*(uint *)(param_1 + 0x58))) {
    __s1 = local_78 + 1;
    sVar9 = (long)pcStack_70 - (long)__s1;
    plVar8 = (long *)(*(long *)(param_1 + 0x50) + 8);
    do {
      lVar6 = *plVar8;
      __n = strlen((char *)(lVar6 + 1));
      if ((sVar9 == __n) && (iVar3 = memcmp(__s1,(char *)(lVar6 + 1),__n), iVar3 == 0)) {
        FUN_031e12d8(plVar8[-1],&local_110,0,0);
        pcStack_70 = local_110 + (long)(int)local_108 + -1;
        local_78 = local_110;
        break;
      }
      plVar8 = plVar8 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_0333d108(*(undefined8 *)(param_1 + 0x18),param_3,&local_78,param_5,puVar4 + 2,param_7);
  uVar7 = local_108;
  local_108 = local_108 & 0xffffffff00000000;
  if ((-1 < (long)uVar7) && (local_110 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


