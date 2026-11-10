/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026de34; name: FUN_0026de34
 */


void FUN_0026de34(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_60 [4];
  long local_40;
  undefined8 uStack_38;
  
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (local_80 != *param_3) {
    do {
      local_40 = *(long *)(local_80 + 8);
      FUN_0025998c(local_60,*(undefined8 *)(param_1 + 0x10),&local_40,0);
      if (local_60[0] == (long *)0x0) {
        lVar3 = *(long *)(local_80 + 8);
        uStack_38 = 0;
        local_40 = lVar3;
        FUN_00259dc4(local_60,*(undefined8 *)(param_1 + 0x10),&local_40);
        plVar1 = local_60[0];
        lVar4 = local_60[0][1];
        if (lVar4 == 0) {
          lVar4 = FUN_00259ca4(param_1,lVar3);
          *plVar1 = lVar4;
          plVar1[1] = lVar4;
        }
        if (lVar3 != lVar4) {
          FUN_002679fc(lVar4 + 0x18);
          if ((*(ulong *)(lVar4 + 0x20) & 1) != 0) {
            uVar2 = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe;
            if ((*(byte *)(uVar2 + 8) & 1) == 0) {
              *(undefined2 *)(uVar2 + 8) = 0;
            }
            else {
              **(undefined1 **)(uVar2 + 0x18) = 0;
              *(undefined8 *)(uVar2 + 0x10) = 0;
            }
          }
          FUN_00269254(lVar4 + 0x18,lVar3 + 0x18);
        }
      }
      FUN_0025aac8(&local_80);
    } while (local_80 != *param_3);
  }
  return;
}


