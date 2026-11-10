/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001025d0; name: FUN_001025d0
 */


void FUN_001025d0(long param_1)

{
  long *plVar1;
  int iVar2;
  void *__src;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  uint local_6c;
  void *local_68;
  
  if (((*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)(*(int *)(param_1 + 300) - 1) * 0x1c0 + 0x170)
        != 0) && (*(int *)(param_1 + 300) != 0)) && (*(int *)(param_1 + 0x630) != 0)) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5c);
    if ((iVar2 < 1) || (iVar2 == 2)) {
      iVar2 = FUN_001207b0(param_1 + 0x520,0);
      if ((iVar2 != 0) && (*(int *)(param_1 + 300) != 0)) {
        uVar3 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x1b8);
          piVar6 = (int *)(lVar5 + uVar3 * 0x1c0);
          iVar2 = (**(code **)(piVar6 + 0x5c))(piVar6);
          if (iVar2 != 0) {
            lVar5 = lVar5 + uVar3 * 0x1c0;
            plVar1 = (long *)(lVar5 + 0x28);
            do {
              uVar7 = *piVar6 - *(int *)plVar1;
              if ((int)uVar7 < 0) {
                uVar7 = *(int *)(lVar5 + 0xc) + uVar7;
              }
              if ((((int)uVar7 <= *(int *)(lVar5 + 0x3c)) &&
                  ((uVar7 == 0 || (*(int *)(param_1 + 0xc) <= *(int *)(lVar5 + 0x50))))) ||
                 (iVar2 = (**(code **)(lVar5 + 0x178))(piVar6,&local_68,&local_6c), iVar2 == 0))
              break;
              if (uVar7 < local_6c) {
                local_6c = uVar7;
              }
              if (*(int *)(param_1 + 0xc) <= *(int *)(lVar5 + 0x50)) {
                local_6c = local_6c & *(uint *)(lVar5 + 0x40);
              }
              __src = (void *)*plVar1;
              uVar8 = *(long *)(lVar5 + 0x18) - (long)__src;
              uVar7 = (uint)uVar8;
              if (uVar7 < local_6c) {
                if (uVar7 != 0) {
                  uVar8 = uVar8 & 0xffffffff;
                  memmove(local_68,__src,uVar8);
                  local_68 = (void *)((long)local_68 + uVar8);
                }
                memmove(local_68,*(void **)(lVar5 + 0x10),(ulong)(local_6c - uVar7));
                plVar4 = (long *)(lVar5 + 0x10);
                uVar7 = local_6c - uVar7;
              }
              else {
                memmove(local_68,__src,(ulong)local_6c);
                plVar4 = plVar1;
                uVar7 = local_6c;
              }
              *plVar1 = *plVar4 + (ulong)uVar7;
              (**(code **)(lVar5 + 0x180))(piVar6,local_6c);
              iVar2 = (**(code **)(piVar6 + 0x5c))(piVar6);
            } while (iVar2 != 0);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 300));
        if (*(uint *)(param_1 + 300) != 0) {
          iVar2 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5c);
          if ((iVar2 < 1) || (iVar2 == 2)) {
            FUN_00120750(param_1 + 0x520);
          }
        }
      }
    }
  }
  return;
}


