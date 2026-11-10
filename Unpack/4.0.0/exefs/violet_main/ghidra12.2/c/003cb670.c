/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cb670; name: FUN_003cb670
 */


undefined8 FUN_003cb670(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int local_38;
  undefined1 auStack_34 [4];
  
  uVar6 = FUN_003acde0();
  if ((int)uVar6 != 0) {
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0) ||
         (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) {
        piVar8 = (int *)(*(long *)(param_1 + 0x878) + 0x70);
      }
      else {
        piVar8 = (int *)(*(long *)(param_1 + 0x878) + 0x74);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar7 + 0xd0) = 0;
      *(undefined8 *)(lVar7 + 200) = 0;
      *(undefined8 *)(lVar7 + 0xc0) = 0;
      *(undefined8 *)(lVar7 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x248) = 0;
      uVar6 = 1;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
    }
    else {
      uVar6 = FUN_003b4400(param_1);
      iVar4 = FUN_003cb8a0(param_1,auStack_34,&local_38,0);
      if (iVar4 == 0) {
        iVar4 = FUN_0047e430(uVar6);
        if (0 < iVar4) {
          iVar4 = 0;
          iVar1 = 0xff00;
          if (local_38 != 0x100) {
            iVar1 = local_38;
          }
          do {
            lVar7 = FUN_0047e450(uVar6,iVar4);
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              if ((*(int *)(lVar7 + 0x2c) <= local_38) && (local_38 <= *(int *)(lVar7 + 0x30))) {
LAB_003cb7ac:
                if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0) ||
                   (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) {
                  piVar8 = (int *)(*(long *)(param_1 + 0x878) + 0x7c);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                      *piVar8 = *piVar8 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                else {
                  piVar8 = (int *)(*(long *)(param_1 + 0x660) + 0x80);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                      *piVar8 = *piVar8 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x2a0) = 0;
                }
                return 1;
              }
            }
            else {
              iVar5 = 0xff00;
              if (*(int *)(lVar7 + 0x34) != 0x100) {
                iVar5 = *(int *)(lVar7 + 0x34);
              }
              if (iVar1 <= iVar5) {
                iVar5 = 0xff00;
                if (*(int *)(lVar7 + 0x38) != 0x100) {
                  iVar5 = *(int *)(lVar7 + 0x38);
                }
                if (iVar5 <= iVar1) goto LAB_003cb7ac;
              }
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_0047e430(uVar6);
          } while (iVar4 < iVar5);
        }
        FUN_003c3950(param_1,0x28,0x1fc,0xb5,"external/openssl/ssl/statem/statem_lib.c",0x94);
        FUN_00481380(1,"No ciphers enabled for max supported SSL/TLS version");
        uVar6 = 0;
      }
      else {
        FUN_003c3950(param_1,0x50,0x1fc,0x44,"external/openssl/ssl/statem/statem_lib.c",0x82);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


