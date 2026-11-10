/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786618; name: FUN_02786618
 */


bool FUN_02786618(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (((*(byte *)(param_1 + 0x24a) & 1) != 0) && (*(int *)(param_1 + 0x368) == 2)) {
    if ((((char)param_3[3] != '\0') || ((*param_3 != 0 && (*(short *)(*param_3 + 0x1a) != 0)))) &&
       (plVar2 = (long *)param_3[2], plVar2 != (long *)0x0)) {
      if (*(char *)(param_1 + 0x3e0) == '\0') {
        if (*(int *)(param_1 + 0x3dc) == 0) {
          (**(code **)*plVar2)
                    (plVar2,param_2,*(undefined8 *)(param_1 + 0x3b8),(long)*(int *)(param_1 + 0x3d8)
                    );
        }
        else {
          (**(code **)(*plVar2 + 8))(plVar2,param_2,param_1 + 0x3dc);
        }
      }
      else {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (*(int *)(param_1 + 0x3d8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x3b8) + lVar3;
        (**(code **)(**(long **)(param_1 + 0x360) + 0x70))
                  (*(long **)(param_1 + 0x360),*(undefined8 *)(lVar1 + 0x48),
                   *(undefined8 *)(lVar1 + 0x50));
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x58;
      } while (uVar4 < (ulong)(long)*(int *)(param_1 + 0x3d8));
    }
    lVar3 = *(long *)(param_1 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    if (lVar3 != 0) {
      FUN_02786830(param_1 + 0x3c0);
    }
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    FUN_014ece90(param_1);
    *(undefined1 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  return (*(byte *)(param_1 + 0x249) & 1) == 0;
}


