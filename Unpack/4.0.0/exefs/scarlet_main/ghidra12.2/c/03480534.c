/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03480534; name: FUN_03480534
 */


void FUN_03480534(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68 [3];
  
  puVar2 = PTR_DAT_047e6fd8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x58) == 0) {
      memcpy((void *)(param_1 + 0x18),param_2,0x30);
    }
    else {
      puVar6 = *(undefined4 **)(lVar5 + 0x50);
      do {
        iVar1 = 0;
        if (puVar6[6] != 0) {
          iVar1 = puVar6[6] + -2;
        }
        FUN_034b5ad4(*(undefined8 *)puVar2,param_1,*puVar6,*(undefined1 *)(puVar6 + 1),
                     *(undefined1 *)((long)puVar6 + 5),*(undefined2 *)((long)puVar6 + 6),puVar6[2],
                     puVar6[7],*(long *)(puVar6 + 4) + 0xc,iVar1,param_2,1,1);
        puVar6 = puVar6 + 10;
      } while (puVar6 != (undefined4 *)
                         (*(long *)(lVar5 + 0x50) + (ulong)*(uint *)(lVar5 + 0x58) * 0x28));
      lVar5 = *(long *)(param_1 + 0x10);
      memcpy((void *)(param_1 + 0x18),param_2,0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    puVar2 = PTR_DAT_047e7048;
    local_a0 = *param_2;
    local_68[1] = 0;
    local_68[2] = 0x200000001;
    local_98 = 0xff00;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x100000000;
    uStack_70 = 0;
    uVar3 = (ulong)*(uint *)(lVar5 + 0x58);
    if (*(uint *)(lVar5 + 0x58) != 0) {
      lVar4 = *(long *)(lVar5 + 0x50);
      lVar7 = lVar4;
      local_68[0] = param_1;
      do {
        if (*(char *)(lVar7 + 4) == '\x02') {
          FUN_03497f00(*(undefined8 *)puVar2,local_68,&local_a0,param_3);
          lVar4 = *(long *)(lVar5 + 0x50);
          uVar3 = (ulong)*(uint *)(lVar5 + 0x58);
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar4 + uVar3 * 0x28);
    }
  }
  return;
}


