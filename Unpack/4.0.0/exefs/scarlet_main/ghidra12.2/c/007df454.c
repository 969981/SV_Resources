/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007df454; name: FUN_007df454
 */


ulong FUN_007df454(ushort *param_1,long param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_70 [4];
  int local_60 [4];
  long local_50;
  byte local_44 [4];
  int local_40 [4];
  
  if ((ulong)*param_1 != 0) {
    uVar5 = 0;
    pcVar6 = (char *)(*(long *)(param_1 + 4) + 0x1c);
    do {
      if ((*(long *)(pcVar6 + -0xc) == 0) || (*pcVar6 == -1)) {
        local_44[0] = (byte)uVar5;
        if ((~(uint)uVar5 & 0xff) == 0) {
          return 0xff;
        }
        lVar3 = FUN_007de240(param_2 + 8);
        local_60[0] = 0;
        local_40[0] = 0;
        local_50 = lVar3;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_40);
        puVar1 = (uint *)(param_1 + 0x14);
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          uVar8 = (uint)lVar3;
          uVar7 = (uint)((ulong)lVar3 >> 0x20);
          uVar7 = (uVar8 >> 8 & 0xff) + (uVar8 & 0xff) + ((uint)((ulong)lVar3 >> 0x10) & 0xff) +
                  (uVar8 >> 0x18) + (uVar7 & 0xff) + (uVar7 >> 8 & 0xff) +
                  ((ushort)((ulong)lVar3 >> 0x30) & 0xff) + (uint)(byte)((ulong)lVar3 >> 0x38);
          uVar8 = *puVar1;
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar7 / uVar8;
          }
          uVar5 = (ulong)(uVar7 - uVar2 * uVar8);
        }
        else {
          uVar5 = (**(code **)(param_1 + 0x34))(&local_50,*puVar1);
        }
        plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (uVar5 & 0xffffffff) * 0x18);
        goto joined_r0x007df558;
      }
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (*param_1 != uVar5);
  }
  return 0xff;
joined_r0x007df558:
  if (plVar4 == (long *)0x0) {
    local_40[0] = 0x2c0a;
LAB_007df584:
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_70);
    FUN_00cbd7c0(local_70,local_40);
    FUN_018ff39c(local_60,local_70);
    local_40[0] = 0x2c0a;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_70);
    if (local_60[0] == local_40[0]) {
      FUN_007df644(local_40,puVar1,&local_50,local_44);
      FUN_018ff39c(local_60,local_40);
      if (local_60[0] == 0) {
        param_1[1] = param_1[1] + 1;
        lVar3 = *(long *)(param_1 + 4) + (ulong)local_44[0] * 0x20;
        *(long *)(lVar3 + 0x10) = param_2;
        *(byte *)(lVar3 + 0x1c) = local_44[0];
        *(undefined4 *)(lVar3 + 0x18) = param_3;
        return (ulong)local_44[0];
      }
    }
    return 0xff;
  }
  if (*plVar4 == local_50) {
    local_40[0] = 0;
    goto LAB_007df584;
  }
  plVar4 = (long *)plVar4[6];
  goto joined_r0x007df558;
}


