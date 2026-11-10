/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ed3bc; name: FUN_004ed3bc
 */


void FUN_004ed3bc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_047cd750;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      if (((*(int *)(lVar4 + lVar7 * 0x30 + 0x18) != 1) ||
          (*(char *)(**(long **)(lVar4 + lVar7 * 0x30 + 0x20) + 0x41) == '\0')) &&
         (0 < *(int *)(lVar4 + lVar7 * 0x30 + 0x18))) {
        lVar6 = 0;
        do {
          lVar4 = *(long *)(*(long *)(lVar4 + lVar7 * 0x30 + 0x20) + lVar6 * 8);
          if (*(char *)(lVar4 + 0x43) == '\0') {
            plVar5 = (long *)(*(long *)(lVar4 + 0x50) + 0x28);
          }
          else if (*(long *)(lVar4 + 0x60) == 0) {
            plVar5 = (long *)(*(long *)(lVar4 + 0x28) + 0x80);
          }
          else {
            plVar5 = (long *)(*(long *)(lVar4 + 0x60) + 0x50);
          }
          uVar1 = (int)((ulong)(lVar4 - *plVar5) >> 3) * 0x286bca1b;
          puVar3 = *(ulong **)(lVar4 + 0x30);
          uVar8 = (ulong)*(uint *)(param_2 +
                                  (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)
                                  );
          if ((puVar3 != (ulong *)0x0) &&
             (puStack_80 = PTR_LAB_047cd728, local_88 = lVar4, *puVar3 != 0xffffffffffffffff)) {
            local_70 = &puStack_80;
            local_68 = &local_88;
            local_78 = &local_70;
            std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
          }
          switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar4 + 0x38) * 4)) {
          case 1:
          case 3:
          case 6:
            *(undefined4 *)(param_3 + uVar8) = *(undefined4 *)(lVar4 + 0x90);
            break;
          case 7:
            *(undefined1 *)(param_3 + uVar8) = *(undefined1 *)(lVar4 + 0x90);
            break;
          case 8:
            lVar4 = FUN_004a6930(lVar4);
            *(undefined4 *)(param_3 + uVar8) = *(undefined4 *)(lVar4 + 0x10);
            break;
          case 9:
            *(undefined8 *)(param_3 + uVar8) = 0;
          case 2:
          case 4:
          case 5:
            *(undefined8 *)(param_3 + uVar8) = *(undefined8 *)(lVar4 + 0x90);
            break;
          case 10:
            *(undefined8 *)(param_3 + uVar8) = 0;
          }
          lVar4 = *(long *)(param_1 + 0x30);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar4 + lVar7 * 0x30 + 0x18));
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x6c));
  }
  return;
}


