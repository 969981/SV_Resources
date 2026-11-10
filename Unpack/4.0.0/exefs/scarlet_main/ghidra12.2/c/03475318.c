/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03475318; name: FUN_03475318
 */


void FUN_03475318(void)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *local_50;
  undefined1 local_48;
  
  if (DAT_048afcb8 != '\0') {
    DAT_048afcb8 = '\0';
    nn::os::LockMutex((MutexType *)&DAT_048afcc0);
    if (DAT_048afca0 != 0) {
      uVar6 = 0;
      do {
        uVar7 = 0x3f800000;
        local_50 = *(long **)(DAT_048afc98 + uVar6 * 8);
        local_48 = 0x61;
        if (local_50[0xe] != 0) {
          pbVar4 = *(byte **)(local_50[0xe] + 0x18);
          uVar7 = 0x3f800000;
          if (pbVar4 != (byte *)0x0) {
            bVar2 = *pbVar4;
            uVar1 = (uint)bVar2;
            if (bVar2 < 2) {
              uVar1 = 1;
            }
            uVar3 = (ulong)uVar1;
            pbVar5 = pbVar4 + ((ulong)(bVar2 + 4) & 0x1fc);
            do {
              pbVar4 = pbVar4 + 1;
              if (*pbVar4 == 0xb) {
                uVar7 = *(undefined4 *)pbVar5;
                goto LAB_034753d8;
              }
              pbVar5 = pbVar5 + 0x10;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            uVar7 = 0x3f800000;
          }
        }
LAB_034753d8:
        (**(code **)(*local_50 + 0xd0))(uVar7,local_50,&local_50,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_048afca0);
    }
    if (*(code **)(PTR_DAT_047e6ce8 + 0x38) != (code *)0x0) {
      (**(code **)(PTR_DAT_047e6ce8 + 0x38))(DAT_048afcb8,*(undefined8 *)(PTR_DAT_047e6ce8 + 0x40));
    }
    nn::os::UnlockMutex((MutexType *)&DAT_048afcc0);
  }
  return;
}


