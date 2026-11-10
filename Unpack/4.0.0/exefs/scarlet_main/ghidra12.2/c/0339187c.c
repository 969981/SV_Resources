/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339187c; name: FUN_0339187c
 */


void FUN_0339187c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar1 = PTR_DAT_047d1a08;
  if ((*(long *)(param_1 + 0x100) != 0) && (*(int *)(*(long *)(param_1 + 0x100) + 8) != 0)) {
    local_28 = 0x20;
    puVar2 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
      (**(code **)(puVar1 + 0x10))(puVar2,"hkHashSet");
    }
    *puVar2 = 0;
    puVar2[1] = 0x8000000000000000;
    puVar2[2] = &DAT_03d7702c;
    *(undefined4 *)(puVar2 + 3) = 0;
    plVar4 = *(long **)(param_1 + 0x100);
    *(undefined8 **)(param_1 + 0x100) = puVar2;
    if (plVar4 != (long *)0x0) {
      lVar3 = plVar4[2];
      if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
        (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
        plVar4[2] = (long)&DAT_03d7702c;
        *(undefined4 *)(plVar4 + 3) = 0;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar4 + 0xc)) && (*plVar4 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*plVar4,(ulong)*(uint *)((long)plVar4 + 0xc) << 2);
      }
      *plVar4 = 0;
      *(undefined4 *)((long)plVar4 + 0xc) = 0x80000000;
      (**(code **)(puVar1 + 8))(0,plVar4,0);
    }
  }
  return;
}


