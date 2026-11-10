/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0031a680; name: FUN_0031a680
 */


void FUN_0031a680(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  
  if (*(long *)(param_1 + 0x1360) != 0) {
    FUN_003487f4(*(long *)(param_1 + 0x1360),*(undefined4 *)(param_1 + 0x1368));
  }
  *(undefined4 *)(param_1 + 0x1368) = 0;
  uVar4 = FUN_00319350(param_1,&local_38);
  if ((uVar4 & 1) != 0) {
    if (param_2 < 5) {
      do {
        if (*(long *)(local_38 + 0xab0) != 0) {
          FUN_0031a7a0(param_1,local_38,*(long *)(local_38 + 0xab0),local_38 + 0xaa0,
                       local_38 + 0x108,param_2);
          *(undefined8 *)(local_38 + 0xab0) = 0;
        }
        FUN_003078f0(local_38);
        uVar4 = FUN_00319350(param_1,&local_38);
      } while ((uVar4 & 1) != 0);
    }
    else {
      do {
        lVar3 = local_38;
        lVar6 = *(long *)(local_38 + 0xab0);
        if (lVar6 != 0) {
          lVar1 = local_38 + 0xaa0;
          lVar2 = local_38 + 0x108;
          uVar5 = FUN_00350fb0(param_2);
          FUN_0031a7a0(param_1,lVar3,lVar6,lVar1,lVar2,uVar5);
          *(undefined8 *)(local_38 + 0xab0) = 0;
        }
        FUN_003078f0(local_38);
        uVar4 = FUN_00319350(param_1,&local_38);
      } while ((uVar4 & 1) != 0);
    }
  }
  FUN_00368510(param_1 + 0x2b0);
  if (4 < param_2) {
    FUN_00350fd0(param_2);
  }
  return;
}


